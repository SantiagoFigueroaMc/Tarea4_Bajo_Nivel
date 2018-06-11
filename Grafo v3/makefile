CC = g++

compilar:
	$(CC) -c grafo.cpp
	$(CC) -fPIC -c grafo.o grafo.cpp
	$(CC) -shared -o grafo.so grafo.o

clean:
	rm *.o
	rm *.so
