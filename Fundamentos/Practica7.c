#include<stdio.h>

void main(void)
{
    int x;
    printf("Bienvenido\nFavor de insertar un numero:\nx= ");
    scanf("%d",&x);
    if (x<0)
        printf("\nTu valor es negativo -> (x < 0)");
    if (0<=x)
    	if(x<=100)
        printf("\nTu valor esta en el intervalo de 0 a 100 -> (0 <= x <=100)");
    if (x>100)
        printf("\nTu valor es mayor a 100 -> (x > 100)");
}
