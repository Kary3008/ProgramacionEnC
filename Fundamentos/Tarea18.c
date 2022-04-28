/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/22 11:54
	Description: 
*/


#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c);
void decBin(int bin);
int binDec(int dec);
void dibujaCuad(int dcu);
void dibujaTrian(int trian);
int fact(int nfact);
float cuad(float ncu);
float pot(float arg, int exp);
float abso(float nabs);

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
				printf("\n1. Maximo de 3 numeros\n");
				int a, b, c;
			    printf("Digite 1er num: ");
			    scanf("%i", &a);
			    printf("Digite 2do num: ");
			    scanf("%i", &b);
			    printf("Digite 3er num: ");
			    scanf("%i", &c);
			    max(a, b, c);
			    return 0;
				break;
			case 2:
				printf("\n2. Convertir de decimal a binario\n");
				int bin;
				printf("Ingrese un numero decimal: ");
				scanf("%i", &bin);
				decBin(bin);
				return 0;
				break;	
			case 3:
				printf("\n3. Convertir de binario a decimal\n");
				break;
			case 4:
				printf("\n4. Dibujar un cuadrado con asteriscos\n");
				break;
			case 5:
				printf("\n5. Dibujar un triangulo con asteriscos\n");
				break;
			case 6:
				printf("\n6. Factorial de un numero\n");
				break;
			case 7:
				printf("\n7. Cuadrado de un numero\n");
				break;
			case 8:
				printf("\n8. Potenciar un numero\n");
				float res=pot(2,3);
				printf("El valor es: %.1f", res);
				break;	
			case 9:
				printf("\n9. Valor absoluto de un numero\n");
				float nabs;
			    printf("Digite un  numero ");
			    scanf("%f",&nabs);
			    abso(nabs);
			    return 0;
				break;	
			//Sino se ha seleccionado un número del 1 al 5 entonces...	
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


float pot(float arg, int exp)
{
	int i, res=1;
	for(i=0;i<exp;i++)
	{
		res*=arg;
	}
	return res;
}

int max(int a, int b, int c)
{
    if(a >= b && a >= c)
        printf("%i", a);
    if(b >= a && b >= c)
        printf("%i", b);
    if(c >= a && c >= b)
        printf("%i", c);
}

float abso(float nabs)
{
	if(nabs>0)
		printf("%.1f",nabs);
	else{
		nabs=(-1)*(nabs);
		printf("%.1f",nabs);
		}
}

void decBin(int bin)
{
	int n[100], i=0; 
	while(bin!=0) //almacena valores de 0 y 1
	{
		n[i]=bin%2; //el numero se divide entre 2 y se almacena el residuo: (1,0)
		bin=bin/2;
		i++;
	}
	i--;
	printf("Binario: ");
	
	while (i>=0)
	{
		printf("%i",n[i]); //imprime los valores guardados en el arreglo
		i--; //se imprime el arreglo de forma inversa
	}
}
