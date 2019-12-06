#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int anos;
 	int a;
	int r;
	
	a=31536000;
	
	printf("Digite a quantidade de anos:\n ");
	scanf("%d", &anos);
	
	r=anos*a;
	
	printf("A quantidade de batidas eh: %d\n",r);
			
	
	system("PAUSE");
	return 0;
}
