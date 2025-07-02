#include <stdio.h>

double DIVIDE(double a, double b) {
    double d = a / b;
    return d;
}

int main() {
    int N;
    double a, b;
    double d;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%lf %lf", &a, &b);
        if (b == 0) {
            printf("divisao impossivel\n");
        }
        else {
            d = DIVIDE(a, b);
            printf("%.1lf\n", d);
        }
    }
    return 0;
}


    
