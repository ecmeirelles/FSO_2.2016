triangulo: main.o data_entry.o geometric_operators.o
	gcc -o triangulo main.o data_entry.o geometric_operators.o -lm

main.o: main.c data_entry.h geometric_operators.h
	gcc -c main.c

data_entry.o: data_entry.c
	gcc -c data_entry.c

geometric.o: geometric_operators.c
	gcc -c geometric_operators.c

clean:
	rm triangulo *.o
