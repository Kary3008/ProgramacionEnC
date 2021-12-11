/*
	Name: ENTRADAS Y SALIDAS
	Copyright: @KarydNa9
	Author: Karina Bautista
	Date: 10/12/21 18:05
	Description: Ejemplos de cómo colocar las diferentes entradas y
	 salidas de los datos.
*/
#include<stdio.h>

int main(){
	int a = 10;
	float b = 15.5;
	char c = 'e';
	
	///////
	int n1;
	float n2;
	char n3;
	/////
	char x[50];
	char y[50];
	
	
	printf("Los valores son: %i %.2f %c \n", a, b, c);
	
	/////// pedir un valor///////
	printf("Digite el valor de la variable a: \n");
	scanf("%i",&n1);
	printf("Digite el valor de la variable b: \n");
	scanf("%f",&n2);
	printf("Digite el valor de la variable c: \n");
	scanf("%c",&n3);
	
	printf("El valor es: %i \n", n1);
	printf("El valor es: %f \n", n2);
	printf("El valor es: %c \n", n3);	
	
	////pedir nombre (STRING)
	printf("Digite su nombre: \n");
	scanf("%s",x);
	
	printf("Su nombre es: %s \n",x); //scanf sólo imprime hasta donde haya un espcio en char
	
	printf("Digite su nombre: \n");
	gets(y); //guarda todo el string
	
	printf("Su nombre es: %s",y);
	
	
	return 0;
	
}
