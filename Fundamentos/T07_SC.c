/*
	Name: Calificación
	Copyright: @KarydNa9	
	Author: Bautista Bautista Karina
	Date: 17/03/22 23:26
	Description: Evaluar una calificación a través de un switch case.
*/

#include<stdio.h>

void main(void){
	int calif;
	printf("Digite la calificacion: ");
	scanf("%i",&calif);
	
	if(calif>=0 && calif <=10){
		switch(calif){
			case 6:
				printf("S");
			break;
			case 7:
				printf("R");
			break;
			case 8:
				printf("B");
			break;
			case 9:
				printf("MB");
			break;
			case 10:
				printf("E");
			break;
			default: 
				printf("F");
		}
	}
	else 
		printf("No es una calificacion valida.");		
	
}

