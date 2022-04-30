//triángulo de asteriscos
#include<stdio.h>


void main(void)
{
	
	int i,k;
	for(i=0; i<4; i++)
	{
		for(k=0;k<i+1;k++)
		{
		printf("*");
		}
		printf("\n");
	}
	
}
