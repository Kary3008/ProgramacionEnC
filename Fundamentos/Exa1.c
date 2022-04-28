#include <stdio.h>
//#include <math.h>

int pot(int arg, int exp);

void main(void)
{
	int res = pot(2, 3);
	printf("El valor es: %i", res);
	
	
}

int pot(int arg, int exp)
{
	int i, res=1;
	for(i=0;i<exp;i++)
	{
		res*=arg;
	}
	return res;
}
