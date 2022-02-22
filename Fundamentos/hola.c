#include <stdio.h>

void main(void)
{
	int a=6;			//%d %i
	char simbolo='@';	//%c	
	float pi=3.141592;	//%f
	
	printf("\tHola mundo!\n");
	printf("%d\n",a);
	printf("%c\n",simbolo);
	printf("%f\n",pi);
	
	printf("%f,%c,%d",pi,simbolo,a);

}
