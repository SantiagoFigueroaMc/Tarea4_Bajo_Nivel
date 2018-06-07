#include<sstream>
#include<string>
#include<stack>

# include "grafo.h"
#include "vertice.h"
#include "arista.h"

#include<stdlib.h>
#include<vector>


//Crea un Grafo Vacio
Grafo::Grafo(){

	aristas.clear();
	vertices.clear();
	vertices_creados=Vertice::GetN_Vertice();
	vertices_iniciales=0;
}
//Crea un grafo con n vertices
Grafo::Grafo(int numnodos){
	int vertices_iniciales=numnodos;
	aristas.clear();
	vertices_creados=Vertice::GetN_Vertice();
	for (int i=0;i<numnodos;i++){
		Vertice ver=Vertice(i);
		vertices.push_back(ver);
	}
}	

// Crea un arco entre las aristas d y h, donde la dirección es desde d a h y el peso es w.
void Grafo::add_arco(int d, int h, int w){
	Arista ari=Arista(d,h,w);
	aristas.push_back(ari);
}

// Agregua un nodo y retorne el número que lo identifica. Los nodos serán identificados por un número secuencial que comenzará en cero.
int Grafo::add_nodo(){
	int nodo_name=vertices.size()+1;
	Vertice ver=Vertice(nodo_name-1);
	vertices.push_back(ver);
	return vertices[nodo_name-1].GetName();
}


//Metodo para ver si existe un camino entre dos nodos.
// A ---> B
bool Grafo::hay_arco(int d, int h){
	stringstream ss = stringstream();
	ss << d << h;
	int c=0;
	string avector,abuscada=ss.str();
	Arista arco=GetArista(c);
	while (c<aristas.size()){
		Arista arco=GetArista(c);
		avector=arco.Get_Arista();
		if ((avector[0] == abuscada[0]) && (avector[1] == abuscada[1])){
				return true;
			}
		c++;//GET IT? C plus plus XD
	}
	return false;
}

// Retorna true si existe un camino entre d y h o false en caso contrario.
bool Grafo::hay_camino(int d, int h){
	stringstream ss = stringstream();
	ss << d << h;
	string avector,abuscada=ss.str();
	stack<Arista> linea = stack<Arista>();
	Arista arco=GetArista(c);
	int c=0;
	while (c<aristas.size()){
		Arista arco=GetArista(c);
		avector=arco.Get_Arista();
		linea.push(arco);
		if ((avector[0] == abuscada[0]) && (avector[1] == abuscada[1])){
				return true;
			}
		c++;//GET IT? C plus plus XD
	}
	int lenstack=linea.size();
	//función auxiliar o hacerlo por recursividad,
	// que empieze desde el ultimo arco, a revisar en adelante
	//hasta que encuentre el camino.
	return false;
}


//metodos que retornan valores
unsigned int Grafo::GetLenVertices(){
	return vertices.size();	
}

unsigned int Grafo::GetLenAristas(){
	return aristas.size();
}

Vertice Grafo::GetVertice(int pos){
	return vertices[pos];
}
Arista Grafo::GetArista(int pos){
	return aristas[pos];
}
int Grafo::GetVertices_Iniciales(){
	return vertices_iniciales;
}
int Grafo::GetVertices_Creados(){
	return vertices_creados;
}

/*
bool Is_OneWay(const vector<Arista>& vecA, int A, int B){
	stringstream ss = stringstream();
	ss << A << B;
	int c=0;
	string avector,abuscada=ss.str();
	while (c<vecA.strlen()){
		avector=vecA[c].Get_Arista();
		if (avector[0]) == abuscada[0]){
			if (avector[1]) == abuscada[1]){
				return true;
			}
		}
		c++;//GET IT? C plus plus XD
	}
	return false;
}

// Retorna true si existe un arco entre d y h, en la dirección (d ->h) o false en caso contrario.
bool Grafo::hay_arco(int d, int h){
	if (Is_OneWay(vertices, d, h)){//ya no se pasa por referencia, porque se trabaja con direcciones de memoria
		return true;
	}
	return false;
}

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


// Retorna true si existe un camino entre d y h o false en caso contrario.
bool Grafo::hay_camino(int d, int h){
	if (Is_TwoWay(vertices, d, h)){//ya no se pasa por referencia, porque se trabaja con direcciones de memoria
		return true;
	}
	return false;
}
*/
