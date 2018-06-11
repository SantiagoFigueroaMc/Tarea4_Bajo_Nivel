#include "grafo.h"
using namespace std;
//Constructor:
Grafo::Grafo(int mi_name){
    name = mi_name;
    cantidad_nodos = 0;
};

//Metodos:
int Grafo::GetName(){
    return name;
};

Node Grafo::GetNodo(int mi_id){
    return Nodos_pertenecientes.at(mi_id);
};

int Grafo::AddNodo(){
    Node mi_nodo;
    cantidad_nodos++;
    Nodos_pertenecientes.push_back(mi_nodo);
    return mi_nodo.GetId();
};

string Grafo::AddConexion(int nodo_inicial, int nodo_final){
    // Estas lineas buscan al nodo inicial
    int index_start_node = 0;
    int index_end_node = 0;
    while (Nodos_pertenecientes.at(index_start_node).GetId() != nodo_inicial){
        index_start_node++;
    }
    while (Nodos_pertenecientes.at(index_end_node).GetId() != nodo_final){
        index_end_node++;
    }
    // Aqui se agrega el nodo final a la lista de nodos del nodo inicial
    stringstream salida_aux;
    salida_aux << "Nodo inicial: " << Nodos_pertenecientes.at(index_start_node).GetId() << " Nodo destino: " << Nodos_pertenecientes.at(index_end_node).GetId() << endl;
    Nodos_pertenecientes.at(index_start_node).Add_path(Nodos_pertenecientes.at(index_end_node));
    
    return salida_aux.str();
};

int Grafo::GetCantidad_nodos(){
    return cantidad_nodos;
};

bool Grafo::GetAdventureMap(int A, int B){
// Here goes pirates stuff.... Shhh... leave
};