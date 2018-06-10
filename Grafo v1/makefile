CC = g++
FLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
DEPENDENCIAS = main.o arista.o vertice.o grafo.o

run: grafo
	./grafo
	make clean

ninja:
	$(CC) $(FLAGS) -c -o main.o main.cpp
	$(CC) $(FLAGS) -c -o arista.o arista.cpp
	$(CC) $(FLAGS) -c -o vertice.o vertice.cpp
	$(CC) $(FLAGS) -c -o grafo.o grafo.cpp
	$(CC) $(FLAGS) -o grafo $(DEPENDENCIAS)

grafo: $(DEPENDENCIAS)
	$(CC) $(FLAGS) -o grafo $(DEPENDENCIAS)
	
main.o: main.cpp
	$(CC) -c main.cpp

arista.o: arista.cpp arista.h
	$(CC) -c arista.cpp

vertice.o: vertice.cpp vertice.h
	$(CC) -c vertice.cpp

grafo.o: grafo.cpp grafo.h
	$(CC) -c grafo.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp

clean:
	rm *.o
	rm grafo
