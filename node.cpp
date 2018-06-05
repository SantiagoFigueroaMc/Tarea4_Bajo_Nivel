#include "node.h"
#include <sstream>
using namespace std;

//Metodo que inserta un contenido i en un nodo n
void SetValue(node *n,int A, int B){
	stringstream ss = stringstream();
	ss << A << B;
	n -> aristas_nodo = ss.str();
}

void addnode(node * list,string add){
	node * newlist=list;
    while (newlist->nextNode != NULL) {
        newlist=newlist->nextNode;
    }
    newlist->nextNode =(node *)malloc(sizeof(*newlist));//el error esaba aqui, estaba guardando memoria para un entero, no lo apuntado
    newlist->nextNode->nextNode = NULL;
	newlist->nextNode->aristas_nodo = add;
}

void addnode(node * list){//añade un nodo
	node * newlist=list;
    while (newlist->nextNode != NULL) {
        newlist=newlist->nextNode;
    }
    newlist->nextNode =(node *)malloc(sizeof(*newlist));//el error esaba aqui, estaba guardando memoria para un entero, no lo apuntado
    newlist->nextNode->nextNode = NULL;
}

//Metodo que retorna el contenido de un nodo n.
string GetValue(node *n){
	return n -> aristas_nodo;
}

//Metodo que setea a un nodo n como nodo siguiente de un nodo h.
void SetNext(node *h,node *n){
	h -> nextNode = n;
}

//Metodo que retorna un puntero del nodo proximo al nodo n.
node *GetNext(node *n){
	return n -> nextNode;
}

//Metodo para revisar si hay un valor en alguno de los nodos a partir de una cabeza H.
// A <--> B
bool Is_TwoWay(node *H, int A, int B){
	stringstream ss = stringstream();
	stringstream ss_rev = stringstream();
	ss << A << B;
	string s = ss.str();
	ss_rev << B << A;
	string s_rev = ss_rev.str();
	node *Nodo_Temporal = H;
	int ways = 0;
	while (GetNext(Nodo_Temporal)){
		if ((GetValue(Nodo_Temporal) == s)){
			ways++;
		}
		if (GetValue(Nodo_Temporal) == s_rev){
			ways++;
		}
		if (ways >= 2){
			return true;
		}
		Nodo_Temporal = GetNext(Nodo_Temporal);
	}
	return false;
}

//Metodo para ver si existe un camino entre dos nodos.
// A ---> B
bool Is_OneWay(node * H, int A, int B){
	stringstream ss = stringstream();
	ss << A << B;
	node *Nodo_Temporal = H;
	while (GetNext(Nodo_Temporal)){
		if (GetValue(Nodo_Temporal) == ss.str()){
			return true;
		}
		Nodo_Temporal = GetNext(Nodo_Temporal);
	}
}

