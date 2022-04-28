#include<stdio.h>

void main(void){
	int n, bin[100]; //arreglo
	int i=0;
	
	printf("Ingrese un numero decimal: ");
	scanf("%i", &n);
	
	while(n!=0) //almacena valores de 0 y 1
	{
		bin[i]=n%2; //el numero se divide entre 2 y se almacena el residuo: (1,0)
		n=n/2;
		i++;
	}
	i--;
	printf("Binario: ");
	
	while (i>=0)
	{
		printf("%i",bin[i]); //imprime los valores guardados en el arreglo
		i--; //se imprime el arreglo de forma inversa
	}
}
