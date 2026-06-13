CC = gcc
CFLAGS = -Wall

test:
	$(CC) src/*.c tests/test_matrix.c -Iinclude -o test
