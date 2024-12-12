#include <stdio.h>

int somaPares(int a, int b) {

    int soma = 0;

    if(a < b) {
        for(int i = a+1; i < b; i++){
            if(i%2==0){
                soma += i;
            }
        }
    }

    return soma;
}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", somaPares(a, b));

    return 0;
}
