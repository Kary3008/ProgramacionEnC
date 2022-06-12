#include<stdio.h>

void main(void)
{
	char matriz[3][3]; //matriz principal
	int i, j; //iteradores
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++){
		matriz[i][j]='[ ]';
		printf("%c", matriz[i][j]);
		}
		printf("\n");
	}
	
}
