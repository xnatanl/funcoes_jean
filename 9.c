#include <stdio.h>
#include <math.h>

int calculaRaizes(double a, double b, double c) {

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) /(2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    else if (delta == 0) {
        double x = -b / (2 * a);
        printf("x = %.2f\n", x);
    } else {
        printf("Nao existem raizes\n");
    }
}

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    calculaRaizes(a, b, c);

    return 0;
}
