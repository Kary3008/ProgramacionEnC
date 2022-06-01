#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//copiar el contenido de una cadena a otra - Funcion strcpy()
void main(void)
{
	char string1[20];
	char string2[10];
	
	printf("Ingrese una palabra para s1: ");
	scanf("%s",string1);
	
	//devuelve la cantidad de caracteres sin contar \0 STRLEN()
	int longitud = strlen(string1);
	
	if(longitud < 10)
	{
	strcpy(string2, string1);
	printf("La palabra en string1 es: %s", string1);
	printf("\nLa palabra en string2 es: %s", string2);
	}
	else
	{
		printf("No se pudo copiar s1 a s2\n");
	}
}
