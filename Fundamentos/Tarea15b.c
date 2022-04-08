/*
	Name: Tarea 15-b
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 08/04/22 10:20
	Description: Introducir un numero positivo con ciclo while
*/

#include<stdio.h>
void main(void)
{
	int num;
	while(num<=1) 
	{
		printf("Introduce un # positivo: ");
		scanf("%i",&num);
		if(num>0)
			printf("El numero es: %i",num);
	}
}
