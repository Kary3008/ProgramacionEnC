/*
	Name: Tarea 13
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 06/04/22 09:08
	Description: Codificar en C el diagrama de flujo
	en While
*/

#include<stdio.h>
void main(void)
{
	float tot=0, prom, calif;
	int numAls=0;
	printf("Capturar calificaciones [0,10], -1 para terminar.\n");
	//inicia while
	while(calif>=0 && calif<=10) 
	{
		printf("Calificacion %i: ",numAls+1);
		scanf("%f",&calif);
		tot=tot+calif;
		numAls=numAls+1;
	}
		prom=tot/numAls;
		printf("El promedio es: %.2f",prom);
}
