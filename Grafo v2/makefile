CC = g++
DEPENDENCIAS = main.o node.o grafo.o


graf: $(DEPENDENCIAS)
	$(CC) -o graf $(DEPENDENCIAS)
	
main.o: main.cpp node.h
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp
	
grafo.o: grafo.cpp node.h
	$(CC) -c grafo.cpp

clean:
	rm *.o
	rm graf

