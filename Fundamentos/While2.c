/*
	Name: WHILE	
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 28/03/22 19:04
	Description: Ejemplos de secuencias con la estructura While.
*/

#include<stdio.h>

void main(void){

	//primera secuencia
	int num=2, n, cont=1;
	printf("Cuantos elementos quieres imprimir: ");
	scanf("%d",&n);
	
	while(cont<=n)
	{
		printf("%d\n",num);
		num=num+2;
		cont++;	
	}
		
}
