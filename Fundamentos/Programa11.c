#include <stdio.h>
#include <stdlib.h>

int main(){
    char hora[5];
    int h1, h2;
    printf("Dame la hora(ejem. 06:45): ");
    scanf("%s", &hora);
    h1 = hora[0]-48;
    h2 = hora[1]-48;
    if((h1>=2 && h2>4) || hora[3]>53 || hora[4]>57){
        printf("Dame una hora correcta");
        return 0;
    }
    else if(h1==2 && h2==4){
        h1 = 0;
        h2 = 0;
    }
    else if(h1==1 && h2>2){
        h1 = 0;
        h2 = h2 - 2;
    }
    else if(h1==2 && h2<2){
        h1 = 0;
        h2 = h2 + 8;
    }
    else if(h1==2 && h2>=2){
        h1 = 1;
        h2 = h2 - 2;
    }
    hora[0] = h1+48;
    hora[1] = h2+48;
    printf("%s", hora);
    return 0;
}
