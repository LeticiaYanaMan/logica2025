#include <stdio.h>
 
int main() {
    int  C1, C2, N1, N2;
    double P1, P2, SOMA;
    scanf("%d %d %lf", &C1, &N1, &P1);
    scanf("%d %d %lf", &C2, &N2, &P2);
    SOMA = (N1 * P1) + (N2 * P2);
    printf("VALOR A PAGAR: R$ %.2lf\n", SOMA);
 
    return 0;
}
