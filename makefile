CC=gcc
CFLAGS=-Werror -Wextra -Wall
LDFLAGS=
EXEC=rush02

all: $(EXEC)

rush02: *.o
	$(CC) -o rush02 rush02.o main.o $(LDFLAGS)

rush02.o: rush02.c
	$(CC) -o rush02.o -c rush02.c $(CFLAGS)

main.o: main.c rush02.h
	$(CC) -o main.o -c main.c $(CFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXEC)
