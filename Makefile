SHELL ?= /bin/bash
CC ?= gcc
CFLAGS ?= -nostdlib -I./src/include -Wall -g -fPIC -m64
LDFLAGS = -shared
TARGET = libac.so
CSOURCES = $(shell find . -type f -name "*.c")
SSOURCES = $(shell find . -type f -name "*.S")

INSTALL_PATH ?= /usr/lib
INSTALL_HEADER_PATH ?= /usr/include/alibc
USER_DIR ?= /home/artinel
OS_PATH ?= $(USER_DIR)/os/artia/mnt
INSTALL_OS_PATH ?= $(OS_PATH)/usr/lib
INSTALL_OS_HEADER_PATH ?= $(OS_PATH)/usr/include/alibc
INCLUDE_DIR ?= src/include

OBJECTS = $(CSOURCES:.c=_c.o)
OBJECTS += $(SSOURCES:.S=_s.o)

%_c.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%_s.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

install:
	cp $(TARGET) $(INSTALL_PATH)
	cp $(TARGET) $(INSTALL_PATH)64
	cp -r -T $(INCLUDE_DIR) $(INSTALL_HEADER_PATH)


install-os:
	cp $(TARGET) $(INSTALL_OS_PATH)
	cp $(TARGET) $(INSTALL_OS_PATH)64
	cp -r -T $(INCLUDE_DIR) $(INSTALL_OS_HEADER_PATH)


$(TARGET): $(OBJECTS)
	ld $(LDFLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm $(shell find . -type f -name "*.o")
	rm $(TARGET)
