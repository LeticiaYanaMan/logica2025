#include <stdio.h>

int main() {
    int N;
    int F, I;
    scanf("%d", &N);
    if (N < 0 || N > 13)
    {
        printf("VALOR INVALIDO\n"); 
    }
    else
   {
        F = 1;
        I = 1;
        while ( I <= N)
        {
             F = F * I; 
             I = I + 1;
        } 
        printf("%d\n", F); 
    }
return 0;
}
