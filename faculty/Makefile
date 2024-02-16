CC=g++
CFLAGS=-Wall -Wextra -pedantic -fPIC
LDFLAGS=-shared
LIBRARY=libFacultyLogin.so
HEADER=FacultyLogin.h
SOURCE=FacultyLogin.cpp
EXAMPLE_DIR=../app


all: $(LIBRARY)
	cp -rf $(HEADER) $(LIBRARY) $(EXAMPLE_DIR)

$(LIBRARY): $(SOURCE) $(HEADER)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(LIBRARY)

.PHONY: all clean