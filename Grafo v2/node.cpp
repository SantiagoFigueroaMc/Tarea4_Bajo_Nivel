#include "node.h"

//Constructor:
Node::Node(){
	numero_nodos++;
	id = numero_nodos;
};

//Metodo para agregar un camino a un nodo n.
bool Node::Add_path(Node n){
	conexiones.push(n);
	numero_conexiones++;
	return true;
};

bool Node::Remove_path(Node n){
	int conexiones_actuales = numero_conexiones;
	for(int temp_node = 0; temp_node < numero_conexiones; temp_node++)
	{
		if (conexiones.at(temp_node).GetId() == n.GetId()){
			conexiones.erase(conexiones.begin() + temp_node)
			numero_conexiones--;
			return true;
		}
	}
	return false;
}

int Node::GetId(){
	return id;
}

queue<Node> Node::GetConexiones(){
	return conexiones;
};

int Node::GetNumber_of_conections(){
	return numero_conexiones;
}