#include <stdio.h> 

int main() {
      int N;
      scanf("%d", &N);
      int N1, R1, N2, R2, N3, R3, N4, R4, N5, R5, N6, N7;
      if (N < 0)
      {
         printf("VALOR INVALIDO\n");
      }
      else if (N > 1000000)
      {
         printf("VALOR INVALIDO\n");
      }
      else
      { 
          N1 = N / 100;
          R1 = N % 100;
          N2 = R1 / 50;
          R2 = R1 % 50;
          N3 = R2 / 20;
          R3 = R2 % 20;
          N4 = R3 / 10;
          R4 = R3 % 10;
          N5 = R4 / 5;
          R5 = R4 % 5;
          N6 = R5 / 2;
          N7 = R5 % 2;
          printf(“%d\n”, N);
          printf("%d nota(s) de R$ 100,00\n", N1);
          printf("%d nota(s) de R$ 50,00\n", N2);
          printf("%d nota(s) de R$ 20,00\n", N3);
          printf("%d nota(s) de R$ 10,00\n", N4);
          printf("%d nota(s) de R$ 5,00\n", N5);
          printf("%d nota(s) de R$ 2,00\n", N6);
          printf("%d nota(s) de R$ 1,00\n", N7);
      }
      
      return 0; 
}
