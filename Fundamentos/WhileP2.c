/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/04/22 08:45
	Description: 
*/

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num;
		printf("Introduce un # positivo: "),
		scanf("%i",&num);
		if(num<0)
		printf("Incorrecto, vuelva intentarlo.");
	else while(num>0) {
		printf("Tu numero es: %i",num);
	}
}
