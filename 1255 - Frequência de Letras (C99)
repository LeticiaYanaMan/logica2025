#include <stdio.h>

int main() {
    int N;
    char linha[201];
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++) {
        int freq[26] = {0};
        int max = 0;
        fgets(linha, 201, stdin);
        for (int j = 0; linha[j] != '\0'; j++) {
            char ch = linha[j];
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }
            if (ch >= 'a' && ch <= 'z') {
                int idx = ch - 'a';
                freq[idx]++;
                if (freq[idx] > max) {
                    max = freq[idx];
                }
            }
        }
        for (int j = 0; j < 26; j++) {
            if (freq[j] == max) {
                printf("%c", 'a' + j);
            }
        }
        printf("\n");
    }
    return 0;
}
