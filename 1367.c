#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMAS 26

typedef struct {
  int resolvido;
  int penalidade;
  int tempo;
} Problema;

int main() {
  int N;

  while (scanf("%d", &N) && N != 0) {
    Problema problemas[MAX_PROBLEMAS] = {0};

    for (int i = 0; i < N; i++) {
      char letra;
      int tempo;
      char status[10];
      scanf(" %c %d %s", &letra, &tempo, status);

      int idx = letra - 'A';

      if (strcmp(status, "correct") == 0 && problemas[idx].resolvido == 0) {
        problemas[idx].resolvido = 1;
        problemas[idx].tempo = tempo + problemas[idx].penalidade;
      } else if (strcmp(status, "incorrect") == 0 && problemas[idx].resolvido == 0) {
        problemas[idx].penalidade += 20;
      }
    }

    int total_problemas = 0;
    int tempo_total = 0;

    for (int i = 0; i < MAX_PROBLEMAS; i++) {
      if (problemas[i].resolvido) {
        total_problemas++;
        tempo_total += problemas[i].tempo;
      }
    }

    printf("%d %d\n", total_problemas, tempo_total);
  }

  return 0;
}
