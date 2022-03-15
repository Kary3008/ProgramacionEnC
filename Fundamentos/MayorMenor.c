/*
	Name: Estructura If Else
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 10/03/22 19:34
	Description:  Llenar el código fuente de acuerdo al diagrama de flujo. 
*/

#include<stdio.h>
void main(void){
	int a, b, c;
	printf("Introduce 3 enteros diferentes entre si: ");
	scanf("%i %i %i",&a, &b, &c);
	if(a>b){
		if(b>c){
			printf("a>c>b");
		}
		else if(a>c){
			printf("a>c>b");
		}
		else {
			printf("c>a>b");
		}
	}
	else{
		if(a>c){
			printf("b>a>c");
		}
		else if(b>c){
			printf("b>c>a");
		}
		else{
			printf("c>b>a");
		}
		
	}
	
}
