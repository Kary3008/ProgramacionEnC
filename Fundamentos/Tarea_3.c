/*
	Name: Tarea 3
	Copyright: @KarydNa9	
	Author: Karina Bautista Bautista
	Date: 09/03/22 09:58
	Description: Implementar fórmulas como expresiones de computadora.
*/
#include<stdio.h>
void main(void){
	int answer;
	
	do{
		//Se introduce un switch case
		int numero,g;
	float a=0, b=0, c=0, d=0, m=0, y2=0, y1=0, x2=0, x1=0;
	printf("\tMENU\n\n");
	printf("1. a=b*c\n");
	printf("2. d=(b^2)-4*(a*c) \n");
	printf("3. m=(y2-y1)/(x2-x1) \n");
	printf("4. i=x+y-z \n");
	printf("5. j=(x+y)/(z+w) \n");
	printf("6. k=5/(1+x^2) \n");
	printf("7. (x/y)+1 \n");
	printf("8. (x+y)/(x-y) \n");
	printf("9. x+(y/z) \n");
	printf("10. z/(x-(y/z)) \n");
	printf("11. b/(c+d) \n");
	printf("12. (a+b)*(c/d) \n");
	printf("13. ((a+b)^2)^2) \n");
	printf("14. (x*y)/(1-4*(z*x)) \n");
	printf("15. (x*y)/(m*n) \n");
	printf("16. ((x+y)^2)*(a-b) \n");
	printf("Digite un numero entre (1-16): \n");
	scanf("%i",&numero);
	
	switch(numero){
		case 1: printf("\n 1. Resolver a=b*c \n");
				printf("Digite b: ");
				scanf("%f", &b);
				printf("Digite c: ");
				scanf("%f", &c);
				a=b*c;
				printf("La variable a es igual a: %.1f", a);
		break;
		case 2: printf("\n 2. Resolver d=(b^2)-4*(a*c) \n");
				printf("Digite a: ");
				scanf("%f", &a);
				printf("Digite b: ");
				scanf("%f", &b);
				printf("Digite c: ");
				scanf("%f", &c);
				d= (b*b)-4*(a*c);
				printf("La variable d es igual a: %.2f", d);
		break;
		case 3: printf("\n 3. Resolver m=(y2-y1)/(x2-x1) \n");
				printf("Digite x1: \n");
				scanf("%f",&x1);
				printf("Digite x2: \n");
				scanf("%f",&x2);
				printf("Digite y1: \n");
				scanf("%f",&y1);
				printf("Digite y2: \n");
				scanf("%f",&y2);
				m=(y2-y1)/(x2-x1);
				printf("La pendiente de la recta es: %.2f",m);
		break;
		case 4: printf("\n 4. Resolver i=x+y-z \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite z: \n");
				scanf("%f",&c);
				d=a+b-c;
				printf("El resultado de i: %.2f",d);
		break;
		case 5: printf("\n 5. Resolver j=(x+y)/(z+w) \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite z: \n");
				scanf("%f",&c);
				printf("Digite w: \n");
				scanf("%f",&d);
				m=(a+b)/(c+d);
				printf("El resultado es: %.2f",m);
		break;
		case 6: printf("\n 6. Resolver k=5/(1+x^2) \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				m=5/(1+(a*a));
				printf("El resultado es: %.2f",m);
		break;
		case 7: printf("\n 7. Resolver (x/y)+1 \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				c=(a/b)+1;
				printf("El resultado es: %.2f",c);
		break;
		case 8: printf("\n 8. Resolver (x+y)/(x-y) \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				c=(a+b)/(a-b);
				printf("El resultado es: %.2f",c);
		break;
		case 9: printf("\n 9. Resolver x+(y/z) \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite z: \n");
				scanf("%f",&c);
				m=a+(b/c);
				printf("El resultado es: %.2f",m);
		break;
		case 10: printf("\n 10. Resolver z/(x-(y/z)) \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite z: \n");
				scanf("%f",&c);
				d=c/(a-(b/c));
				printf("El resultado es: %.2f",d);
		break;
		case 11: printf("\n 11. Resolver b/(c+d) \n");
				printf("Digite b: \n");
				scanf("%f",&b);
				printf("Digite c: \n");
				scanf("%f",&c);
				printf("Digite d: \n");
				scanf("%f",&d);
				a=b/(c+d);
				printf("El resultado es: %.2f",a);
		break;
		case 12: printf("\n 12. Resolver (a+b)*(c/d) \n");
				printf("Digite a: \n");
				scanf("%f",&a);
				printf("Digite b: \n");
				scanf("%f",&b);
				printf("Digite c: \n");
				scanf("%f",&c);
				printf("Digite d: \n");
				scanf("%f",&d);
				m=(a+b)*(c/d);
				printf("El resultado es: %.2f",m);
		break;
		case 13: printf("\n 13. Resolver ((a+b)^2)^2) \n");
				printf("Digite a: \n");
				scanf("%f",&a);
				printf("Digite b: \n");
				scanf("%f",&b);
				c=((a+b)*(a+b))*((a+b)*(a+b));
				printf("El resultado es: %.2f",c);
		break;
		case 14: printf("\n 14. Resolver(x*y)/(1-4*(z*x)) \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite z: \n");
				scanf("%f",&c);
				d=(a*b)/(1-4*(c*a));
				printf("El resultado es: %.2f",d);
		break;
		case 15: printf("\n 15. Resolver (x*y)/(m*n) \n");
				printf("Digite x: \n");
				scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite m: \n");
				scanf("%f",&c);
				printf("Digite n: \n");
				scanf("%f",&d);
				m=(a*b)/(c*d);
				printf("El resultado es: %.2f",m);
		break;
		case 16: printf("\n 16. Resolver ((x+y)^2)*(a-b) \n");
				printf("Digite a: \n");
				scanf("%f",&a);
				printf("Digite b: \n");
				scanf("%f",&b);
				printf("Digite x: \n");
				scanf("%f",&c);
				printf("Digite y: \n");
				scanf("%f",&d);
				m=((c+d)*(c+d))*(a-b);
				printf("El resultado es: %.2f",m);
		break;
		//Sino ha seleccionado un  número del 1 al 16 imprime el mensaje.
		default: printf("No ha digitado un numero del menu");
		}	
		//Do while
		printf ("\n\nDeseas volver a ver el menu?\n");
		printf ("Presiona 1 para continuar, sino presiona 2 para salir:\n\n");
		scanf ("%d",&answer);	
	}
	//Si answer es igual a 1 continua ejecutando el menú, de lo contrario finaliza el programa.
	while(answer==1);
}
