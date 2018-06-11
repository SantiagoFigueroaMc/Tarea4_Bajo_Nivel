#ifndef NODE
#define NODE

#include <map>
using namespace std;

class Node {
private:
	
//Atributos:
//  Tipo:       Nombre:
	int 		id;
	map<Node, int> conexiones = map<Node, int>();
public:
//Atributos publicos:
//  Tipo:      	Nombre:
	static int 	numero_nodos;
	int			numero_conexiones;
	

//Constructor:
	Node();

//Metodos:
//  Tipo:     		Nombre:
	bool 			Add_path(Node, int);// Grafo le entrega el nodo
	int 			GetId();
	map<Node, int> 	GetConexiones();
	int				GetNumber_of_conections();// Puede servir para ver al nodo mas popular, lo que hablamos de los arboles

};

#endif
