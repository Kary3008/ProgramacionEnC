#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//copiar el contenido de una cadena a otra - Funcion strcpy()
void main(void)
{
	char string1[20];
	char string2[20];
	
	printf("Ingrese una palabra: ");
	scanf("%s",string1);
	
	
	strcpy(string2, string1);
	
	printf("La palabra en string1 es: %s", string1);
	printf("\nLa palabra en string2 es: %s", string2);
}
