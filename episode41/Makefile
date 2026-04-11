CC = gcc
CFLAGS = -Wall

app: main.o math_utils.o
	$(CC) $(CFLAGS) -o app main.o math_utils.o

main.o: main.c math_utils.h
	$(CC) $(CFLAGS) -c main.c

math_utils.o: math_utils.c math_utils.h
	$(CC) $(CFLAGS) -c math_utils.c

clean:
	rm -f app *.o
