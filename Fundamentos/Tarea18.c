#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int opc, num1=0, num2=0;
	do
	{
		printf("MENU DE OPCIONES\n");
		printf("1. Ingrese los valores\n");
		printf("2. Sumar\n");
		printf("Selecciona una opcion: ");
		scanf("%i", &opc);
		switch(opc){
			case 1:
				printf("Problema 1");
				break;
			case 2:
				printf("Problema 2");
				break;	
			default:
				printf("La opcion que ingreso es incorrecta");
				break;		
		}
	}
	while(opc!=1);	
}
