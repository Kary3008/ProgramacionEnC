/*
	Name: Práctica con Do While
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 05/04/22 07:51
	Description: 
*/

#include<stdio.h>

void main(void)
{
	float calif,tot=0,prom,numAls=0;
	int i=1;
	
	printf("Capturar calis [0-10], -1 para terminar.\n");
	do {
		printf("Calificacion: ",numAls+1);
		scanf("%f",&calif);
		if(calif>=0 && calif<=10)
			tot=tot+calif;
			numAls=numAls+1;		
	} while(calif>=0 && calif<=10);
		prom=tot/numAls;
		printf("El promedio es: %f",prom);

}

