#include<stdio.h>

int main ()
{
    int x;
    printf("Bienvenido\nFavor de insertar un numero:\nx= ");
    scanf("%d",&x);
    if (x<0)
    {
        printf("\nTu valor es negativo");
    }
    if (0<=x && x<=100)
    {
        printf("\nTu valor esta en el intervalo de 0 a 100");
    }
    if (x>100)
    {
        printf("\nTu valor es mayor a 100");
    }
    return 0;
}
