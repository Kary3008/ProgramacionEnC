#include <stdio.h>
#include <string.h>

void main(void)
{
	char texto;
	int mayus=0;
	
	printf("Introduzca texto: ");
	gets(texto);
	
	if((texto>='A') && (texto<='Z'))
		mayus++;
	strcpy(mayus,texto);

	strupr(mayus);
	
	printf("Texto original: %s\n",texto);
	printf("Mayusculas: %s\n", mayus);
}
