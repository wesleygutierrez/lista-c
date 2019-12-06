#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float m;
 	float p;
	
	
	printf("Digite a quantidade de chuva em polegadas:\n ");
	scanf("%f", &p);
	
	m=25.4*p;
	
	printf("A quantidade de chuva em milimetros eh: %f\n",m);
			
	
	system("PAUSE");
	
		
	return 0;
}
