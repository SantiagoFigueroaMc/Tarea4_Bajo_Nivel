CC = g++

compilar:grafo.o
	swig -python -c++ grafo.i
	$(CC) -fPIC -c grafo_wrap.cxx -I/usr/include/python2.7
	$(CC) -L grafo.cpp -shared grafo.o grafo_wrap.o -o grafo.so
	sudo cp grafo.so /usr/lib/
grafo.o:
	$(CC) -c -fPIC grafo.cpp
clean:
	rm *.o
	rm *.so
	rm *.cxx
	rm *.py
