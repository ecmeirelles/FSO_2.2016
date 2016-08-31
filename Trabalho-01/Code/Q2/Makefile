GCC = gcc
FLAGS = -Wall

all: int_list.o sort.o Q2.o Q2-Sort

Q2-Sort: int_list.o sort.o Q2.o
	$(GCC) $(FLAGS) -o Q2-Sort int_list.o sort.o Q2.o -lm

int_list.o: int_list.c int_list.h
	$(GCC) $(FLAGS) -c int_list.c

sort.o: sort.c sort.h int_list.h
	$(GCC) $(FLAGS) -c sort.c

Q2.o: Q2.c int_list.h sort.h
	$(GCC) $(FLAGS) -c Q2.c

clean:
	-rm -f *.o Q2-Sort
