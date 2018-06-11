CC = g++

compilar:grafo.o
	swig -python -c++ grafo.i
	$(CC) -fPIC -c grafo_wrap.cxx -I/usr/include/python2.7
	$(CC) -L grafo.cpp -shared grafo.o grafo_wrap.o -o _grafo.so
	sudo cp _grafo.so /usr/lib/
grafo.o:
	$(CC) -c -fPIC grafo.cpp
clean:
	rm *.o
	rm *.so
	rm *.cxx
