#include<stdio.h>

void main(void)
{
	float max=40,med;
	printf("Temperatura maxima del mes: %.2f \n\n",max);
	printf("Digite la temperatura medida de hoy\n");
	scanf("%f",&med);
	if(max<=med)
		printf("La temperatura maxima es: %.2f",med);
		else printf("La temperatura maxima es: %.2f",max);
}
