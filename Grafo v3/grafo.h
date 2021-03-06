#ifndef _GRAFO
#define _GRAFO

#include <map>
#include <queue>
#include <stack>

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
	int			numero_conexiones;
	

//Constructor:
	Node(int);//recibe el numero correspondiente al nodo

//Metodos:
//  Tipo:     		Nombre:
	bool 			Add_path(int, int);         // Grafo le entrega el Id del nodo y el peso
	int 			GetId();
	map<int, int> 	GetConexiones();
	int				GetNumber_of_conections();  // Puede servir para ver al nodo mas popular, lo que hablamos de los arboles
};

class Grafo {
private:
//Atributos:
//  Tipo:           Nombre:
    vector<Node>    Nodos_pertenecientes;
    static int      cantidad_nodos;
    map<int, int>   estack;
	vector<Node>    Caminos;
	vector<Node>    cambiodenodo(Node,vector<Node>&,int);
public:
//Constructor:
	Grafo();//Grafo vacio
    Grafo(int);// recibe el numero de nodos a crear


//Metodos:
//  Tipo:           Nombre:
    void            add_arco(int, int, int); // se le entrega el nodo de donde parte el camino, el nodo a unir y el peso
    int             add_nodo();              // se crea y agrega un nodo
    bool            hay_arco(int, int);      // revisa si hay camino de A a B. A-->B
    bool            hay_camino(int,int);     // busca un camino entre el primer int y el segundo, que corresponden a nodos
	Grafo           ruta_optima(int,int);

    Node            GetNodo(int);            // se le pasa el id del nodo y devuelve el nodo en la posicion int
    static int      GetCantidad_nodos();	 // retrona el numero de nodos, es static
    int             GetWeight(int, int);	 // retorna el peso si hay arco
};



#endif
