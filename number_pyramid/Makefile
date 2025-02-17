CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99

all: number_pyramid_app

number_pyramid_app: src/main.c src/number_pyramid.c
	$(CC) $(CFLAGS) -o number_pyramid_app src/main.c src/number_pyramid.c

test: test/test_number_pyramid.c src/number_pyramid.c
	$(CC) $(CFLAGS) -o test_number_pyramid test/test_number_pyramid.c src/number_pyramid.c 
	./test_number_pyramid

clean:
	rm -f number_pyramid_app test_number_pyramid