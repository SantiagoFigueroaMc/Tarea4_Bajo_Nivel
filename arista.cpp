/*#include<iostream>

#include<string>
#include<sstream>

#include<list>
#include<stack>
#include<queue>

#include"vertice.h"*/
#include"arista.h"
#include <sys/timeb.h>

using namespace std;

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int reverse(int x){
    stringstream ss;
    ss << x;
    string str;
    ss >> str;
    reverse(str.begin(), str.end());
    ss.clear();
    ss << str;
    ss >> x;
    return x;
}

int getMilliCount(){
	timeb tb;
	ftime(&tb);
	int nCount = tb.millitm + (tb.time & 0xfffff) * 10000;
	return nCount;
}

Arista::Arista(int my_nodo1,int my_nodo2){
	nodo1=my_nodo1;
	nodo2=my_nodo2;
	for(int i = 0; i < 1000000; i++){int a = 55/16;}
	int my_num=getMilliCount() % 1000;
	weight=(reverse(my_num)/1000.);
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

/*                  ---------------------------------               */


