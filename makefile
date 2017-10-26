CC=/usr/bin/g++
LD=/usr/bin/ld
CFLAGS= -g -std=c++11 -Wall
SHARED_LIB_PATH=$(CURDIR)

SORT_OBJS = bubble_sort.o

all: libsort.so libfilegen.so create_file sorter

create_file: libfilegen.so
	$(CC) -L$(SHARED_LIB_PATH) -l filegen create_file.cc -o create_file
	
libfilegen.so: file_gen.cc file_gen.h
	$(CC) $(CFLAGS) -fPIC -shared -o libfilegen.so file_gen.cc
	
bubble_sort.o: bubble_sort.cc 
	$(CC) $(CFLAGS) -fPIC -c -o bubble_sort.o bubble_sort.cc

libsort.so: $(SORT_OBJS)
	$(CC) -fPIC -shared $(SORT_OBJS) -o libsort.so

sorter: libsort.so libfilegen.so main.cc
	$(CC) -L$(SHARED_LIB_PATH) -lsort -lfilegen main.cc -o sorter
	
clean:
	rm -f $(OBJS) libfilegen.so libsort.so sorter create_file *.o core*