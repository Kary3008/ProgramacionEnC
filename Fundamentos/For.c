/*
	Name: Estructura For
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 28/03/22 19:53
	Description: Ejemplo de una estructura FOR.
*/

#include<stdio.h>

void main(void)
{
	int cont, num=2, n;
	printf("¿Cuantos elementos quieres: ");
	scanf("%d",&n);
	
	for(cont=1;cont<=n;cont++)
	{
		printf("%d\n",num);
		num=num+2;
	}
}
