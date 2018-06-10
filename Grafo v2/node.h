#ifndef NODE
#define NODE

#include <queue>
using namespace std;

class Node {
private:
	
//Atributos:
//  Tipo:       Nombre:
	int 		id;
	queue<Node> conexiones = queue<Node>();
public:
//Atributos publicos:
//  Tipo:      	Nombre:
	static int 	numero_nodos;

//Constructor:
	Node();

//Metodos:
//  Tipo:     		Nombre:
	void 			Add_path(Node);
	int 			GetId();
	queue<Node> 	GetConexiones();
};

#endif
