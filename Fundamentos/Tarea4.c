/*
	Name: Tarea 4 Estructuras secuenciales.
	Copyright: @KarydNa9	
	Author: Karina Bautista Bautista	
	Date: 10/03/22 08:47
	Description: 
	T04 Ejercicios l�mina 36 a 40 (Estructuras secuenciales).
	Instrucciones
	Crear:
              Diagrama de Flujo
              Pseudoc�digo
              C�digo en C

	para los ejercicios de las l�minas 36 a 40
*/
#include<stdio.h>
void main(void){
	int answer; 
	do {
		//Inicia el menu
		int num, a, b, c, d, cla;
		float su1, su2, su3, su4, su5, su6, ing, pm, bas, alt, sup;
			printf("\tMENU\n\n");
			printf("1. Ejercicio 1: Orden Inverso\n");
			printf("2. Ejercicio 2  \n");
			printf("3. Ejercicio 3 \n");
			printf("4. Ejercicio 4 \n");
			printf("5. Ejercicio 5 \n");
			printf("Digite una opcion entre el 1 al 5: ");
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
			case 2: printf("\n\tPromedio mensual\n");
					printf("Al recibir los datos la clave del empleado y los 6 primeros sueldos del an�o,\ncalcule el ingreso total semestral y el promedio mensual.\n");
					/*
					clave del empleado: cla -> int
					6 sueldos del a�o: su1, su2, su3, su4, su5, su6 ->float.
					*/
					printf("Clave del empleado: ");
					scanf("%i",&cla);
					printf("Digite su primer sueldo del an�o: \n");
					scanf("%f",&su1);
					printf("Digite su segundo sueldo del an�o:  \n");
					scanf("%f",&su2);
					printf("Digite su tercer sueldo del an�o:  \n");
					scanf("%f",&su3);
					printf("Digite su cuarto sueldo del an�o: \n");
					scanf("%f",&su4);
					printf("Digite su quinto sueldo del an�o:  \n");
					scanf("%f",&su5);
					printf("Digite su sexto sueldo del an�o:  \n");
					scanf("%f",&su6);
					/*imprimir clave, ingreso total y promedio mensual*/
					printf("\nClave del empleado: %i\n",cla);
					//ingreso total
					ing= su1+su2+su3+su4+su5+su6;
					printf("Ingreso total semestral: $%.2f\n", ing);
					//promedio mensual
					pm= ing/6;
					printf("Promedio mensual: %.2f\n", pm);				
			break;
			case 3: printf("\n\tSuperficie de un triangulo.\n");
					printf("Al recibir como datos la base y la altura de un triangulo,\ncalcule su superficie.\n");
					printf("Digite la base del triangulo: \n");
					scanf("%f",&bas);
					printf("Digite la altura del triangulo: \n");
					scanf("%f",&alt);
					sup=(bas*alt)/2;
					printf ("La superficie del triangulo es: %.2f", sup);			
			break;
			case 4: printf("\n\tTarea 4\n");
			
			break;
			case 5: printf("\n\tTarea 5\n");
			
			break;		
			
		//Sino ha seleccionado un  n�mero del 1 al 16 imprime el mensaje.	
		default: printf("No ha digitado un numero del menu");
		}
		
		//Ejecuci�n del Do while
		printf ("\n\nDeseas volver a ver el menu?\n");
		printf ("Presiona 1 para continuar, sino presiona 2 para salir:\n\n");
		scanf ("%d",&answer);
	} 
	//Si answer es igual a 1 continua ejecutando el men�, de lo contrario finaliza el programa.
	while(answer==1);
}
