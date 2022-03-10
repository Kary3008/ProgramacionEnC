/*
	Name: Tarea 4 Estructuras secuenciales.
	Copyright: @KarydNa9	
	Author: Karina Bautista Bautista	
	Date: 10/03/22 08:47
	Description: 
	T04 Ejercicios lámina 36 a 40 (Estructuras secuenciales).
	Instrucciones
	Crear:
              Diagrama de Flujo
              Pseudocódigo
              Código en C

	para los ejercicios de las láminas 36 a 40
*/
#include<stdio.h>
void main(void){
	int answer; 
	do {
		//Inicia el menu
		int num, a, b, c, d, e;
			printf("\tMENU\n\n");
			printf("1. Ejercicio 1: Orden Inverso\n");
			printf("2. Ejercicio 2  \n");
			printf("3. Ejercicio 3 \n");
			printf("4. Ejercicio 4 \n");
			printf("5. Ejercicio 5 \n");
			printf("Digite una opción entre el 1 al 5: \n");
			scanf("%i",&num);
		//Se introduce un switch case
		switch(num) 
		{
			case 1: printf("\n\tOrden Inverso\n");
					printf("Al recibir los datos A, B, C y D que representan numeros enteros,\nescriba los mismos en orden inverso.\n");
					printf("Digite el valor de A: \n");
					scanf("%i",&a);
					printf("Digite el valor de B: \n");
					scanf("%i",&b);
					printf("Digite el valor de C: \n");
					scanf("%i",&c);
					printf("Digite el valor de D: \n");
					scanf("%i",&d);
					printf("%i %i %i %i", d, c, b, a);	
			break;
			case 2: printf("\n\tTarea 2\n");
			
			break;
			case 3: printf("\n\tTarea 3\n");
			
			break;
			case 4: printf("\n\tTarea 4\n");
			
			break;
			case 5: printf("\n\tTarea 5\n");
			
			break;		
			
		//Sino ha seleccionado un  número del 1 al 16 imprime el mensaje.	
		default: printf("No ha digitado un numero del menu");
		}
		
		//Ejecución del Do while
		printf ("\n\nDeseas volver a ver el menu?\n");
		printf ("Presiona 1 para continuar, sino presiona 2 para salir:\n\n");
		scanf ("%d",&answer);
	} 
	//Si answer es igual a 1 continua ejecutando el menú, de lo contrario finaliza el programa.
	while(answer==1);
}
