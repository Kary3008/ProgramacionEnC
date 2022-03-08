/*
	Name: Tarea 3	
	Copyright: @KarydNa9
	Author: Karina Bautista Bautista
	Date: 08/03/22 11:38
	Description: Implementar las siguientes funciones como
	expresiones de computadora y posteriormente a C.
*/
#include<stdio.h>
#include<stdlib.h>

void main(void){
	int numero;
	printf("\tMENU\n")
	printf("Digite un numero entre (1-17): \n");
	printf("1. a=b*c\n");
	printf("2. d=(b^2)-4*(a*c) \n");
	printf("3. m=(y2-y1)/(x2-x1) \n");
	printf("4. i=x+y-z \n");
	printf("5. j=(x+y)/(z+w) \n");
	printf("6. k=5/(1+x^2) \n");
	printf("7. r=(x/y)+1 \n");
	printf("8. (x+y)/(x-y) \n");
	printf("9. x+(y/z) \n");
	printf("10. z/(x-(y/z)) \n");
	printf("11. b/(c+d) \n");
	printf("12. (a+b)*(c/d) \n");
	printf("13. ((a+b)^2)^2) \n");
	printf("14. (x*y)/(1-4*(z*x)) \n");
	printf("15. (x*y)/(m*n) \n");
	printf("16. ((x+y)^2)*(a-b) \n");
	printf("17. F and V and F or V \n");
	printf("18. F and (F or V) and F or F \n");
	scanf("%i",&numero);
	
	switch(numero){
		case 1: printf("\n Es el numero 1");
		break;
		case 2: printf("\n Es el numero 2");
		break;
		case 3: printf("\n Es el numero 3");
		break;
		default: printf("No ha digitado un numero correcto");
	}
}
