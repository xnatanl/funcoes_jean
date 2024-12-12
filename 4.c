#include<stdio.h>

int par(int x, int y, int z){
    int qtdPar = 0;

        if(x % 2 == 0)
        {
            qtdPar += 1;
        }
        if(y % 2 == 0)
        {
            qtdPar += 1;
        }
        if(z % 2 == 0)
        {
            qtdPar += 1;
        }

    return qtdPar;
}

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("Quantidade de numeros par eh: %d", par(a, b, c));

    return 0;
}
