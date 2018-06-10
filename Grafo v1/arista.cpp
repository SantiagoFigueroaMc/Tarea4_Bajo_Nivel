#include <iostream>
#include <string>
#include <sstream>

#include"arista.h"

using namespace std;



Arista::Arista(int my_nodo1,int my_nodo2,double my_weight){
	nodo1=my_nodo1;
	nodo2=my_nodo2;
	weight=my_weight;
}

int Arista::Get_Nodo1(){
	return nodo1;
}

int Arista::Get_Nodo2(){
	return nodo2;
}

int Arista::Get_Weight(){
	return weight;
}

string Arista::Get_Arista(){
 stringstream ss;
	ss<<nodo1<<"->"<<nodo2;
	return ss.str();
}

/*    funciones   ---------------------------------   Cementerio    
#include <algorithm>
#include <sys/timeb.h>
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
*/
