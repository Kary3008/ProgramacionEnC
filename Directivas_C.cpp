/*
	Name: Directivas del preprocesador y variables
	Copyright: @KarydNa9
	Author: Karina Bautista Bautista
	Date: 08/12/21 19:54
	Description: Uso de las directivas del preprocesador.
*/

//LIBRERÍA
#include<stdio.h> //imprimir por pantalla y solicitar datos
#include<string.h>
#include<math.h> //todas comienzan con include
#include<stdlib.h>

/*MACRO
	Definir una variable que vamos a utilizar 
a lo largo de un programa*/

int y = 5; //variable global

#define PI 3.1416 //Macro

int main(){
	//variable: posición de memoria, que almacena un dato cualquiera
	int x = 10; //quiere decir que X vale 10
	//es una variable local porque está dentro de esa función.
	
	
	//int suma = 0; con int el resultado sale 13
	float suma = 0; //con float el resultado sale 13.141600
	
	suma = PI + x;
	printf("La suma es: %.2f", suma); /*indicar con %i (entero) para especificar el tipo de dato que es la variable
	imprime el resultado separado de una coma.
	indicar con %f para especificar que es float (decimal)
	%.2f acorta el número de decimales */
	
	return 0;
}
