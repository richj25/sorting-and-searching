CC=/usr/bin/g++
LD=/usr/bin/ld
CFLAGS= -O2 -std=c++11 -Wall
SHARED_LIB_PATH=$(CURDIR)

SORT_OBJS = bubble_sort.o \
			quicksort.o \
			sort.o

all: libsort.so sorter

sorter: libsort.so  main.cc sort_api.h
	$(CC)  $(CFLAGS) -L$(SHARED_LIB_PATH) -lsort main.cc -o sorter

sort.o: sort.cc sort_api.h
	$(CC) $(CFLAGS) -fPIC -c -o sort.o sort.cc

quicksort.o: quicksort.cc sort_api.h
	$(CC) $(CFLAGS) -fPIC -c -o quicksort.o quicksort.cc
	
bubble_sort.o: bubble_sort.cc sort_api.h
	$(CC) $(CFLAGS) -fPIC -c -o bubble_sort.o bubble_sort.cc

libsort.so: $(SORT_OBJS)
	$(CC) -fPIC -shared $(SORT_OBJS) -o libsort.so

clean:
	rm -f $(OBJS) libsort.so sorter *.o core*