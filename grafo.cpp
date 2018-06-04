# include "grafo.h"

// Crea un arco entre las aristas d y h, donde la dirección es desde d a h y el peso es w.
void Grafo::add_arco(int d, int h, int w){

}

// Agregua un nodo y retorne el número que lo identifica. Los nodos serán identificados por un número secuencial que comenzará en cero.
int Grafo::add_nodo(){
	return 0;
}

// Retorna true si existe un arco entre d y h, en la dirección (d ->h) o false en caso contrario.
bool Grafo::hay_arco(int d, int h){
	if (Is_OneWay(&vertices, d, h)){
		return true;
	}
	return false;
}

// Retorna true si existe un camino entre d y h o false en caso contrario.
bool Grafo::hay_camino(int d, int h){
	return true;
}

