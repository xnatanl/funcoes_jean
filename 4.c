#include<stdio.h>
#define N 10

int par(int x[]){

    int qtdPar = 0;

    for(int i = 0; i < N; i++){
        if(x[i] % 2 == 0)
        {
            qtdPar += 1;
        }
    }
    return qtdPar;
}

int main(){

    int x[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }

    printf("Quantidade de numeros par eh: %d", par(x));

    return 0;
}
