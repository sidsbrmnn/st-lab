CC = gcc
CFLAGS = -O2 -pipe -Wall -pedantic -std=c99

BIN = $(patsubst %.c,%,$(wildcard *.c))

all: $(BIN)

clean:
	$(RM) $(BIN)

.PHONY: all clean
