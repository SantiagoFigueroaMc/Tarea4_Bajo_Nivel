# include<iostream>
# include "vertice.h"
# include "arista.h"
# include "grafo.h"
# include <ctime>
# include <math.h>
#include <vector>


/*
// funcion para calcular el numero de digitos
int numDigitos( int numero ) {
	int cuentaDigitos = 0;
	while ( numero ) {
		++cuentaDigitos;
		numero /= 10;
	}
	return cuentaDigitos;
} 

// Retorna un numero aleatorio.
float random(int i=0, int f=1){
	unsigned long int tiempo = getMilliCount();
	unsigned long int cuadrado = pow(tiempo, 2);
	unsigned long int first_cut = cuadrado % pow(10, numDigitos(cuadrado)*2./3)
	unsigned long int second_cut = cuadrado % pow(10, numDigitos(cuadrado)/3.)
	return (first_cut - second_cut)/pow(10, numDigitos(cuadrado)/3.;
}*/

void printV(Grafo graf){
	cout<< "len vertices:" <<graf.GetLenVertices() <<endl;
	cout<< "len aristas:" <<graf.GetLenAristas() <<endl;
	cout<< "vertices creados:" <<graf.GetVertices_Creados() <<endl;
	cout<< "vertices iniciales:" <<graf.GetVertices_Iniciales() <<endl;
	for (int a=0; a<graf.GetLenVertices(); a++){
	cout << graf.GetVertice(a).GetName() << ",";
	}
	cout<<endl;
}

int main (){
	cout<<"welcome to main"<<endl;
	Grafo * waze= new Grafo();
	printf("numero de v:%d\n",Vertice::GetN_Vertice());
	cout<<"funciona"<<endl;
	Grafo * maps= new Grafo(10);
	printf("%d\n",Vertice::GetN_Vertice());
	cout<<"ya no funciona"<<endl;
	Grafo * moovit=new Grafo();
	Grafo * santiago= new Grafo(5);//tira error con por los mallocs, tal vez...
	printf("%d\n",Vertice::GetN_Vertice());
	Grafo * extra= new Grafo(0);
	printf("%d\n",Vertice::GetN_Vertice());
	cout<<"funcionaba :D\n"<<endl;
	
	printV(*waze);
	printV(*maps);
	printV(*moovit);
	printV(*santiago);

	delete(waze);delete(maps);delete(moovit);delete(santiago);delete(extra);
	return 0;
}


