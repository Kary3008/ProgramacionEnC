/*
	Name: Ejercicio 1. Operadores Aritm�ticos
	Copyright: @KarydNa9
	Author: Karina Bautista
	Date: 10/12/21 18:46
	Description: Pedir 2 n�meros al usuario y sumarlos, 
	restarlos, multiplicarlos y dividirlos.
*/

#include<stdio.h>

int main(){
	int n1, n2, suma = 0, resta = 0, mult = 0, div = 0;
	
	/*PRIMERA FORMA (que digite n�mero por n�mero)
	printf("Digite el primer n�mero: \n");
	scanf("%i",&n1); */
	
	printf("Digite los dos n�meros: \n"); //forma m�s corta y r�pida
	scanf("%i %i",&n1, &n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("La suma es: %i \n", suma);
	printf("La resta es: %i \n", resta);
	printf("La multiplicacion es: %i \n", mult);
	printf("La division es: %i \n", div);
	
	return 0;
}
