#include <stdio.h>
 
int main() {
    int L;
    char T;
    double matriz[12][12];
    double Soma = 0.0;
    double Media;
    
    scanf("%d", &L);
    scanf(" %c", &T);
    
    for (int i = 0; i <12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    for (int j = 0; j < 12; j++) {
        Soma = Soma + matriz[L][j];
    }
    
    if (T == 'S') {
        printf("%.1lf\n", Soma);
    }
    else if (T == 'M') {
        Media = Soma / 12.0;
        printf("%.1lf\n", Media);
    }
    return 0;
}
