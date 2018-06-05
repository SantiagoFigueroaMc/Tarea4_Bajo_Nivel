# include <ctime>
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
	unsigned long int tiempo = getMilliCount()*10000000000%1000/1;
	return tiempo;
}