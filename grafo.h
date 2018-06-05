#ifndef _GRAFO
#define _GRAFO

# include "node.h"

class Grafo {
private:
	// Lista de vectores:
	node aristas;// Esta sera una lista con todas las aristas
	node vertices;// Esta sera una lista con todos los vertices

public:
	void add_arco(int, int, int);// arista 1 ----> arista 2 y peso
	int add_nodo();// Este para que esta?
	bool hay_arco(int , int );// arista 1 ----> arista 2
	bool hay_camino(int , int );// arista 1 <---> arista 2
	
};

#endif
