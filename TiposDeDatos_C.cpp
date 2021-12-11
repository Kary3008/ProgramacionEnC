/*
	Name: TIPOS DE DATOS
	Copyright: @KarydNa9
	Author: Karina Bautista
	Date: 10/12/21 18:01
	Description: Se muestran los diferentes tipos de datos existentes, 
	su tamaño en bytes, el rango y cómo se imprime los diferentes tipos
	de datos.
*/

#include<stdio.h>

int main(){
	
	char a = 'e'; //tamaño 1 byte; Rango: 0..25
	short b = -15; //tamaño 2 bytes; Rango -128...127
	int c = 1024; //tamaño 2 bytes; Rango -32768...32767
	unsigned int d = 42325; //un entero que puede ser positivo / tamaño 2 bytes; Rango 0...655535
	long e = 123456; //tamaño = 4 bytes, Rango -2147483648...2147483637
	float f = 15.678; //tamaño = 4 bytes, Rango 3.4*(10   )...3.4*(10   )
	double m = 0.00045; //tamaño = 8 bytes Rango 1.7*(10   )...1.7*(10   )
	long double h = 0.00008; //tamaño = 8 bytes Rango 1.7*(10   )...1.7*(10   )
	
	
	printf("El elemento es: %c \n",a); //se coloca el %c para indicar que es un tipo de dato char
	printf("El elemento es: %i \n",b); // %i: dato entero
	printf("El elemento es: %i \n",c);
	printf("El elemento es: %i \n",d);
	printf("El elemento es: %li \n",e); //para long: %li
	printf("El elemento es: %f \n",f);
	printf("El elemento es: %.2f \n",f);//acortar los decimales
	printf("El elemento es: %lf \n",m); //para double
	printf("El elemento es: %.lf \n",m); //para double, quita los decimales
	printf("El elemento es: %lf \n",h); //para double
	
	
	return 0;
	
}
