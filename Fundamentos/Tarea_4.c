#include<stdio.h>

void main(void){
	
	int num, a, b, c, d, cla;
	float su1, su2, su3, su4, su5, su6, ing, pm, bas, alt, sup, pie, lib, rad, vol, pi=3.1416, sup1,alt1;
			//Orden Inverso
			printf("\nDigite el valor de A: \n");
			scanf("%i",&a);
			printf("Digite el valor de B: \n");
			scanf("%i",&b);
			printf("Digite el valor de C: \n");
			scanf("%i",&c);
			printf("Digite el valor de D: \n");
			scanf("%i",&d);
			printf("%i %i %i %i", d, c, b, a);	
			
			//Promedio
			printf("\nClave del empleado: ");
			scanf("%i",&cla);
			printf("Digite su primer sueldo: \n");
			scanf("%f",&su1);
			printf("Digite su segundo sueldo: \n");
			scanf("%f",&su2);
			printf("Digite su tercer sueldo: \n");
			scanf("%f",&su3);
			printf("Digite su cuarto sueldo: \n");
			scanf("%f",&su4);
			printf("Digite su quinto sueldo: \n");
			scanf("%f",&su5);
			printf("Digite su sexto sueldo: \n");
			scanf("%f",&su6);
			/*imprimir clave, ingreso total y promedio mensual*/
			printf("\nClave del empleado: %i\n",cla);
			//ingreso total
			ing= su1+su2+su3+su4+su5+su6;
			printf("Ingreso total semestral: $%.2f\n", ing);
			//promedio mensual
			pm= ing/6;
			printf("Promedio mensual: %.2f\n", pm);	
						
			//Superficie
			printf("\nDigite la base del triangulo: \n");
			scanf("%f",&bas);
			printf("Digite la altura del triangulo: \n");
			scanf("%f",&alt);
			sup=(bas*alt)/2;
			printf ("La superficie del triangulo es: %.2f", sup);		
				
			//longitud y peso en pies y libras	
			printf("\n\nIntroduzca la longitud del objeto en pies: \n");
			scanf("%f",&pie);
			printf("Introduzca el peso del objeto en libras: \n");
			scanf("%f",&lib);
			pie=pie*0.3048;//1 pie = 0.3048 metros.
			lib=lib*0.4536;//1 libra= 0.4536 kg.
			printf("La longitud del objeto en metros es: %.4f \n",pie);
			printf("El peso del objeto en kilogramos es: %.4f \n",lib);
			
			//Radio y area del cilindro
			printf("Digite el radio del cilindro: \n");
			scanf("%f",&rad);
			printf("Digite la altura del cilindro: \n");
			scanf("%f",&alt1);
			vol=(pi*(rad*rad))*alt1; //volumen= (pi*(radio^2))*altura
			sup1=2*(pi*rad*alt1)+2*(pi*(rad*rad)); //area = 2(pi*radio*altura)+2(pi*(radio^2))
			printf("El volumen del cilindro es: %.4f\n",vol);
			printf("El area del cilindro es: %.4f\n", sup1);

}
