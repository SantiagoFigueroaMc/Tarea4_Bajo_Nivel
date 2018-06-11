#include "node.h"

//Constructor:
Node::Node(){
	numero_nodos++;
	id = numero_nodos;
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