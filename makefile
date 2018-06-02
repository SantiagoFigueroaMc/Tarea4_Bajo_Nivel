CC = g++
FLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
DEPENDENCIAS = main.o arista.o vertice.o grafo.o

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

clean:
	rm grafo
	rm *.o