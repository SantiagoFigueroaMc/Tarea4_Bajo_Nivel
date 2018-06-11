#ifndef ARISTA
#define ARISTA

class Arista{
private:
	int nodo1;//int es el nombre del nodo
	int nodo2;
	int weight;
public:
	//constructor:
	Arista(){}
	Arista(int,int,double);
	
	//metodos:
	int Get_Nodo1();
	int Get_Nodo2();
	int Get_Weight();
	std::string Get_Arista();
};

#endif
