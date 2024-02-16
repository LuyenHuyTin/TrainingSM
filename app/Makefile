CC=g++
CFLAGS=-Wall -Wextra -pedantic
LDFLAGS=-L. -ladminLogin -lFacultyLogin

APP_NAME=test
SOURCE=main.cpp

all: $(APP_NAME)

$(APP_NAME): $(SOURCE) $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(APP_NAME)

.PHONY: all clean
