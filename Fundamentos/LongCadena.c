#include <stdio.h>
#include <string.h>

void main(void)
{
	char cadena[50];
	int x;
	printf("Ingrese una cadena de caracteres: ");
	gets(cadena);
	x=strlen(cadena);
	printf("La longitud de la cadena de caracteres es %d\n",x);	
}
