#include<stdio.h>
void main(void)
{
	int n;
	printf("Digite un numero: ");
	scanf("%i", &n);
	n= n%2;
	if(n==0)
		printf("El numero es par.");
		else 
			printf("El numero es impar");
}
