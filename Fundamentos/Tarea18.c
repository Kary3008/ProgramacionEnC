#include <stdio.h>
#include <stdlib.h>
//int max(int a, int b, int c);



int main()
{
	int answer, opc, num1=0, num2=0;
	do
	{
		printf("MENU DE OPCIONES\n");
		printf("1. Maximo de 3 numeros\n");
		printf("2. Convertir de decimal a binario\n");
		printf("3. Convertir de binario a decimal\n");
		printf("4. Dibujar un cuadrado con asteriscos\n");
		printf("5. Dibujar un triangulo con asteriscos\n");
		printf("6. Factorial de un numero\n");
		printf("7. Cuadrado de un numero\n");
		printf("8. Potenciar un numero\n");
		printf("9. Valor absoluto de un numero\n");
		printf("Selecciona una opcion: ");
		scanf("%i", &opc);
		switch(opc){
			case 1:
				printf("1. Maximo de 3 numeros\n");
				break;
			case 2:
				printf("2. Convertir de decimal a binario\n");
				break;	
			case 3:
				printf("3. Convertir de binario a decimal\n");
				break;
			case 4:
				printf("4. Dibujar un cuadrado con asteriscos\n");
				break;
			case 5:
				printf("5. Dibujar un triangulo con asteriscos\n");
				break;
			case 6:
				printf("6. Factorial de un numero\n");
				break;
			case 7:
				printf("7. Cuadrado de un numero\n");
				break;
			case 8:
				printf("8. Potenciar un numero\n");
				break;	
			case 9:
				printf("9. Valor absoluto de un numero\n");
				break;	
			//Sino se ha seleccionado un número del 1 al 5 entonces...	
			default:
				printf("La opcion que ingreso es incorrecta");
				break;		
		}
		printf("\n\nDeseas volver a ver el menu\n");
		printf("Presiona 1 para continuar, sino presiona 2 para salir.\n\n");
		scanf("%i",&answer);
	}
	//Si answer es igual a 1 continua ejecutando, de lo contrario finaliza el programa.
	while(answer==1);	
}
