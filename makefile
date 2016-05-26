CC=gcc
CFLAGS=-std=c11
OUTPUT=test.out
SOURCES=flags.c tokenizer.c main.c
OBJECTS=$(SOURCES:.c=.o)
HEADERS=flags.h tokenizer.h

all: $(OUTPUT)

clean:
	rm $(OBJECTS)

$(OUTPUT): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(OUTPUT)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<