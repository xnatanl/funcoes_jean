#include<stdio.h>

int calcula(double c, int m, double t){

    double j = c * m * (t/100);

    printf("Juros do emprestimo eh: %.2lf", j);

}
int main(){

    double valor,meses, porcentagem;

    scanf("%lf %lf %lf", &valor, &meses, &porcentagem);

    calcula(valor, meses, porcentagem);

    return 0;
}
