#include "seudo_random.h"
#include <stdlib.h>

using namespace std;
int main(){
	printf("%d", random());
	for (int i = 0; i<1000000000; i++){int a = i/5*10;a = a&0xfa;}
	printf("%d", random());
	return 0;
}

