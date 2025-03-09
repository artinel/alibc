SHELL = /bin/bash

CC = gcc
ASM = gcc
LINKER = ld

CFLAGS = -nostdlib -ffreestanding -O3 -static -shared -m64 -fPIC -Wall -Wextra -Werror -I$(INCLUDE_PATH)
ASMFLAGS = $(CFLAGS)
LINKER_FLAGS = -shared

TARGET = libac.so

INSTALL_PATH = /usr/lib
INSTALL_HEADER_PATH = /usr/include/alibc
INCLUDE_PATH = ./include

CSOURCES = $(shell find . -type f -name "*.c")
SSOURCES = $(shell find . -type f -name "*.s")

OBJECTS = $(CSOURCES:.c=_c.o)
OBJECTS += $(SSOURCES:.s=_s.o)


%_c.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%_s.o: %.s
	$(ASM) $(ASMFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(LINKER) $(LINKER_FLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm $(shell find . -type f -name "*.o") $(TARGET)

install-headers:
	cp -r -T $(INCLUDE_PATH) $(INSTALL_HEADER_PATH)

install: install-headers
	cp $(TARGET) $(INSTALL_PATH)
