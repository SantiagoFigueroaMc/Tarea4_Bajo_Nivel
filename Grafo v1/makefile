CC = g++
FLAGS = -std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self
DEPENDENCIAS = main.o arista.o vertice.o grafo.o
EX=grafo
LIB=_grafo.so

ITS_THE_FINAL_COUNTDOWN: ninja run

run: $(EX)
	./$(EX)
	make clean

$(LIB): grafo.o grafo.h
	swig -python -c++ grafo.i
	$(CC) -fPIC -c grafo_wrap.cxx -I/usr/include/python2.7/
	$(CC) -L grafo.cpp -shared grafo.o grafo_wrap.o -o $(LIB)

ninja:
	$(CC) $(FLAGS) -c -o main.o main.cpp
	$(CC) $(FLAGS) -c -fPIC -o grafo.o grafo.cpp arista.cpp vertice.cpp
	$(CC) $(FLAGS) -o $(EX) grafo.o main.o
	swig -python -c++ grafo.i
	$(CC) -fPIC -c grafo_wrap.cxx -I/usr/include/python2.7/
	$(CC) -L grafo.cpp -shared grafo.o grafo_wrap.o -o $(LIB)

grafo.o: grafo.cpp grafo.h vertice.cpp vertice.h arista.cpp arista.h
	$(CC) -c -fPIC grafo.cpp vertice.cpp arista.cpp

$(EX): $(DEPENDENCIAS)
	$(CC) $(FLAGS) -o $(EX) $(DEPENDENCIAS)
	
main.o: main.cpp
	$(CC) -c main.cpp

arista.o: arista.cpp arista.h
	$(CC) -c arista.cpp

vertice.o: vertice.cpp vertice.h
	$(CC) -c vertice.cpp

clean:
	rm *.o
	rm -f $(EX)
	rm grafo.py grafo.pyc grafo_wrap.cxx
	rm *.so
	
