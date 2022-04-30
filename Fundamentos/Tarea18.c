/*
	Name: Tarea 18 - Funciones
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 28/04/22 11:54
	Description: Hacer un menú con funciones.
*/


#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c); //Ejercicio 1
void decBin(int bin); //Ejercicio 2
int binDec(int dec); //Ejercicio 3
void dibujaCuad(int dcu); //Ejercicio 4
void dibujaTrian(int trian); //Ejercicio 5
int fact(int n); //Ejercicio 6
float cuad(float ncu); //Ejercicio 7
float pot(float arg, int exp); //Ejercicio 8
float abso(float nabs); //Ejercicio 9

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
				break;
			case 2:
				printf("\n2. Convertir de decimal a binario\n");
				int bin;
				printf("Ingrese un numero decimal: ");
				scanf("%i", &bin);
				decBin(bin);
				break;	
			case 3:
				printf("\n3. Convertir de binario a decimal\n");
				int dec;
				printf("Ingrese el numero: \n");
				scanf("%i",&dec);
				binDec(dec);
				break;
			case 4:
				printf("\n4. Dibujar un cuadrado con asteriscos\n");
				int dcu;
				printf("Inserte la base del cuadrado: ");
				scanf("%i",&dcu);
				printf("\n");
				dibujaCuad(dcu);
				break;
			case 5:
				printf("\n5. Dibujar un triangulo con asteriscos\n");
				int trian;
				printf("Inserte la base del triangulo: ");
				scanf("%i",&trian);
				printf("\n");
				dibujaTrian(trian);
				break;
			case 6:
				printf("\n6. Factorial de un numero\n");
				int n;
				printf("Digite un numero: ");
				scanf("%i", &n);
				fact(n);
				break;
			case 7:
				printf("\n7. Cuadrado de un numero\n");
				float ncu;
				printf("Digite un numero: ");
				scanf("%f",&ncu);
				cuad(ncu);
				break;
			case 8:
				printf("\n8. Potenciar un numero\n");
				float arg;
				int exp;
				printf("Digite la base: ");
				scanf("%f",&arg);
				printf("Digite el exponente");
				scanf("%i",&exp);
				pot(arg,exp);
				break;	
			case 9:
				printf("\n9. Valor absoluto de un numero\n");
				float nabs;
			    printf("Digite un  numero: ");
			    scanf("%f",&nabs);
			    abso(nabs);
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

//Función - Ejercicio 1
int max(int a, int b, int c)
{
    if(a >= b && a >= c)
        printf("%i", a);
    if(b >= a && b >= c)
        printf("%i", b);
    if(c >= a && c >= b)
        printf("%i", c);
}
//Función - Ejercicio 2
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
//Función - Ejercicio 3
int binDec(int dec)
{
	int dig, pos=0, res=0;
	int vector[]={1,2,4,8,16,32,64,128,256};
	while(dec>0)
	{
		dig=dec%10;//toma la ultima posición: 1001=9
		if(dig==1)
			res=res+vector[pos];
			
			pos++; //la posición va a ir aumentando.
			dec=dec/10;//quita el num hace la comparación entre los otros: 123
	}
	
	printf("El resultado es: %i", res);
}
//Función - Ejercicio 4
void dibujaCuad(int dcu){
	int i, j;
	for(i=1; i<=dcu; i++)
	{	
		for(j=1;j<=dcu;j++)
		printf(" ");
		for(j=1;j<=dcu;j++)
		printf(" * ");
		printf("\n");
	}
}
//Función - Ejercicio 5
void dibujaTrian(int trian){
	int i, k;
	for(i=1; i<=trian; i++)
	{	
		for(k=1;k<=trian-i;k++)
		printf(" ");
		for(k=1;k<=2*i-1;k++)
		printf("*");
		printf("\n");
	}
}
//Función - Ejercicio 6
int fact(int n)
{
	int i,fact=1;
	for(i=1; i<=n; i++)
		fact = fact*i;
			
	printf("El valor es: %i", fact);
}
//Función - Ejercicio 7
float cuad(float ncu)
{
	ncu=ncu*ncu;
	printf("El cuadrado de un numero es: %.1f",ncu);
}
//Función - Ejercicio 8
float pot(float arg, int exp)
{
	int i, res=1;
	for(i=0;i<exp;i++)
	{
		res*=arg;
	}
	printf("La potencia de %.0f ^ %i es: %i",arg,exp,res);
}
//Función - Ejercicio 9
float abso(float nabs)
{
	if(nabs>0)
		printf("El valor absoluto es |%.0f|",nabs);
	else{
		nabs=(-1)*(nabs);
		printf("El valor absoluto es |%.0f|",nabs);
		}
}
