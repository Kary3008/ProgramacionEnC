#include <stdio.h>
#include <string.h>
#define TAM 20

void main(void)
{
	char w1[TAM]="Sol";
	char w2[TAM]="Luna";
	char aux[TAM]={'\0'};
	
	printf("La longitud de w1=%s es %d\n",w1,strlen(w1));
	printf("w1*w2 es %s\n",strcat(w1,w2));
}
