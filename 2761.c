#include <stdio.h>

int main() {
  int A;
  float B;
  char C;
  char D[50];
  scanf("%d", &A);
  scanf("%f", &B);
  scanf(" %c", &C);
  scanf(" %[^\n]", D); // le com %s - esse [^\n] pega espaço

  printf("%d%.6f%c%s\n", A, B, C, D);
  printf("%d\t%.6f\t%c\t%s\n", A, B, C, D); // \t ocupa 8 espaços
  printf("%10d%10.6f%10c%10s\n", A, B, C, D);

  return 0;
}
