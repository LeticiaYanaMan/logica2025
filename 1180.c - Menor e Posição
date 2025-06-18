#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int X[N];
    if (1 < N && N < 1000) {
       for (int i = 0; i < N; i++) {
           scanf("%d", &X[i]);
       }

       int M = X[0];
       int P = 0;

       for (int i = 1; i < N; i++) {
           if (X[i] < M) {
              M = X[i];
              P = i;
           }
           printf("Menor valor: %d\n", M);
           printf("Posicao: %d\n", P);
       }
    }
    else {
         printf("INVALIDO\n");
    }
    return 0;
}

    
