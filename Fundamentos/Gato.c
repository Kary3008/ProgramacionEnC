#include<stdlib.h>
#include<stdio.h>

void main(void)
{
	system("color 3");
	char matriz[3][3], opc; //matriz principal, opción
	int i, j; //iteradores
	int fila, col, ganador=0, turno=1; //turno para que empiece con el 1P.
	
	printf("\t---Juego del gato---\n");
	
	for (i=0; i<3; i++)
			{
				for (j=0; j<3; j++){
				matriz[i][j]=' ';
				printf("[%c]", matriz[i][j]); //imprime matriz
				}
				printf("\n");
			}
	/*	printf("\n[0][1][2]");
		printf("\n[1][ ][ ]");
		printf("\n[2][ ][ ]\n");
	*/
	printf("Presione S para jugar / N para salir: ");
	scanf("%c",&opc);		
	
	if(opc == 's' || opc == 'S'){
		printf("\nInstrucciones: \n");
		printf("Escoge una fila (vertical) del 0 al 2, y escoge una columna(horizontal) del 0 al 2");
		printf("Jugador 1: x, Jugador 2: o");
		do{
			if(turno%2 == 1){
				do{	
					printf("\n\tJugador 1\n\n");
					printf("Digite fila [abajo] (0-2): ");
					scanf("%d", &fila);
					printf("Digite columna [->] (0-2): ");
					scanf("%d", &col);
					//se coloca un limite de coordenadas o si tiene algún valor ya dentro.
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2) 
					{
						printf("\nCoordernadas invalidas o ya hay un valor.\n");
						printf("Intente nuevamente. \n");
					}
				}while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
				//sino se repite sale del bucle
				
				matriz[fila][col] = 'x'; //valor del 1P en la matriz
				system("cls");
				for (i=0; i<3; i++)
				{
					for (j=0; j<3; j++){
					printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				
				turno++; //turno
				
			} else if(turno%2 == 0)	{
				do{
					printf("\n\tJugador 2\n\n");
					printf("Digite fila [abajo] (0-2): ");
					scanf("%d", &fila);
					printf("Digite columna [->] (0-2): ");
					scanf("%d", &col);
					//se coloca un limite de coordenadas o si tiene algún valor ya dentro.
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2)
					{
						printf("\nCoordernadas invalidas o ya hay un valor.\n");
						printf("Intente nuevamente. \n");
					}
				} while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
				
				matriz[fila][col] = 'o'; //valor del 2P en la matriz
				system("cls");
				for (i=0; i<3; i++)
				{
					for (j=0; j<3; j++){
					printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
			}
			//Evaluación de las matrices	
			if(turno < 10){ //si el turno es menor evalúa lo sig.
				//1P
				if(matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] //1L H
				|| matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] //2L H
				|| matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] //3L H
				
				|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] //1L V
				|| matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] //2L V
				|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] //3L V
				
				|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] //Diagonal 1
				|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]) //Diagonal 2
				{
					ganador = 1;
					printf("\n¡Felicidades!, Gano el jugador 1. \n");
				}
				//2P
				if(matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] //1L H
				|| matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] //2L H
				|| matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] //3L H
				
				|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] //1L V
				|| matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] //2L V
				|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] //3L V
				
				|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] //Diagonal 1
				|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]) //Diagonal 2
				{
					ganador = 1;
					printf("\n¡Felicidades!, Gano el jugador 2. \n");
				}
			} 
			else{ //si el turno es mayor a 10 entonces se define como empate.
				printf("Es un empate.");
				ganador = 1;
			}	
		} while(ganador != 1);
	}
}
