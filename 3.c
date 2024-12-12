#include<stdio.h>

int imprimir(int valor){

    if(valor >= 1){
        for(int i = 1; i <= valor; i++){
            printf("%d\n", i);
        }
    }else{
       for(int i = 1; i >= valor; i--){
            printf("%d\n", i);
        }
    }
}

int main(){

    int n;

    scanf("%d", &n);

    imprimir(n);

    return 0;
}
