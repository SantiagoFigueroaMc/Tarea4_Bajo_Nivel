#include<sstream>

# include "grafo.h"
#include "vertice.h"
#include "arista.h"

#include<stdlib.h>

//Crea un Grafo Vacio
Grafo::Grafo(){
	aristas=NULL;
	vertices=NULL;
	verticesiniciales=0;
	printf("Address of x is %p\n", (void *)vertices);
	printf("\nmclfurry\n");
}
//Crea un grafo con n vertices
Grafo::Grafo(int my_verticesiniciales){
	aristas=NULL;
	vertices=NULL;
	aristas=(node *)malloc(sizeof(*aristas));
	aristas->nextNode=NULL;//se agragaran de otra forma

	vertices=(node *)malloc(sizeof(*vertices));
	vertices->nextNode=NULL;
	printf("Address of x is %p\n", (void *)vertices); 
	for (int i=1;i<=my_verticesiniciales;i++){
		add_nodo();
	}
}	

// Crea un arco entre las aristas d y h, donde la dirección es desde d a h y el peso es w.
void Grafo::add_arco(int d, int h, int w){

}

// Agregua un nodo y retorne el número que lo identifica. Los nodos serán identificados por un número secuencial que comenzará en cero.
int Grafo::add_nodo(){
	int numvertice=Vertice::GetN_Vertice();
	cout<<"Hay actualmente:"<<numvertice<<" vertices creados"<<endl;
	Vertice* ver= new Vertice(numvertice);
	stringstream ss;
	ss<<ver->GetName();
	cout<<"por aca solo va de paso"<<endl;
	cout<<vertices->aristas_nodo <<endl;
	printf("Address of x is %p\n", (void *)vertices); 
	printf("Address of nextNode is %p\n", (void *)vertices->nextNode); 
	addnode(vertices,ss.str());
	cout<<"Nodo:"<<ss.str()<<" creado"<<endl;
	return ver->GetName();
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

