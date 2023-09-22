CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
CPPFLAGS = -I.

BIN = $(patsubst %.c, %, $(wildcard *.c))

all: $(BIN)

clean:
	rm -f $(BIN)
	rm -rf *.dSYM

.PHONY: all clean
