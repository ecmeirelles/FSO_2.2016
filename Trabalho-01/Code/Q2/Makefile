GCC = gcc
FLAGS = -Wall

all: int_list.o sort.o main.o Q2-Sort

Q2-Sort: int_list.o sort.o main.o
	$(GCC) $(FLAGS) -o Q2-Sort int_list.o sort.o main.o -lm

int_list.o: int_list.c int_list.h
	$(GCC) $(FLAGS) -c int_list.c

sort.o: sort.c sort.h int_list.h
	$(GCC) $(FLAGS) -c sort.c

main.o: main.c int_list.h sort.h
	$(GCC) $(FLAGS) -c main.c

clean:
	-rm -f *.o Q2-Sort
