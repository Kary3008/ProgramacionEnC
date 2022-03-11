#include<stdio.h>
void main(void){
	int a, b, c;
	printf("Introduce 3 enteros diferentes entre si: ");
	scanf("%i %i %i",&a, &b, &c);
	if(a>b){
		if(b>c){
			printf("a>c>b");
		}
		else if(a>c){
			printf("a>c>b");
		}
		else {
			printf("c>a>b");
		}
	}
	else{
		if(a>c){
			printf("b>a>c");
		}
		else if(b>c){
			printf("b>c>a");
		}
		else{
			printf("c>b>a");
		}
		
	}
	
	
	
	/*
	
	
	else(b>c){
		printf("a>b>c");
	}
	else if(a>c){
		printf("a>c>b");
	}
	else if{
		printf("a>c>b");
	}*/
	
	 /*
	else if(b>a){
		//printf("El resultado es: %i",a);
	}
	else if(a>c){
		printf("b>a>c");
	}
	else if(b>c){
		//printf("El resultado es: %i",a);
	}
	else if(a>c){
		printf("b>a>c");
	}
	*/
	
	
	/*
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
	}*/
}
