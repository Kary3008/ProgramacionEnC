#include<stdio.h>

void main(void)
{
	int cont=1, num=2, n;
	printf("¿Cuantos elementos quieres: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",num);
		num=num+2;
		cont++;
	} while(cont<=n);
}
