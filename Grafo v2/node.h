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
	int			numero_conexiones;

//Constructor:
	Node();

//Metodos:
//  Tipo:     		Nombre:
	bool 			Add_path(Node);// Grafo le entrega el nodo
	bool			Remove_path(Node);// Quita al nodo n de las conexiones de esta clase
	int 			GetId();
	queue<Node> 	GetConexiones();
	int				GetNumber_of_conections();// Puede servir para ver al nodo mas popular, lo que hablamos de los arboles

};

#endif
