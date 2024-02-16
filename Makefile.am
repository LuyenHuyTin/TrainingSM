# Makefile.am
# Set the target executable name
bin_PROGRAMS = myprogram

# Define the source files
myprogram_SOURCES = \
    src/FacultyLogin.cpp \
    src/adminLogin.cpp \
    src/main.cpp

# Define the object files
myprogram_OBJECTS = \
    src/FacultyLogin.o \
    src/adminLogin.o \
    src/main.o
    
# Define the header files to be included
myprogram_HEADERS = \
    include/FacultyLogin.h \
    include/adminLogin.h

# Define the directory for the program
myprogramdir = $(bindir)

# Specify the installation rules
install-exec-hook:
    chmod +x $(DESTDIR)$(bindir)/myprogram

# Specify the uninstallation rules
uninstall-hook:
    rm -f $(DESTDIR)$(bindir)/myprogram