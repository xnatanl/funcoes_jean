#include<stdio.h>


double PA(int n, int A1, int An){

    return (n *(A1 + An)) / 2.0 ;
}

int main(){

    int n, A1, An;

    scanf("%d %d %d", &A1, &An, &n);

    double resultado = PA(n, A1, An);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
