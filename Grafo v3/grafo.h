#ifndef _GRAFO
#define _GRAFO

#include <string>
#include <sstream>

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

class Grafo {
private:
//Atributos:
//  Tipo:           Nombre:
    int             name;// Nombre del grafo (un numero....)
    vector<Node>    Nodos_pertenecientes;
    int             cantidad_nodos;
public:
//Constructor:
	//falta el constructor vacío
    Grafo(int);// recibe el nombre del grafo
//Metodos:
//  Tipo:           Nombre:
    void            AddConexion(int, int, int); // se le entrega el nodo de donde parte el camino, el nodo a unir y el peso
    int             AddNodo();                  // se crea y agrega un nodo
    bool            hay_arco(int, int);      // revisa si hay camino de A a B. A-->B
    bool            GetAdventureMap(int,int);   // busca un camino entre el primer int y el segundo, que corresponden a nodos

    Node            GetNodo(int);               // se le pasa el id del nodo y devuelve el nodo en la posicion int
    int             GetName();
    int             GetCantidad_nodos();
};



#endif
