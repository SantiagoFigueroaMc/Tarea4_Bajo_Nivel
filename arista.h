#ifndef ARISTA
#define ARISTA

class Arista{
private:
	int nodo1;//int es el nombre del nodo
	int nodo2;
	double weight;
public:
	//constructor:
	Arista(int,int,double);
	
	//metodos:
	int Get_Nodo1();
	int Get_Nodo2();
	double Get_Weight();
};

#endif
