GCC = gcc
FLAGS = -Wall

all: data_entry.o geometric_operators.o main.o Q1-Triangle

Q1-Triangle: data_entry.o geometric_operators.o main.o
	$(GCC) $(FLAGS) -o Q1-Triangle data_entry.o geometric_operators.o main.o -lm

main.o: main.c composite_types.h
	$(GCC) $(FLAGS) -c main.c

data_entry.o: data_entry.c composite_types.h data_entry.h
	$(GCC) $(FLAGS) -c data_entry.c

geometric_operators.o: geometric_operators.c composite_types.h geometric_operators.h
	$(GCC) $(FLAGS) -c geometric_operators.c

clean:
	-rm Q1-Triangle *.o
