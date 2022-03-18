/*
	Name: Calificación
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 17/03/22 23:22
	Description: Evaluar una calificación a través de un IF/ELSE anidado.
*/


#include<stdio.h>

void main(void){
	int calif;
	printf("Digite la calificacion: ");
	scanf("%i",&calif);
	
	if(calif>=0 && calif <=10)
		if(calif==6)
			printf("S");
		else if(calif==7)
				printf("R");
			else if(calif==8)
					printf("B");
				else if(calif==9)
						printf("MB");
					else if(calif==10)
							printf("E");
						else printf("F");
	else 
		printf("No es una calificacion valida.");		
	
}
