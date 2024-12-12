#include<stdio.h>
#define N 3

int somatoria(int x[]){
    int maior = x[0];
    int menor = x[0];

    for(int i = 1; i < N; i++){
        if(x[i] > maior){
            maior = x[i];
        }
        if(x[i] < menor){
            menor = x[i];
       }
    }

    return maior + menor;
}

int main (){
    int x[N];

    for(int i = 0; i < N; i++){
       scanf("%d", &x[i]);
    }

    printf("%d", somatoria(x));

    return 0;
}
