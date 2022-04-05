/*
	Name: Do while - romper por centinela.
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 05/04/22 08:37
	Description: usar do While para hacer un programa
	que rompa el ciclo por centinela.
*/

#include<stdio.h>

void main(void)
{
	int num;
	do {
		printf("Introduce un # positivo: "),
		scanf("%i",&num);
		if(num<0)
			printf("Incorrecto, vuelva a intentarlo.\n");
	} 
	while(num<0);
	printf("Tu numero es: %i",num);
}

