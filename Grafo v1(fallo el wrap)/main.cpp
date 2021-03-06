# include<iostream>
# include "vertice.h"
# include "arista.h"
# include "grafo.h"
# include <ctime>
# include <math.h>
#include <vector>

#define Max 10

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
	/*
	cout<< "len vertices:" <<graf.GetLenVertices() <<endl;
	cout<< "len aristas:" <<graf.GetLenAristas() <<endl;
	cout<< "vertices creados:" <<graf.GetVertices_Creados() <<endl;
	cout<< "vertices iniciales:" <<graf.GetVertices_Iniciales() <<endl;
	*/
	for (unsigned int a=0; a<graf.GetLenVertices(); a++){
	cout << graf.GetVertice(a).GetName() << ",";
	}
	cout<<"Fin Nodos"<<endl;
	cout<<endl;
}

void printA(Grafo graf){
	for (unsigned int a=0; a<graf.GetLenAristas(); a++){
	cout << graf.GetArista(a).Get_Arista() << ";";
	}
	cout<<"Fin Arcos"<<endl;
	cout<<endl;
}

void funcionadd_narcos(Grafo * graf,int d,int h,int w=Max){
	graf->add_arco(d,h,w);
}

int main (){
	Grafo * waze= new Grafo();
	Grafo * maps= new Grafo(10);
	Grafo * moovit=new Grafo();
	Grafo * santiago= new Grafo(5);//tira error con por los mallocs, tal vez...
	Grafo * extra= new Grafo(0);

	printV(*waze);
	printV(*maps);
	printV(*moovit);
	printV(*santiago);
	printV(*extra);
	//proba add_nodo
	for (int j=0;j<11;j++){
		waze->add_nodo();
	}
	
	//progra add_arco
/*	
	for (int s=0;s<8;s++){
		int peso=40-s*s*2/3;
		funcionadd_narcos(waze,s,s+1,peso);
	}
*/
	funcionadd_narcos(waze,0,6,8);
	funcionadd_narcos(waze,0,9,7);
	funcionadd_narcos(waze,1,2,3);	
	funcionadd_narcos(waze,2,1,2);	
	funcionadd_narcos(waze,2,3,7);
	funcionadd_narcos(waze,2,5,10);
	funcionadd_narcos(waze,3,4,6);
	funcionadd_narcos(waze,3,7,9);
	funcionadd_narcos(waze,4,2,5);
	funcionadd_narcos(waze,4,8,6);
	funcionadd_narcos(waze,4,5,2);
	funcionadd_narcos(waze,5,4,1);
	funcionadd_narcos(waze,5,6,2);
	funcionadd_narcos(waze,6,5,10);
	funcionadd_narcos(waze,6,7,2);
	funcionadd_narcos(waze,6,9,4);
	funcionadd_narcos(waze,7,0,10);
	funcionadd_narcos(waze,7,6,3);
	funcionadd_narcos(waze,7,8,5);
	funcionadd_narcos(waze,7,3,8);
	funcionadd_narcos(waze,8,6,5);
	funcionadd_narcos(waze,8,5,3);
	funcionadd_narcos(waze,8,7,4);
	funcionadd_narcos(waze,9,6,4);
	funcionadd_narcos(waze,10,6,16);
	funcionadd_narcos(waze,100,60000,16);
	
	printV(*waze);
	cout<< "arcos" <<endl;
	printA(*waze);
	printA(*maps);
	printA(*moovit);
	printA(*santiago);
	printA(*extra);
	bool b1=waze->hay_arco(1,2);
	cout<< b1<<endl;
	bool b2=waze->hay_arco(2,1);
	cout<< b2<<endl;
	bool b3=waze->hay_arco(0,3);
	cout<< b3<<endl;
	bool b4=waze->hay_arco(10,3);
	cout<< b4<<endl;
	bool b5=waze->hay_arco(10,6);
	cout<< b5<<endl;
	bool b6=waze->hay_arco(100,60000);
	cout<< b6<<endl;

	delete(waze);delete(maps);delete(moovit);delete(santiago);delete(extra);
	return 0;
}

/* Por si acaso
funcionadd_narcos(waze,0,6,8);
	funcionadd_narcos(waze,0,9,7);
	funcionadd_narcos(waze,1,2,3);	
	funcionadd_narcos(waze,2,1,2);	
	funcionadd_narcos(waze,2,3,7);
	funcionadd_narcos(waze,2,5,10);
	funcionadd_narcos(waze,3,4,6);
	funcionadd_narcos(waze,3,7,9);
	funcionadd_narcos(waze,4,2,5);
	funcionadd_narcos(waze,4,8,6);
	funcionadd_narcos(waze,4,5,2);
	funcionadd_narcos(waze,5,4,1);
	funcionadd_narcos(waze,5,6,2);
	funcionadd_narcos(waze,6,5,10);
	funcionadd_narcos(waze,6,7,2);
	funcionadd_narcos(waze,6,9,4);
	funcionadd_narcos(waze,7,0,10);
	funcionadd_narcos(waze,7,6,3);
	funcionadd_narcos(waze,7,8,5);
	funcionadd_narcos(waze,7,3,8);
	funcionadd_narcos(waze,8,6,5);
	funcionadd_narcos(waze,8,5,3);
	funcionadd_narcos(waze,8,7,4);
	funcionadd_narcos(waze,9,6,4);
*/


