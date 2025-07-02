#include <stdio.h>

int main () {
    int SUDOKU[9][9];

// função para conferir se todos os valores do sudoku estão entre 0 e 9 - depois precisa fazer outro para ver se todos os valores estão entre 1 e 9 e, se tiverem, acaba
void conferir(int n) {
for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        if (SUDOKU[i][j] > -1 || SUDOKU[i][j] < 10) {
            break;
        }
        else {
            printf("ERROR\n");
            return 0;
        }
            
    
//rodas o sudoku - ler o input
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("&d", &SUDOKU[i][j]);
        }
    }

// a pessoa deve escrever o número [linha][coluna] dela conforme o 0 aparece E o valor que deve entrar no lugar 

conferir(SUDOKU[9][9])
if (


















