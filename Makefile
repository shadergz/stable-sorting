CC=clang
CFLAGS=-Wall -O2 -ffast-math

all: bubble_test merge_sort_test

bubble_test:
	$(CC) $(CFLAGS) -o $@ bubble.c bubble_test.c

merge_sort_test:
	$(CC) $(CFLAGS) -o $@ merge_sort.c merge_sort_test.c

clean:
	-rm -f bubble_test merge_sort_test

