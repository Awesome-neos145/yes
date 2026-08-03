CC = gcc
CFLAGS = -fdiagnostics-color=always -Wall -g
FILES = y_main.c 
TARGET = yes

all:
	$(CC) $(CFLAGS) -o $(TARGET) $(FILES)

clean:
	rm -f $(TARGET)

.PHONY: all clean