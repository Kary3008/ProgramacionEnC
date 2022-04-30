//triángulo de asteriscos
#include<stdio.h>


void main(void)
{
	
	int i,k;
	for(i=0; i<4; i++)
	{	
		for(k=0;k<4-i;k++)
		{
		printf(" ");
		}
		for(k=0;k<i*2+1;k++)
		{
		printf("*");
		}
		printf("\n");
	}
	
}
