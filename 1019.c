#include <stdio.h>
 
int main() {
    int s;
    scanf("%d", &s);
    int sr = s % 60;
    s = s / 60; 
    int minr = s % 60;
    int hora = s / 60;
    printf("%d:%d:%d\n", hora, minr, sr);
    return 0;
}
