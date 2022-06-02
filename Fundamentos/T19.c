/*
	Name: Tarea 19
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 31/05/22 12:07
	Description: Crear un programa en C, 
	donde se implementen y prueben las funciones 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 12

int largo(char w1[TAM]);
void concatena(char s1[TAM], char s2[TAM]);
void copiaCad(char str1[TAM], char str2[TAM]);
int cuentaVocales(char letra[TAM]);
int cuentaMayus(char palabra[TAM]);

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
					char s1[TAM],s2[TAM];				
					printf("\nIngrese la palabra para s1: ");
					scanf("%s",s1);
					printf("\nIngrese la palabra para s2: ");
					scanf("%s",s2);
					concatena(s1,s2);
				break;
				case 3:
					printf("\n3. Copiar una cadena\n\n");
					char str1[TAM], str2[TAM];
					printf("Ingrese una palabra para s1: ");
					scanf("%s",str1);
					copiaCad(str1,str2);
				break;
				case 4:
					printf("\n4. Contar vocales\n\n");
					char letra[TAM];
					printf("Ingresa una palabra: ");
					scanf("%s", letra);
					cuentaVocales(letra);
				break;
				case 5:
					printf("\n5. Contar mayusculas\n\n");
					char palabra[TAM];
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
void concatena(char s1[TAM], char s2[TAM])
{
	printf("Su concatenacion es %s\n",strcat(s1,s2));
}

//Ejercicio 3
void copiaCad(char str1[TAM], char str2[TAM])
{
	int longitud = strlen(str1);
	
	if(longitud < TAM)
	{
	strcpy(str2, str1);
	printf("La palabra en string1 es: %s", str1);
	printf("\nLa palabra en string2 es: %s", str2);
	}
	else
	{
		printf("No se pudo copiar s1 a s2\n");
	}
}

//Ejercicio 4
int cuentaVocales(char letra[TAM]){
	int contVocales = 0, i=0;
	while(letra[i]!='\0')
	{
		printf("\n%c", letra[i]);
		if(letra[i]=='a'||letra[i]=='e'||letra[i]=='i'||letra[i]=='o'||letra[i]=='u')
		{
			contVocales++;
		}
		i++;
	}
	printf("\nLa cantidad de vocales de la palabra %s es: %d", letra, contVocales);	
	}

//Ejercicio 5
int cuentaMayus(char palabra[TAM])
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
