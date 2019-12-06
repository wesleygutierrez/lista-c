#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int valor, n2, n3, n4, maior, r;
	printf("soma dos menores numeros inseridos:\n");
	printf("insira o primeiro numero:\n");
	scanf("%d", &valor);
	printf("insira o segundo numero:\n");
	scanf("%d", &n2);
	printf("insira o terceiro numero:\n");
	scanf("%d", &n3);
	printf("insira o quarto numero:\n");
	scanf("%d", &n4);
	if(valor>n2 && valor>n3 && valor>n4)
	{
		maior=valor;
	}else if(n2>valor && n2>n3 && n2>n4)
	{
		maior=n2;
	}else if(n3>valor && n3>n2 && n3>n4)
	{
		maior=n3;
	}else if(n4>valor && n4>n2 && n4>n3)
	{
		maior=n4;
	}else if(valor==n2 && valor==n3 && valor==n4)
	{
		maior=n4;
	}
	r= ((valor+n2+n3+n4)-maior);
	printf("a soma e: %d\n", r);
	system("pause");
	return 0;
}
