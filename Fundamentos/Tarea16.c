/*
	Name: Tarea 16. Serie Fibonacci
	Copyright: 
	Author: 
	Date: 12/04/22 23:52
	Description: 
*/
#include<stdio.h>
void main(void)
{
	int num, i, x=0,y=1,z=1;
	
	printf("Digite el numero de elementos: ");
	scanf("%i",&num);
	
	printf("1, ");
	
	for(i=1,i<num;i++)
	{
		z=x+y;
		x=y;
		y=z;
		
		printf("%i, ",z);
	}
}
