#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
	char texto;
	int mayus=0;
	int vocal=0;
	
	do{
	printf("Introduzca texto: ");
	scanf("%s",texto);
	
	switch(texto){
		case 'a': case 'e': case 'i': case 'o': case 'u': 'A': case 'E': case 'I': case 'O': case 'U';
		vocal++;
		default: if((texto>='A') && (texto<='Z')) mayus++;
//	strupr(mayus);
		}
	} while (letra!='.');
	printf("Texto original: %s\n",texto);
		printf("Mayusculas: %i\n", mayus);
		printf("Vocales: %i\n", vocal);
}
