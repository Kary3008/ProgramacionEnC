/*
	Name: Operador de asignación	
	Copyright: @KarydNa9
	Author: Karina Bautista		
	Date: 10/12/21 18:26
	Description: Una forma más simple de como
	simplificar las operaciones y hacer ver el 
	código más elegante.
*/
#include<stdio.h>

int main(){
	int a, b,c;
	a=b=c=10;
 //ambos son lo mismo
	//a += 10;   //a = a + 10
	//a -= 5;   //a = a - 5
	//a *= 2;	 //a = a * 2
	a /= 2; 	//a = a / 2	


	printf("El valor de a, b, c es: %i, %i, %i \n",a,b,c);
	printf("El valor de a es: %i \n",a);
	
	return 0;
}
