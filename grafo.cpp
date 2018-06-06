#include<sstream>

# include "grafo.h"
#include "vertice.h"
#include "arista.h"

#include<stdlib.h>
#include<vector>


//Crea un Grafo Vacio
Grafo::Grafo(){

	aristas.clear();
	vertices.clear();
	vertices_creados=Vertice::GetN_Vertice();
	vertices_iniciales=0;
}
//Crea un grafo con n vertices
Grafo::Grafo(int numnodos){
	int vertices_iniciales=numnodos;
	aristas.clear();
	vertices_creados=Vertice::GetN_Vertice();
	for (int i=0;i<numnodos;i++){
		Vertice ver=Vertice(i);
		vertices.push_back(ver);
	}
}	

// Crea un arco entre las aristas d y h, donde la dirección es desde d a h y el peso es w.
void Grafo::add_arco(int d, int h, int w){

}

// Agregua un nodo y retorne el número que lo identifica. Los nodos serán identificados por un número secuencial que comenzará en cero.
int Grafo::add_nodo(){
	int nodo_name=vertices.size()+1;
	Vertice ver=Vertice(nodo_name);
	vertices.push_back(ver);
	return vertices[nodo_name-1].GetName();
}

//metodos que retornan valores
unsigned int Grafo::GetLenVertices(){
	return vertices.size();	
}

unsigned int Grafo::GetLenAristas(){
	return aristas.size();
}

Vertice Grafo::GetVertice(int pos){
	return vertices[pos];
}
Arista Grafo::GetArista(int pos){
	return aristas[pos];
}
int Grafo::GetVertices_Iniciales(){
	return vertices_iniciales;
}
int Grafo::GetVertices_Creados(){
	return vertices_creados;
}

/*
// Retorna true si existe un arco entre d y h, en la dirección (d ->h) o false en caso contrario.
bool Grafo::hay_arco(int d, int h){
	if (Is_OneWay(vertices, d, h)){//ya no se pasa por referencia, porque se trabaja con direcciones de memoria
		return true;
	}
	return false;
}

// Retorna true si existe un camino entre d y h o false en caso contrario.
bool Grafo::hay_camino(int d, int h){
	if (Is_TwoWay(vertices, d, h)){//ya no se pasa por referencia, porque se trabaja con direcciones de memoria
		return true;
	}
	return false;
}
*/
