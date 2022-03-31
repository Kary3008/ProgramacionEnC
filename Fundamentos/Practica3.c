#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Bienvenido favor de ingresar sus numeros enteros:\na) ");
    scanf("%d",&a);
    printf("\nb) ");
    scanf("%d",&b);
    printf("\nc) ");
    scanf("%d",&c);
    if (a<b)
    	if(a<c)
    		if(b<c)
        		printf("\nTus valores estan ordenados");   
    if (b<a)
    	if(b<c)
    		if(a<c)
       			printf("\nTus valores tienen el orden b a c");
    if (c<a)
    	if(c<b)
    		if(a<b)
        		printf("\nTus valores tienen el orden c a b");
    if (b<c)
    	if(b<a)
    		if(c<a)
        		printf("\nTus valores tienen el orden b c a");
    if (a<c)
    	if(a<b)
    		if(c<b)
        		printf("\nTus valores tienen el orden a c b");
    if (c<b)
    	if(c<a)
    		if(b<a)
        printf("\nTus valores tienen el orden c b a");
    return 0;
}
