#include<stdio.h>

int quadrado(int b, int h){

    if(b == h) {
        return 1;
    }else return 0;
}

int main(){

    int b, h;

    scanf("%d %d", &b, &h);

    printf("%d\n", quadrado(b, h));

    return 0;
}
