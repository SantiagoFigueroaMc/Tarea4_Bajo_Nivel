CC = g++
FLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
DEPENDENCIAS = main.o node.o grafo.o
EX=graf
LIB=_grafo.so

$(EX): $(DEPENDENCIAS)
	$(CC) -o $(EX) $(DEPENDENCIAS)
	clear
	./$(EX)
	make clean

ninja:
	$(CC) $(FLAGS) -c -o main.o main.cpp
	$(CC) $(FLAGS) -c -o node.o node.cpp
	$(CC) $(FLAGS) -c -o grafo.o grafo.cpp
	$(CC) $(FLAGS) -o graf $(DEPENDENCIAS)

$(LIB): grafo.o grafo.h
	swig -python -c++ grafo.i
	$(CC) -fPIC -c grafo_wrap.cxx -I/usr/include/python2.7/
	$(CC) -L grafo.cpp -shared grafo.o grafo_wrap.o -o $(LIB)

grafo.o: grafo.cpp node.h node.cpp grafo.h
	$(CC) -c -fPIC grafo.cpp node.cpp

main.o: main.cpp node.h
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp

clean:
	rm *.o
	rm -f $(EX)
	rm *.so
	rm grafo.py grafo.pyc grafo_wrap.cxx

