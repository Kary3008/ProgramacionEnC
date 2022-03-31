#include <stdio.h>
#include <stdlib.h>

void main(void){
    float a, b, x;
    printf("Sabiendo que una ecuacion de primer grado es 'ax + b = 0'\n");
    printf("Dame el valor de a: ");
    scanf("%d", &a);
    printf("Dame el valor de b: ");
    scanf("%d", &b);
    if(a>0){
        x = -(b/a);
        printf("El resultado es: %f \n", x);
    }
    if(a==0)
    	if(b>0)
        	printf("Solucion imposible\n");
    if(a==0)
    	if(b==0)
        	printf("Solucion indeterminada\n");
}
