CC=gcc
CFLAGS=-c -std=c11 -lm
LDFLAGS=
SOURCES=mymain.c myfunctions.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=myprog

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@