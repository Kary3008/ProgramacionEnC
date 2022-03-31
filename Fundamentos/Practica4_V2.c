#include <stdio.h>
#include <stdlib.h>

void temp(float max, float med);

int main(){
    float max=40, med;
    printf("Temperatura maxima del mes: %.2f \n\n",max);
	printf("Digite la temperatura medida de hoy\n");
	scanf("%f",&med);
    temp(max, med);
    return 0;
}

void temp(float max, float med){
    if(max<=med)
		printf("La temperatura maxima es: %.2f",med);
		else printf("La temperatura maxima es: %.2f",max);
}
