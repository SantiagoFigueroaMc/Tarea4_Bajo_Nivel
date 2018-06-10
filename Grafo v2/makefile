CC = g++
FLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
DEPENDENCIAS = main.o node.o grafo.o

graf: $(DEPENDENCIAS)
	$(CC) -o graf $(DEPENDENCIAS)
	clear
	./graf
	make clean

ninja:
	$(CC) $(FLAGS) -c -o main.o main.cpp
	$(CC) $(FLAGS) -c -o node.o node.cpp
	$(CC) $(FLAGS) -c -o grafo.o grafo.cpp
	$(CC) $(FLAGS) -o graf $(DEPENDENCIAS)

main.o: main.cpp node.h
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp
	
grafo.o: grafo.cpp node.h
	$(CC) -c grafo.cpp

clean:
	rm *.o
	rm graf

