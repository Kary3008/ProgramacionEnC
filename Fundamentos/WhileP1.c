/*
	Name: Romper por valor en While	
	Copyright: @KarydNa9
	Author: Bautista Bautista Karina
	Date: 05/04/22 07:28
	Description: Hacer un ciclo While que rompa el ciclo
	por valor.
*/

void main(void)
{
	float calif,tot=0,prom,numAls;
	int i=1;
	
	printf("#num de calificaciones a capturar: ");
	scanf("%f",&numAls);
	while(i<=numAls) 
	{
		printf("Calif: ",i,":");
		scanf("%f",&calif);
		tot=tot+calif;
		i++;
	}
	prom=tot/numAls;
	printf("El promedio es: ",prom);
	
}
