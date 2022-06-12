#include<stdlib.h>
#include<stdio.h>

int main()
{
	char matriz[3][3], opc; //matriz principal, opción
	int i, j; //iteradores
//	int fila, col, ganador;
	
	printf("\t Juego del gato\n");
//	printf("Presione Y para jugar / N para salir: ");
//	scanf("%c",&opc);
	
	for (i=0; i<3; i++)
			{
				for (j=0; j<3; j++){
				matriz[i][j]=' ';
				printf("[%c]", matriz[i][j]);
				}
				printf("\n");
			}
			
	printf("Presione Y para jugar / N para salir: ");
	scanf("%c",&opc);
	int fila, col, ganador;		
	
	if(opc == 'y' || opc == 'Y'){
		do{
			printf("Jugador 1: \n");
			printf("Digite fila: ");
			scanf("%d", &fila);
			printf("Digite columna: ");
			scanf("%d", &col);
			
			matriz[fila][col] = 'x';
			
			for (i=0; i<3; i++)
			{
				for (j=0; j<3; j++){
				matriz[i][j]=' ';
				printf("[%c]", matriz[i][j]);
				}
				printf("\n");
			}
		} while(ganador != 1);
	}
	return 0;
}
