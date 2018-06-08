#include<sstream>
#include<string>

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
	Arista ari=Arista(d,h,w);
	aristas.push_back(ari);
}

// Agregua un nodo y retorne el número que lo identifica. Los nodos serán identificados por un número secuencial que comenzará en cero.
int Grafo::add_nodo(){
	int nodo_name=vertices.size()+1;
	Vertice ver=Vertice(nodo_name-1);
	vertices.push_back(ver);
	return vertices[nodo_name-1].GetName();
}


//Metodo para ver si existe un camino entre dos nodos.
// d ---> h
bool Grafo::hay_arco(int d, int h){
	stringstream ss = stringstream();
	ss << d << h;
	int c=0;
	string avector,abuscada=ss.str();
	Arista arco=GetArista(c);
	while (c<aristas.size()){
		Arista arco=GetArista(c);
		avector=arco.Get_Arista();
		if ((avector[0] == abuscada[0]) && (avector[1] == abuscada[1])){
				return true;
			}
		c++;//GET IT? C plus plus XD
	}
	return false;
}

// Retorna true si existe un camino entre d y h o false en caso contrario.
// d <---> h
bool Grafo::hay_camino(int d, int h){
	stringstream camino_a_verificar = stringstream();
	camino_a_verificar << d << h;
	camino_a_verificar = camino_a_verificar.str();
	
	for(int arista_actual = 0; arista_actual < aristas.size(); arista_actual++){
		
		if (aristas[arista_actual].Get_Arista()[0] == camino_a_verificar[0])
	}
	
	

	return false;
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


