#include <stdio.h>

void main(void)
{
	int var1=10;
	int *apEntero = &var1;
	 printf("Valor de var1: %i", var1);
	 //cambio de asignación
	 *apEntero = 30;
	 printf("\n\nValor de var1: %i", var1);
}
