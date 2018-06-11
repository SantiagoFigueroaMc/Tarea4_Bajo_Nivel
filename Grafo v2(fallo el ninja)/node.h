#ifndef NODE
#define NODE

#include <map>
#include <queue>
using namespace std;

class Node {
private:
	
//Atributos:
//  Tipo:       	Nombre:
	int 			id;
	map<int, int> 	conexiones;// Id nodo_destino y peso camino
public:
//Atributos publicos:
//  Tipo:      	Nombre:
	static int 	numero_nodos;
	int			numero_conexiones;
	

//Constructor:
	Node();

//Metodos:
//  Tipo:     		Nombre:
	bool 			Add_path(int, int);// Grafo le entrega el Id del nodo y el peso
	int 			GetId();
	map<int, int> 	GetConexiones();
	int				GetNumber_of_conections();// Puede servir para ver al nodo mas popular, lo que hablamos de los arboles

};

#endif
