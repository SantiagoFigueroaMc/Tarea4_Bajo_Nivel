#include "grafo.h"
using namespace std;

// NODO //
//Constructor:
Node::Node(int mi_id){
	id = mi_id;
};

//Metodo para agregar un camino a un nodo n.
bool Node::Add_path(int n, int weight){
	conexiones.emplace(n, weight);
	numero_conexiones++;
	return true;
};

int Node::GetId(){
	return id;
};

map<int, int> Node::GetConexiones(){
	return conexiones;
};

int Node::GetNumber_of_conections(){
	return numero_conexiones;
};


// GRAFO //
int Grafo::cantidad_nodos = 0;
//Constructor:
Grafo::Grafo(){};

Grafo::Grafo(int nodos_a_crear){
    while (cantidad_nodos < nodos_a_crear){
        add_nodo();
    }
};

//Metodos:
Node Grafo::GetNodo(int mi_id){
    return Nodos_pertenecientes.at(mi_id);
};

int Grafo::add_nodo(){
    Node mi_nodo (cantidad_nodos);
    cantidad_nodos++;
    Nodos_pertenecientes.push_back(mi_nodo);
    return mi_nodo.GetId();
};

void Grafo::add_arco(int nodo_inicial, int nodo_final, int weight){
    // Estas lineas buscan al nodo inicial
    int index_start_node = 0;
    while (Nodos_pertenecientes.at(index_start_node).GetId() != nodo_inicial){
        index_start_node++;
    }
    // Aqui se agrega el nodo final a la lista de nodos del nodo inicial
    Nodos_pertenecientes.at(index_start_node).Add_path(nodo_final,weight);
};


bool Grafo::hay_arco(int A, int B){
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


bool Grafo::hay_camino(int inicio, int finall){
    estack.emplace(inicio, 1);
    map<int, int> nodos_por_revisar = Nodos_pertenecientes.at(inicio).GetConexiones();
    for (auto& x: nodos_por_revisar) {
        for (auto& y: estack){
            if (x.first == y.first){
                nodos_por_revisar.erase(x.first);
            }
        }
    }
    if (inicio == finall){
        estack.clear();
        return true;
    }
    for (auto& nada: nodos_por_revisar){
        if (hay_camino(nada.first, finall)){
            return true;
        }
    }
    return false;
};

int Grafo::GetCantidad_nodos(){
    return cantidad_nodos;
};

int Grafo::GetWeight(int A, int B){
    map<int, int>::iterator index;
    index = Nodos_pertenecientes.at(A).GetConexiones().find(B);
    if (index != Nodos_pertenecientes.at(A).GetConexiones().end()){
        return index->second;
    }
    return 0;
};
