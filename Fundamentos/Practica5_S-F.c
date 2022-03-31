#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int gl,gv;
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
}
