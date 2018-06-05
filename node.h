#ifndef NODE
#define NODE

#include <iostream>
#include <string>	
using namespace std;

// Estructura de un nodo (casilla), contenido (KB, PW, " ")
// y un puntero al proximo nodo.
typedef struct node {
	string aristas;
	struct node *nextNode;
} node;

//Metodo que define las aristas que estan unidas
void SetValue(node *n, int A, int B);

//Metodo que retorna el valor de la arista A
string GetValue(node *n);

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h, node *n);

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n);

//Metodo para revisar si hay un valor en alguno de los nodos a partir de una cabeza H.
bool Is_TwoWay(node *H, int A, int B);// Verdadero si hay camino de ida y vuelta

//Metodo para ver si existe un camino entre dos nodos: A ---> B
bool Is_OneWay(node *H, int A, int B);

#endif
