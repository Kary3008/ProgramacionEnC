#include<stdlib.h>
#include<stdio.h>

int main()
{
	char matriz[3][3], opc; //matriz principal, opción
	int i, j; //iteradores
	int fila, col, ganador=0;
	
	printf("\t Juego del gato\n");
	printf("Presione S para jugar / N para salir: ");
	scanf("%c", &opc);
	
	for (i=0; i<3; i++)
			{
				for (j=0; j<3; j++){
				matriz[i][j]=' ';
				printf("[%c]", matriz[i][j]); //imprime matriz
				}
				printf("\n");
			}
			
//	printf("Presione Y para jugar / N para salir: ");
//	scanf("%c",&opc);
//	int fila, col, ganador=0;		
	
	if(opc == 's' || opc == 'S'){
		do{
			printf("Jugador 1: \n");
			printf("Digite fila: (0-2)");
			scanf("%d", &fila);
			printf("Digite columna: (0-2)");
			scanf("%d", &col);
			
			matriz[fila][col] = 'x';
			
			//system("cls");
			for (i=0; i<3; i++)
			{
				for (j=0; j<3; j++){
				printf("[%c]", matriz[i][j]);
				}
				printf("\n");
			}
		} while(ganador != 1);
	}
	return 0;
}
