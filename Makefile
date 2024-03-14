#Makefile
all: add-nbo

add-nbo: main.o get_data.o
	g++ -o add-nbo main.o get_data.o

main.o: get_data.h main.cpp

get_data.o : get_data.h get_data.cpp

clean:
	rm -f add-nbo
	rm -f *.o

