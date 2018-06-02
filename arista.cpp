/*#include<iostream>
#include<stdlib.h>
#include<string>
#include<sstream>

#include<list>
#include<stack>
#include<queue>

#inlcude"vertice.h"*/
#inlcude"arista.h"

using namespace std;

Arista::Arista(int n1,int n2){
	nodo1=n1;
	nodo2=n2;
}

int Arista::Get_Nodo1(){
	return nodo1;
}

int Arista::Get_Nodo2(){
	return nodo2;
}

double Arista::Get_Weight(){
	return weight;
}


