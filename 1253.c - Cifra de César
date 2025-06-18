#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char texto[51];
    int deslocamento;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", texto);
        scanf("%d", &deslocamento);
        int len = strlen(texto);
        for (int j = 0; j < len; j++) {
            texto[j] = (texto[j] - 'A' - deslocamento + 26) % 26 + 'A';
        }
        printf("%s\n", texto);
    }
    return 0;
}
