CC = gcc
CFLAGS = -std=c2x -Wall -Wextra -Iutility -Werror -Wpedantic
SRCS := $(shell find ./src -type f -name '*.c')
OBJS := $(patsubst ./src/%.c, ./build/%.o, $(SRCS))
TARGET = ./build/a.out

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

./build/%.o: ./src/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf ./build