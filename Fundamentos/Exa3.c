#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int num, dig, pos=0, res=0;
	int vector[]={1,2,4,8,16,32,64,128,256};
	//1 0 0 1
	//8 4 2 1
	printf("Ingrese el numero: \n");
	scanf("%i",&num);
	
	while(num>0)
	{
		dig=num%10;//toma la ultima posición: 1001=9
		if(dig==1)
			res=res+vector[pos];
			
			pos++; //la posición va a ir aumentando.
			num=num/10;//quita el num hace la comparación entre los otros: 123
	}
	
	printf("El resultado es: %i", res);
}
