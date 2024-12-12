#include<stdio.h>

int maior(int x, int y){
    int numMaior;

    if(x > y){
        numMaior = x;
    }else numMaior = y;

    return numMaior;
}

int main(){

    int x, y;

    do{
        scanf("%d %d", &x, &y);
        if(x == y){
            printf("Digite dois valores diferentes.\n");
        }
    }while(x == y);

    printf("Maior numero eh: %d\n", maior(x, y));

    return 0;
}
