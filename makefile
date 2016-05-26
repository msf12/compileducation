CC=gcc
CFLAGS=-std=c11
OUTPUT=test.out
SOURCES=main.c flags.c
OBJECTS=$(SOURCES:.c=.o)
HEADERS=flags.h

all: $(OUTPUT)

clean:
	rm $(OBJECTS)

$(OUTPUT): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(OUTPUT)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<