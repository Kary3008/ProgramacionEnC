#include<stdio.h>

void main(void){
	int a, b, c;
	printf("Introduce 3 enteros diferentes entre si: ");
	scanf("%i %i %i",&a, &b, &c);
	if(a>b){
		if(b>c)
			printf("El numero mayor es: %i",a);
		else if(b>a)
				if(a>c)
			printf("El numero mayor es: %i",a);
		else
			printf("El numero mayor es: %i",c);
	}
	else{
		if(a>c)
			printf("El numero mayor es: %i",b);
		else if(b>c)
			printf("El numero mayor es: %i",b);
		else
			printf("El numero mayor es: %i",c);		
	}
	
}
