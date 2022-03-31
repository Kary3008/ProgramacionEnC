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
    if (a<b && a<c && b<c)
        printf("\nTus valores estan ordenados");   
    if (b<a && b<c && a<c)
        printf("\nTus valores tienen el orden b a c");
    if (c<a && c<b && a<b)
        printf("\nTus valores tienen el orden c a b");
    if (b<c && b<a && c<a)
        printf("\nTus valores tienen el orden b c a");
    if (a<c && a<b && c<b)
        printf("\nTus valores tienen el orden a c b");
    if (c<b && c<a && b<a)
        printf("\nTus valores tienen el orden c b a");
    return 0;
}
