#include <stdio.h>
#include <string.h>
int main() {
    char risada[51], vogais[51];
    int i, j = 0;
    scanf("%s", risada);
    for (i = 0; risada[i] != '\0'; i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' ||
            risada[i] == 'o' || risada[i] == 'u') {
            vogais[j++] = risada[i];
        }
    }
    vogais[j] = '\0';
    int len = strlen(vogais);
    int engracada = 1;
    for (i = 0; i < len / 2; i++) {
        if (vogais[i] != vogais[len - 1 - i]) {
            engracada = 0;
            break;
        }
    }
    printf("%c\n", engracada ? 'S' : 'N');
    return 0;
}
