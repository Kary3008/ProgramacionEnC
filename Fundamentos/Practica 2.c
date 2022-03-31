#include<stdio.h>
#include<stdlib.h>

void main(void){
	char a,b,c,letra;
	printf("Ingresa la primera letra: ");
	scanf(" %c",&a);
	printf("Ingresa la segunda letra: ");
	scanf(" %c",&b);
	printf("Ingresa la tercera letra: ");
	scanf(" %c",&c);
		if(a<b)
			if(a<c)
			letra = a;
		if(b<a)
			if(b<c)
			letra = b;
		if(c<b)
			if(c<a)
			letra = c;
		printf("La letra que va primero del alfabeto es: %c",letra);
		
}
