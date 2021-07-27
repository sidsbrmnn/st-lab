# Use gcc if you're on Linux or Windows
CC = clang

# Enable all warnings while compilation
CFLAGS = -g -Wall

%: %.c
	$(CC) $(CFLAGS) -o $@.out $^

clean:
	rm *.out
