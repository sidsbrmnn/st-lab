# Use gcc if you're on Linux or Windows
ifeq ($(OS), Windows_NT)
	CC = gcc
	RM = del /q /f
else
	UNAME := $(shell uname -s)
	RM = rm -rf
	ifeq ($(UNAME), Linux)
		CC = gcc
	endif
	ifeq ($(UNAME), Darwin)
		CC = clang
	endif
endif

# Enable all warnings while compilation
CFLAGS = -g -Wall

%: %.c
	$(CC) $(CFLAGS) -o $@.out $^

clean:
	$(RM) *.out *.dSYM
