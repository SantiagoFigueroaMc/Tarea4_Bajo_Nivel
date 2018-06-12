CC = g++
FLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
LIB=_grafo.so
PRUEBA1=GoogleMaps.py
PRUEBA2=test_grafo.py

ninja:
	$(CC) $(FLAGS) -c -fPIC grafo.cpp
	swig -python -c++ grafo.i
	$(CC) $(FLAGS) -fPIC -c grafo_wrap.cxx -I/usr/include/python2.7
	$(CC) $(FLAGS) -L grafo.cpp -shared grafo.o grafo_wrap.o -o _grafo.so
	sudo cp _grafo.so /usr/lib/
	python $(PRUEBA1)
	python $(PRUEBA2)

$(LIB):grafo.o
	swig -python -c++ grafo.i
	$(CC) -fPIC -c grafo_wrap.cxx -I/usr/include/python2.7
	$(CC) -L grafo.cpp -shared grafo.o grafo_wrap.o -o _grafo.so
	sudo cp _grafo.so /usr/lib/

grafo.o: grafo.cpp grafo.h
	$(CC) -c -fPIC grafo.cpp

clean:
	rm *.o
	rm *.so
	rm *.cxx
