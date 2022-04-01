/*
	Name: Practica 10
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 30/03/22 23:54
	Description: Hacer un menu con 10 programas, sin usar
	operadores lógicos.
*/

#include<stdio.h>
#include<stdlib.h>
void main(void){
	int answer;
	
	do{
	//Se introduce un switch case
	int numero,g,n,a1,b1,c1,gl,gv;
	float max=40,med,a2, b2, x;
	char a,b,c,letra;
	printf("\tMENU\n\n");
	printf("1. Par o impar. \n"); 					//Ejercicio 1
	printf("2. Primer letra del alfabeto. \n"); 	//Ejercicio 2
	printf("3. Orden numerico. \n"); 				//Ejercicio 3
	printf("4. Temperatura maxima. \n"); 			//Ejercicio 4
	printf("5. Goles. \n"); 						//Ejercicio 5
	printf("6. Ecuacion de primer grado. \n"); 		//Ejercicio 6
	printf("7. Clasificar un entero. \n"); 			//Ejercicio 7
	printf("8. Calificacion. \n"); 					//Ejercicio 13
	printf("9. Año bisiesto. \n"); 					//Ejercicio 14
	printf("10. Numero mayor. \n"); 				//Ejercicio 9
	printf("Digite una opcion entre (1-10): \n");
	scanf("%i",&numero);
	
	switch(numero){
		case 1: 
				printf("Digite un numero: ");
				scanf("%i", &n);
				n= n%2;
				if(n==0)
				printf("El numero es par.");
				else 
				printf("El numero es impar");
		break;
		case 2: 
				printf("Ingresa la primera letra: ");
				scanf(" %c",&a);
				printf("Ingresa la segunda letra: ");
				scanf(" %c",&b);
				printf("Ingresa la tercera letra: ");
				scanf(" %c",&c);
					if(a<b)
						if(a<c)
						letra = a;
					if(b<a)
						if(b<c)
						letra = b;
					if(c<b)
						if(c<a)
						letra = c;
					printf("La letra que va primero del alfabeto es: %c",letra);
		break;
		case 3: 
			    printf("Bienvenido favor de ingresar sus numeros enteros:\na) ");
			    scanf("%d",&a1);
			    printf("\nb) ");
			    scanf("%d",&b1);
			    printf("\nc) ");
			    scanf("%d",&c1);
			    if (a1<b1)
			    	if(a1<c1)
			    		if(b1<c1)
			        		printf("\nTus valores estan ordenados");   
			    if (b1<a1)
			    	if(b1<c1)
			    		if(a1<c1)
			       			printf("\nTus valores tienen el orden b a c");
			    if (c1<a1)
			    	if(c1<b1)
			    		if(a1<b1)
			        		printf("\nTus valores tienen el orden c a b");
			    if (b1<c1)
			    	if(b1<a1)
			    		if(c1<a1)
			        		printf("\nTus valores tienen el orden b c a");
			    if (a1<c1)
			    	if(a1<b1)
			    		if(c1<b1)
			        		printf("\nTus valores tienen el orden a c b");
			    if (c1<b1)
			    	if(c1<a1)
			    		if(b1<a1)
			        printf("\nTus valores tienen el orden c b a");
		break;
		case 4: 
				printf("Temperatura maxima del mes: %.2f \n\n",max);
				printf("Digite la temperatura medida de hoy\n");
				scanf("%f",&med);
				if(max<=med)
					printf("La temperatura maxima es: %.2f",med);
					else printf("La temperatura maxima es: %.2f",max);
		break;
		case 5: 
				printf("Dame los goles del local: ");
			    scanf("%d", &gl);
			    printf("Dame los goles del visitante: ");
			    scanf("%d", &gv);
			    
			    if(gl>gv)
			    	printf("Local\n");
			    if(gv>gl)
			    	printf("Visitante\n");
			    if(gl==gv)
			    	printf("Empate");
		break;
		case 6:
			    printf("Sabiendo que una ecuacion de primer grado es 'ax + b = 0'\n");
			    printf("Dame el valor de a: ");
			    scanf("%d", &a2);
			    printf("Dame el valor de b: ");
			    scanf("%d", &b2);
			    if(a2>0){
			        x = -(b2/a2);
			        printf("El resultado es: %f \n", x);
			    }
			    if(a2==0)
			    	if(b2>0)
			        	printf("Solucion imposible\n");
			    if(a2==0)
			    	if(b2==0)
			        	printf("Solucion indeterminada\n");
		break;
		case 7: printf("\n 7. Resolver (x/y)+1 \n");
				printf("Digite x: \n");
				/*scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				c=(a/b)+1;
				printf("El resultado es: %.2f",c);*/
		break;
		case 8: printf("\n 8. Resolver (x+y)/(x-y) \n");
				printf("Digite x: \n");
				/*scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				c=(a+b)/(a-b);
				printf("El resultado es: %.2f",c);*/
		break;
		case 9: printf("\n 9. Resolver x+(y/z) \n");
				printf("Digite x: \n");
				/*scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite z: \n");
				scanf("%f",&c);
				m=a+(b/c);
				printf("El resultado es: %.2f",m);*/
		break;
		case 10: printf("\n 10. Resolver z/(x-(y/z)) \n");
				printf("Digite x: \n");
				/*scanf("%f",&a);
				printf("Digite y: \n");
				scanf("%f",&b);
				printf("Digite z: \n");
				scanf("%f",&c);
				d=c/(a-(b/c));
				printf("El resultado es: %.2f",d);*/
		break;
		//Sino ha seleccionado un  número del 1 al 10 imprime el mensaje.
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
/*
void main(void){
	char a,b,c,letra;
	printf("Dame la primera letra: ");
	scanf(" %c",&a);
	printf("Dame la segunda letra: ");
	scanf(" %c",&b);
	printf("Dame la tercera letra: ");
	scanf(" %c",&c);
		if(a<b && a<c)
			letra = a;
			if(b<a && b<c)
				letra = b;
				if(c<b && c<a)
					letra = c;
		printf("La letra que va primero del alfabeto es: %c",letra);
		
}*/
