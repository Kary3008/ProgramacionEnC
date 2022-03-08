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
	printf("\tMENU\n");
	printf("Digite un numero entre (1-17): \n");
	printf("1. a=b*c\n");
	printf("2. d=(b^2)-4*(a*c) \n");
	printf("3. m=(y2-y1)/(x2-x1) \n");
	printf("4. i=x+y-z \n");
	printf("5. j=(x+y)/(z+w) \n");
	printf("6. k=5/(1+x^2) \n");
	printf("7. (x/y)+1 \n");
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
		case 1: printf("\n 1. Resolver a=b*c \n");
		break;
		case 2: printf("\n 2. Resolver d=(b^2)-4*(a*c) \n");
		break;
		case 3: printf("\n 3. Resolver m=(y2-y1)/(x2-x1) \n");
		break;
		case 4: printf("\n 4. Resolver i=x+y-z \n");
		break;
		case 5: printf("\n 5. Resolver j=(x+y)/(z+w) \n");
		break;
		case 6: printf("\n 6. Resolver k=5/(1+x^2) \n");
		break;
		case 7: printf("\n 7. Resolver (x/y)+1 \n");
		break;
		case 8: printf("\n 8. Resolver (x+y)/(x-y) \n");
		break;
		case 9: printf("\n 9. Resolver x+(y/z) \n");
		break;
		case 10: printf("\n 10. Resolver z/(x-(y/z)) \n");
		break;
		case 11: printf("\n 11. Resolver b/(c+d) \n");
		break;
		case 12: printf("\n 12. Resolver (a+b)*(c/d) \n");
		break;
		case 13: printf("\n 13. Resolver ((a+b)^2)^2) \n");
		break;
		case 14: printf("\n 14. Resolver(x*y)/(1-4*(z*x)) \n");
		break;
		case 15: printf("\n 15. Resolver (x*y)/(m*n) \n");
		break;
		case 16: printf("\n 16. Resolver ((x+y)^2)*(a-b) \n");
		break;
		case 17: printf("\n 17. Resolver F and V and F or V \n");
		break;
		case 18: printf("\n 18. Resolver F and (F or V) and F or F \n");
		break;
		default: printf("No ha digitado un numero correcto");
	}
}
