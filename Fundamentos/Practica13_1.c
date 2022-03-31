#include<stdio.h>
#include<conio.h>

void main(void)
{
	int anio;
	
	printf("Ingrese el anio: ");
	scanf("%d",&anio);
	
	if(anio%4==0){
		if(anio%100 !=0)
			printf("El anio es bisiesto");
			 if(anio%400 ==0)
				printf("El anio es bisiesto");
	}
	else
		printf("El anio no es bisiesto");
				
}
