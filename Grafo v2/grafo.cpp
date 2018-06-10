#include "grafo.h"

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

bool Grafo::AddNodo(){
    Node mi_nodo;
    cantidad_nodos++;
    Nodos_pertenecientes.push_back(mi_nodo);
    return true;
};

bool Grafo::DeleteNodo(int id_ToDelete){
    int nodos_actuales = cantidad_nodos;
    for (int temp_node = 0; temp_node<cantidad_nodos; temp_node++){
        if (Nodos_pertenecientes.at(temp_node).GetId() == id_ToDelete){
            Nodos_pertenecientes.erase(Nodos_pertenecientes.begin() + temp_node);
            cantidad_nodos--;
            return true;
        }
    }
    return false;
};

string Grafo::PrintAllNodes(){
    stringstream salida;
    for (int i = 0; i < cantidad_nodos; i++){
        salida << Nodos_pertenecientes.at(i).GetId() << " ";
    }
    return salida.str();
};

bool Grafo::GetAdventureMap(int A, int B){
// Here goes pirates stuff.... Shhh... leave
};