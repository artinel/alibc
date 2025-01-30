SHELL ?= /bin/bash

CC ?= clang
CFLAGS ?= -nostdlib -I./src/include -Wall -fPIC
LDFLAGS = -shared
TARGET = libac.so

CSOURCES = $(shell find . -type f -name "*.c")
SSOURCES = $(shell find . -type f -name "*.S")

INSTALL_PATH ?= /usr/lib
INSTALL_HEADER_PATH ?= /usr/include/alibc
INCLUDE_DIR ?= src/include

CRT0_OBJ = src/crt0_s.o 

OBJECTS = $(CSOURCES:.c=_c.o)
OBJECTS += $(SSOURCES:.S=_s.o)

DEBUG = 0
ARCH = 64

ifeq ($(DEBUG), 1)
	CFLAGS += -g
endif

ifeq ($(ARCH), 64)
	CFLAGS += -m64
endif

%_c.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%_s.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

install:
	cp $(TARGET) $(INSTALL_PATH)
	cp $(TARGET) $(INSTALL_PATH)64
	cp -r -T $(INCLUDE_DIR) $(INSTALL_HEADER_PATH)
	cp $(CRT0_OBJ) $(INSTALL_PATH)/a_crt0.o
	cp $(CRT0_OBJ) $(INSTALL_PATH)64/a_crt0.o

$(TARGET): $(OBJECTS)
	ld $(LDFLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm $(shell find . -type f -name "*.o")
	rm $(TARGET)
