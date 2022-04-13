/*
	Name: Tarea 16. Serie Fibonacci
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina	
	Date: 12/04/22 23:52
	Description: Solicitar al usuario los 2 primeros
	elementos de la serie y la cantidad de elementos
	a imprimir, tomando en cuenta los 2 primeros elementos.
*/
#include<stdio.h>
void main(void)
{
	int num, i, x=0,y=0,z=1;
	
	printf("Digite el primer elemento: ");
	scanf("%i",&x);
	printf("Digite el segundo elemento: ");
	scanf("%i",&y);
	printf("Elementos a imprimir: ");
	scanf("%i",&num);
	printf("%i, %i, ",x,y);
	
	for(i=1;i<num;i++)
	{
		z=x+y;
		x=y;
		y=z;
		
		printf("%i, ",z);
	}
}
