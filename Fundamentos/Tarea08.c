/*
	Name: Rango de edades
	Copyright: @KarydNa9	
	Author: Bautista Bautista Karina
	Date: 17/03/22 23:32
	Description: Digite la edad y determinar en 
	que etapa o rango de edad se encuentra.
*/

#include<stdio.h>

void main(void){
	int edad;
	printf("Digite su edad: ");
	scanf("%i",&edad);
	
	if(edad>=0 && edad<=100)
		if(edad>=0 && edad<=13)
			printf("Eres un nino. :3");
		else if(edad>13 && edad<=20)
				printf("Eres un adolescente. :u");
			else if(edad>20 && edad<=40)
					printf("Eres un adulto joven. uwu");
				else if(edad>40 && edad<=60)
						printf("Eres un adulto");
					else if(edad>60 && edad<=100)
							printf("Eres un adulto mayor");
						else printf("No se que eres :000");
	else 
		printf("Introduzca una edad.");			
}

