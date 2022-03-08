/*
	Name: Ejemplo de una estructura secuencial.
	Copyright: @KarydNa9
	Author: Karina Bautista Bautista		
	Date: 08/03/22 09:41
	Description: Hacer un ejemplo de una estructura secuencial,
	usando como ejemplo calcular el área de un trapecio.
*/

#include<stdio.h>

void main(void){
	float BMa, BMe, Altura, Area=0;
	
	printf("\tArea de un trapecio\n");
	printf("Digita la base mayor: \n");
	scanf("%f", &BMa);
	printf("Digita la base menor: \n");
	scanf("%f", &BMe);
	printf("Digita la altura \n");
	scanf("%f", &Altura);
	
	Area= ((BMa+BMe)/2)*Altura;
	
	printf("El area del trapecio es: %.2f",Area);
}


