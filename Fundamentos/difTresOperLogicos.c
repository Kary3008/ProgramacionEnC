/*
	Name: Operadores L�gicos 
	Copyright: @KarydNa9	
	Author: Bautista Bautista Karina
	Date: 15/03/22 08:10
	Description: Introducir 3 n�meros diferentes y evaluar si es mayor a 2 n�meros.
*/

#include <stdio.h>
void main(void)
{
    int a,b,c;
    printf("Introduce 3 enteros diferentes: \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&b>c)
    	printf("a>b>c");
    else if(a>c&&c>b)
	    	printf("a>c>b");
	    else if(b>a&&a>c)
	    		printf("b>a>c");
	    	else if(b>c&&c>a)
		    		printf("b>c>a");
		    	else if(c>a&&a>b)
		    			printf("c>a>b");
		    		else if(c>b&&b>a)
		    				printf("c>b>a");
		    			else
							printf("Alguna de las variables eran equivalentes.");								
}
