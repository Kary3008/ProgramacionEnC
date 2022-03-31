/*
	Name: Practica 10
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 30/03/22 23:54
	Description: Hacer un menu con 10 programas, 
*/

#include<stdio.h>
#include<stdlib.h>

void main(void){
	char a,b,c,letra;
	printf("Dame la primera letra: ");
	scanf(" %c",&a);
	printf("Dame la segunda letra: ");
	scanf(" %c",&b);
	printf("Dame la tercera letra: ");
	scanf(" %c",&c);
		if(a<b && a<c)
			letra = a;
			if(b<a && b<c)
				letra = b;
				if(c<b && c<a)
					letra = c;
		printf();
}
