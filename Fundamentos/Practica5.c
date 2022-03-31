#include <stdio.h>
#include <stdlib.h>

void ganador(int gl, int gv);

int main(){
    int gl, gv;
    printf("Dame los goles del local: ");
    scanf("%d", &gl);
    printf("Dame los goles del visitante: ");
    scanf("%d", &gv);
    ganador(gl, gv);
    return 0;
}

void ganador(int gl, int gv){
    if(gl > gv)
        printf("Local\n");
    if(gv > gl)
        printf("Visitante\n");
    if(gl == gv)
        printf("Empate\n");
}
