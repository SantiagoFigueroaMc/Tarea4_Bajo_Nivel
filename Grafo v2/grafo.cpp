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
    return cantidad_nodos - 1;
};

void Grafo::DeleteNodo(int id_ToDelete){
    int nodos_actuales = cantidad_nodos;
    for (int temp_node = 0; temp_node<cantidad_nodos; temp_node++){
        if (Nodos_pertenecientes.at(temp_node).GetId() == id_ToDelete){
            Nodos_pertenecientes.erase(Nodos_pertenecientes.begin() + temp_node);
            cantidad_nodos--;
        }
    }
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

bool Grafo::DeleteConexion(int nodo_inicial, int nodo_final){

};

string Grafo::PrintAllNodes(){
    stringstream salida;
    for (int i = 0; i < cantidad_nodos; i++){
        salida << Nodos_pertenecientes.at(i).GetId() << " ";
    }
    return salida.str();
};

string Grafo::PrintAllConexions(int Nodo_revisar){
    stringstream salida;
    for (int temp_node = 0; temp_node < cantidad_nodos; temp_node++){
        if (Nodos_pertenecientes.at(temp_node).GetId() == Nodo_revisar){
            salida << "Conexiones del nodo " << Nodo_revisar << ": ";
            vector<Node> Inspected_Node_conexiones = Nodos_pertenecientes.at(temp_node).GetConexiones();
            for (int temp_conexion = 0; temp_conexion < Nodos_pertenecientes.at(temp_node).GetNumber_of_conections(); temp_conexion++){
                salida << Inspected_Node_conexiones.at(temp_conexion).GetId() << " ";
            }
            return salida.str();
        }
    }
    salida << "No hay conexiones para el nodo " << Nodo_revisar+1;
    return salida.str();
}

bool Grafo::GetAdventureMap(int A, int B){
// Here goes pirates stuff.... Shhh... leave
};