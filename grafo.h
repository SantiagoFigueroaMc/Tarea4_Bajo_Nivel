#ifndef _GRAFO
#define _GRAFO

# include "node.h"

//nodo==>VERTICES!
//arcos==>ARISTAS!

class Grafo {
private:
	// Lista de vectores:
	node * aristas;// Esta sera una lista con todas las aristas
	node * vertices;// Esta sera una lista con todos los vertices
	int verticesiniciales;
	static int verticescreados;

public:
	Grafo();//crea el grafo vacio
	Grafo(int);//crea el grafo con int vertices
	void add_arco(int, int, int);// arista 1 ----> arista 2 y peso
	int add_nodo();// Este añade un nuevo nodo al grafo
	bool hay_arco(int , int );// arista 1 ----> arista 2
	bool hay_camino(int , int );// arista 1 <---> arista 2
	static int GetVerticesCreados();
};

#endif
