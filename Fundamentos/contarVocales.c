#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int contVocales = 0;
	char palabra[20];
	int i=0;
	
	printf("Ingresa una palabra: ");
	scanf("%s", palabra);
	
	while(palabra[i]!='\0')
	{
		printf("\n%c", palabra[i]);
		if(palabra[i]=='a'||palabra[i]=='e'||palabra[i]=='i'||palabra[i]=='o'||palabra[i]=='u')
		{
			contVocales++;
		}
		i++;
	}
	
	printf("\nLa cantidad de vocales de la palabra %s es: %d", palabra, contVocales);
	
	}		
