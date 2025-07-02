#include <stdio.h>

int main() {
    int SUDOKU[9][9];
    int somaL[9], somaC[9], somaM[9];

// ler o input 
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &SUDOKU[i][j]);
        }
    }

// conferir linha
    for (int i = 0; i < 9; i++) { // i é linha
        for (int j = 0; j < 9; j++) { // j é coluna
            somaL[i] += SUDOKU[i][j] // vai somar a mesma linha
        }
        if (somaL[i] == 45) {
            
        }
        else {
            return 0;
        }
    }
        
