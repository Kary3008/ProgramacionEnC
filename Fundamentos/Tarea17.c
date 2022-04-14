/*
	Name: T17 - Serie ULAM
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 13/04/22 00:18
	Description: Codificar la serie ULAM en C.
*/

#include<stdio.h>
void main(void)
{
	int num;
	printf("Ingrese un numero \n");
	scanf("%d",&num);
	if(num>0)
		printf("%i",num);
		while(num!=2)
			num=num*2;
			printf("%i",num)
			
}
