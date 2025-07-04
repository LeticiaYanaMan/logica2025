#include <stdio.h>
int MDC(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return b;
}

int main() {
    int N;
    int F1, F2;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &F1, &F2);
        if (F1 > 0 && F2 > 0) {
            if (F1 = F2) {
                printf("%d\n", F1);
            }
            if (F1 < F2) {
                printf("%d\n", MDC(F2, F1));
            }
            if (F1 > F2) {
                printf("%d\n", MDC(F1, F2));
            }
        }
        if 
    }
    return 0;
}













        
