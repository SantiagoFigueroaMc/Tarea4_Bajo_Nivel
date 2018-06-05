# include "grafo.h"
#include "vertice.h"
#include "arista.h"
//Crea un Grafo Vacio
Grafo::	Grafo(){
	aristas=NULL;
	vertices=NULL;
	verticesiniciales=0;
}
Grafo::Grafo(int my_verticesiniciales){
	aristas=NULL;
	vertices=NULL;
	aristas=(node *)malloc(sizeof(*aristas));
	aristas->nextNode=NULL;
	vertices=(node *)malloc(sizeof(*vertices));
	vertices->nextNode=NULL;
	for (int i=1;i<my_verticesiniciales;i++){
		addnode(aristas);
		addnode(vertices);
	}
}	

// Crea un arco entre las aristas d y h, donde la dirección es desde d a h y el peso es w.
void Grafo::add_arco(int d, int h, int w){

}

// Agregua un nodo y retorne el número que lo identifica. Los nodos serán identificados por un número secuencial que comenzará en cero.
int Grafo::add_nodo(){
	
	return 0;
}

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

