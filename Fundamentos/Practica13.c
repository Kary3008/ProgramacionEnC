#include<stdio.h>

void main(void)
{
	float n;
	printf("Digite la calificacion: ");
	scanf("%f",&n);
	if(n>=0)
		if(n<5.0)
			printf("Suspenso.");
	else if(n>=5)
		if(n<6.5)
			printf("Aprobado.");
	else if(n>=6.5)
		if(n<8.5)
			printf("Notable.");
	if(n>=8.5)
		if(n<10)
			printf("Sobresaliente.");
	else if(n==10)
		printf("Matricula de honor.");
	else
		printf("No es un numero del 1 al 10.");
}
