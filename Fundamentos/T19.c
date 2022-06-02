#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

int largo(char w1[TAM]);
void concatena(char s1[20], char s2[20]);
void copiaCad(char , char );
int cuentaVocales(char );
int cuentaMayus(char palabra[20]);

int main()
{
	int answer, opc;
	do{
		printf("\tMENU DE OPCIONES\n");
		printf("1. Longitud de una cadena\n");
		printf("2. Concatenar una cadena\n");
		printf("3. Copiar una cadena\n");
		printf("4. Contar vocales\n");
		printf("5. Contar mayusculas\n");
		printf("\nSelecciona una opcion: ");
		scanf("%i", &opc);
		switch(opc){
				case 1:
				printf("\n1. Longitud de una cadena\n\n");
				char w1[TAM];
				printf("Ingresa una palabra: ");
				scanf("%s", w1);
				largo(w1);
				break;
				case 2:
				printf("\n2. Concatenar una cadena\n\n");
				char s1[20];
				char s2[20];
				
				printf("\nIngrese la palabra para s1: ");
				scanf("%s",s1);
				printf("\nIngrese la palabra para s2: ");
				scanf("%s",s2);
				concatena(s1,s2);
				break;
				case 3:
				printf("\n3. Copiar una cadena\n\n");
				break;
				case 4:
				printf("\n4. Contar vocales\n\n");
				break;
				case 5:
				printf("\n5. Contar mayusculas\n\n");
				char palabra[20];
				printf("Ingresa una palabra: ");
				scanf("%s", palabra);
				cuentaMayus(palabra);
				break;
			default:
				printf("\nLa opcion que ingreso es incorrecta");
				break;
		}
		printf("\n\nDeseas volver a ver el menu\n");
		printf("Presiona 1 para continuar, sino presiona 2 para salir.\n\n");
		scanf("%i",&answer);
	}
	//Si answer es igual a 1 continua ejecutando, de lo contrario finaliza el programa.
	while(answer==1);
}

//     FUNCIONES

//Ejercicio 1
int largo(char w1[TAM])
{
	char aux[TAM]={'\0'};
	printf("La longitud de w1=%s es %d\n",w1,strlen(w1));
}

//Ejericicio 2
void concatena(char s1[20], char s2[20])
{
	printf("w1*w2 es %s\n",strcat(s1,s2));
}

//Ejercicio 5
int cuentaMayus(char palabra[20])
{
	int i=0, contMayus=0;
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
