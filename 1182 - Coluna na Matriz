#include <stdio.h>
 
int main() {
    
    int C;
    char T;
    double M[12][12];
    double Soma = 0.0;
    double Media;
    
    scanf("%d", &C);
    scanf(" %c", &T);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (int j = 0; j < 12; j++) {
        Soma = Soma + M[j][C];
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
