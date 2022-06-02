#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
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
