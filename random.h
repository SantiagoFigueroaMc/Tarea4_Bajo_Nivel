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
	unsigned long int tiempo = getMilliCount();
	unsigned long int cuadrado = pow(tiempo, 2);
	unsigned long int first_cut = cuadrado % pow(10, numDigitos(cuadrado)*2./3)
	unsigned long int second_cut = cuadrado % pow(10, numDigitos(cuadrado)/3.)
	return (first_cut - second_cut)/pow(10, numDigitos(cuadrado)/3.;
}