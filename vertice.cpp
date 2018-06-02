#include "vertice.h"

// Constructor:
Vertice::Vertice(int mi_name){
    name = mi_name;
}

// Metodos:
int Vertice::GetName(){
    return name;
}

int Vertice::GetN_Vertice(){
    return n_vertice;
}