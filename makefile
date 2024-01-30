

CFLAGS+=-Wall -g

EXECUTABLE=Exercise6_2

OBJECTS=ItemList.o

all: $(OBJECTS) main.c
	gcc $(CFLAGS) $(OBJECTS) main.c -o $(EXECUTABLE)

clean:
	rm -f *.o
	rm -f *~
	rm -f $(EXECUTABLE)

.c.o:
	$(CC) $(CFLAGS) -c $<
