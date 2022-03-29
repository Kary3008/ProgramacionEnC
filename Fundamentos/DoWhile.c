/*
	Name: DO WHILE	
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 28/03/22 19:45
	Description: Ejemplo en Do While.
*/

#include<stdio.h>

void main(void)
{
	int cont=1, num=2, n;
	printf("¿Cuantos elementos quieres: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",num);
		num=num+2;
		cont++;
	} while(cont<=n);
}
