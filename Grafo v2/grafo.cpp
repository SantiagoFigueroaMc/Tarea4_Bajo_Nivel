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

void Grafo::AddConexion(int nodo_inicial, int nodo_final, int weight){
    // Estas lineas buscan al nodo inicial
    int index_start_node = 0;
    while (Nodos_pertenecientes.at(index_start_node).GetId() != nodo_inicial){
        index_start_node++;
    }
    // Aqui se agrega el nodo final a la lista de nodos del nodo inicial
    Nodos_pertenecientes.at(index_start_node).Add_path(nodo_final,weight);
};

int Grafo::AddNodo(){
    Node mi_nodo;
    cantidad_nodos++;
    Nodos_pertenecientes.push_back(mi_nodo);
    return mi_nodo.GetId();
};

bool Grafo::Hay_Arco(int A, int B){
    int index_start_node = 0;
    while (Nodos_pertenecientes.at(index_start_node).GetId() != A){
        index_start_node++;
    }
    map<int, int>::iterator index;
    index = Nodos_pertenecientes.at(index_start_node).GetConexiones().find(B);
    if (index != Nodos_pertenecientes.at(index_start_node).GetConexiones().end()){
        return true;
    }
    return false;
}

bool Grafo::GetAdventureMap(int A, int B){
// Here goes pirates stuff.... Shhh... leave
};

int Grafo::GetCantidad_nodos(){
    return cantidad_nodos;
};
