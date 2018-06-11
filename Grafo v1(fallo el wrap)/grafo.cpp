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
	vertices_iniciales=numnodos;
	aristas.clear();
	vertices_creados=Vertice::GetN_Vertice();
	for (int i=0;i<numnodos;i++){
		Vertice ver=Vertice(i);
		vertices.push_back(ver);
	}
}	

// Crea un arco entre las aristas d y h, donde la dirección es desde d a h y el peso es w.
void Grafo::add_arco(int d, int h, int w=1){
	//ADD:que no agregue cuando es el mismo nodo
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
// d ---> h
bool Grafo::hay_arco(int d, int h){//Reconoce dos digitos
	stringstream ss = stringstream();
	ss << d <<"->"<< h;
	unsigned int c=0;
	string avector,abuscada=ss.str();
	string abuscada1,abuscada2;
	abuscada1=abuscada.substr(0,abuscada.find("->"));
	abuscada2=abuscada.substr((int)abuscada.find("->")+2);
	while (c<aristas.size()){
		Arista arco=GetArista(c);
		avector=arco.Get_Arista();
		string avector1,avector2;
		avector1=avector.substr(0,avector.find("->"));
		avector2=avector.substr((int)avector.find("->")+2);
		/*
		cout<< "hay_arco("<<d<< "," <<h<< "),"<<"c="<<c <<endl;
		cout<< abuscada1+" "+abuscada2<< ";"<< avector1+" "+avector2 <<endl;
		*/
		if ((avector1 == abuscada1) && (avector2 == abuscada2)){
				return true;
			}
		c++;//GET IT? C plus plus XD
	}
	return false;
}

int Grafo::GetWeight(int d,int h){
	if (hay_arco(d,h)==true){
		stringstream ss = stringstream();
		ss << d << h;
		unsigned int c=0;
		string avector,abuscada=ss.str();
	string abuscada1,abuscada2;
	abuscada1=abuscada.substr(0,abuscada.find("->"));
	abuscada2=abuscada.substr((int)abuscada.find("->")+2);
	while (c<aristas.size()){
		Arista arco=GetArista(c);
		avector=arco.Get_Arista();
		string avector1,avector2;
		avector1=avector.substr(0,avector.find("->"));
		avector2=avector.substr((int)avector.find("->")+2);
		if ((avector1 == abuscada1) && (avector2 == abuscada2)){
				return arco.Get_Weight();
			}
			c++;
		}
		return 0;
	}
	else return 0;
}
// Retorna true si existe un camino entre d y h o false en caso contrario.
// d <---> h
bool Grafo::hay_camino(int d, int h){//incompleto
	stringstream ss = stringstream();
	ss << d << h;
	string avector,abuscada=ss.str();
	stack<Arista> linea = stack<Arista>();
	unsigned int c=0;
	while (c<aristas.size()){
		Arista arco=GetArista(c);
		avector=arco.Get_Arista();
		linea.push(arco);
		if ((avector[0] == abuscada[0]) && (avector[1] == abuscada[1])){
				return true;
			}
		c++;//GET IT? C plus plus XD
	}

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


