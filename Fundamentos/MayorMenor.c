#include<stdio.h>
void main(void){
	int a=4, b=6, c=8;
	if(a>b>c){
		printf("El resultado es: %i",a);
		printf("El resultado medio: %i",b);
		printf("El resultado menor: %i",c);
	}
	else if(a>c>b){
		printf("El resultado es: %i",a);
		printf("El resultado medio: %i",c);
		printf("El resultado menor: %i",b);
	}
	else if(b>a>c){
		printf("El resultado es: %i",b);
		printf("El resultado medio: %i",a);
		printf("El resultado menor: %i",c);
	}
	else if(b>c>a){
		printf("El resultado es: %i",b);
		printf("El resultado medio: %i",c);
		printf("El resultado menor: %i",a);
	}
	else if(c>a>b){
		printf("El resultado es: %i",c);
		printf("El resultado medio: %i",a);
		printf("El resultado menor: %i",b);
	}
	else if(c>b>a){
		printf("El resultado es: %i",c);
		printf("El resultado medio: %i",b);
		printf("El resultado menor: %i",a);
	}
}
