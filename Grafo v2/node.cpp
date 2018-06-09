#include "node.h"

//Constructor:
Node::Node(){
	numero_nodos++;
	id = numero_nodos;
};

//Metodo para agregar un camino a un nodo n.
void Node::Add_path(Node n){
	conexiones.push(n);
};

int Node::GetId(){
	return id;
}

queue<Node> Node::GetConexiones(){
	return conexiones;
};