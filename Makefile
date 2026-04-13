CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

.PHONY: build test clean

build:
	$(CC) $(CFLAGS) src/main.c src/array_utils.c -o array_tool

test:
	$(CC) $(CFLAGS) tests/test_array_utils.c src/array_utils.c -o array_tool_test
	./array_tool_test

clean:
	rm -f array_tool array_tool_test
