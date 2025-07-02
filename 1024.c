#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char linha[1001];
    scanf("%d\n", &N);

    for (int i = 0; i < N; i++) {
        fgets(linha, 1001, stdin);
        size_t len = strlen(linha);
        if (linha[len - 1] == '\n') {
            linha[len - 1] = '\0';
            len--;
        }
        for (int j = 0; j < len; j++) {
            if ((linha[j] >= 'A' && linha[j] <= 'Z') || (linha[j] >= 'a' && linha[j] <= 'z')) {
                linha[j] += 3;
            }
        }
        for (int j = 0; j < len / 2; j++) {
            char temp = linha[j];
            linha[j] = linha[len - 1 - j];
            linha[len - 1 - j] = temp;
        }
        for (int j = len / 2; j < len; j++) {
            linha[j] -= 1;
        }
        printf("%s\n", linha);
    }
    return 0;
}
