//triángulo de asteriscos
#include<stdio.h>
void main(void)
{
	int i,k,n;
	printf("Inserte la base del triangulo: ");
	scanf("%i",&n);
	for(i=1; i<=n; i++)
	{	
		for(k=1;k<=n-i;k++)
		{
		printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
		printf("*");
		}
		printf("\n");
	}
	
}
