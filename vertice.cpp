#include "vertice.h"

int Vertice::n_vertice = 0;

// Constructor:
Vertice::Vertice(int mi_name){
    name = mi_name;/*quiza no sea necesario(guardamos los numeros en grafo,
	no guardamos los objetos)*/
    n_vertice++;
}

// Metodos:
int Vertice::GetName(){
    return name;
}

int Vertice::GetN_Vertice(){
    return n_vertice;
}
