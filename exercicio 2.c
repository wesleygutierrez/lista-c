#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	

	double f;
 	double c;
	
	
	
	printf("Digite uma temperatura em Fahrenheit:\n ");
	scanf("%lf", &f);
	
	c=(f*5-160)/9;
	
	printf("A temperatura em Celsius eh: %lf\n",c);
			
	
	system("PAUSE");

	return 0;
}
