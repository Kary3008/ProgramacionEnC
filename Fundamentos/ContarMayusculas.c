#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
	/*char texto;
	int mayus=0;
	
	do{
	printf("Introduzca texto: ");
	scanf("%s",texto);
	
	if((texto>='A') && (texto<='Z')) mayus++;
		}
	while (texto!='.');
	printf("Texto original: %s\n",texto);
		printf("Mayusculas: %i\n", mayus);
		*/
	int contMayus = 0;
	char palabra[20];
	int i=0;
	
	printf("Ingresa una palabra: ");
	scanf("%s", palabra);
	
	while(palabra[i]!='\0')
	{
		printf("\n%c", palabra[i]);
		if(palabra[i]>='A'&&palabra[i]<='Z')
		{
			contMayus++;
		}
		i++;
	}
	
	printf("\nLa cantidad de mayusculas de la palabra %s es: %d", palabra, contMayus);
	
}
