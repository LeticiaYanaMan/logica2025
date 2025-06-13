#include <stdio.h>
 
int main() {
    char O; 
    double M[12][12];
    double soma = 0.0;
    double media;
    int count = 0;
    
    scanf(" %c", &O); 
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]); 
        }
    }
    
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j <12; j++) {
            soma = soma + M[i][j];
            count++;
        }
    }
    
    if (O == 'S') {
        printf("%.1lf\n", soma);
    }
    else if (O == 'M') {
        media = soma / count;
        printf("%.1lf\n", media);
    }
 
    return 0;
}
