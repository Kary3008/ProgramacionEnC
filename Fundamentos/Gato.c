#include<stdlib.h>
#include<stdio.h>

int main()
{
	char matriz[3][3], opc; //matriz principal, opci�n
	int i, j; //iteradores
	int fila, col, ganador=0, turno=1;
	
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
	
	if(opc == 's' || opc == 'S'){
		do{
			if(turno%2 == 1){
				do{
					printf("\n\tJugador 1: \n");
					printf("Digite fila [abajo] (0-2): ");
					scanf("%d", &fila);
					printf("Digite columna [->] (0-2): ");
					scanf("%d", &col);
					
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o')
					{
						printf("\n Coordenadas no validas, intente nuevamente. \n");
					}
				}while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o');
				
				matriz[fila][col] = 'x';
				
				//system("cls");
				for (i=0; i<3; i++)
				{
					for (j=0; j<3; j++){
					printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				
				turno++;
				
			} else if(turno%2 == 0)	{
				do{
					printf("\n\tJugador 2: \n");
					printf("Digite fila [abajo] (0-2): ");
					scanf("%d", &fila);
					printf("Digite columna [->] (0-2): ");
					scanf("%d", &col);
					
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o')
					{
						printf("\n Coordenadas no validas, intente nuevamente. \n");
					}
				}while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o');
				
				matriz[fila][col] = 'o';

				//system("cls");
				for (i=0; i<3; i++)
				{
					for (j=0; j<3; j++){
					printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
			}
		} while(ganador != 1);
	}
	return 0;
}
