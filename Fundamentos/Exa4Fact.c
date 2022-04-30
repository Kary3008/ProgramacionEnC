//FACTORIAL
#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int n, i, fact=1;
	printf("Digite un numero: ");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	
	printf("El valor es: %i", fact);
}
