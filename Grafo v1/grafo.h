#ifndef _GRAFO
#define _GRAFO

#include<vector>

# include "node.h"
#include "vertice.h"
#include "arista.h"

//nodo==>VERTICES!
//arcos==>ARISTAS!



class Grafo {
private:
	// Lista de vectores:
	vector<Arista> aristas;// Esta sera una lista con todas las aristas
	vector<Vertice> vertices;// Esta sera una lista con todos los vertices
	int vertices_iniciales;
	int vertices_creados;

public:
	Grafo();//crea el grafo vacio
	Grafo(int);//crea el grafo con int vertices
	void add_arco(int, int, int);// arista 1 ----> arista 2 y peso
	int add_nodo();// Este añade un nuevo nodo al grafo
	bool hay_arco(int , int );// arista 1 ----> arista 2
	bool hay_camino(int , int );// arista 1 <---> arista 2
	//Los GETS	
	unsigned int GetLenVertices();
	Vertice GetVertice(int);
	unsigned int GetLenAristas();
	Arista GetArista(int);
	int GetVertices_Iniciales();
	int GetVertices_Creados();
};

#endif
