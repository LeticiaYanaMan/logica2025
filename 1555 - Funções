#include <stdio.h>

int main() 
{
    int L; 
    scanf("%d", &L); 

    for (int i = 0; i < L; i++) 
    {
         int x, y;
         scanf("%d %d", &x, &y);

         if (1 <= x && x <= 100 && 1 <= y && y <= 100) 
         {
            int r = ((3 * x) * (3 * x)) +( y * y);
            int b =( 2 * (x * x)) +( (5 * y) * (5 * y));
            int c =( (-100) * x )+( y * y * y);

            if (r > b && r > c) 
            {
                printf("Rafael ganhou\n");
            } 
            else if (b > c) 
            {
                printf("Beto ganhou\n");
            } 
            else 
            {
                printf("Carlos ganhou\n");
            }
        }
        else 
        { 
            printf("INVALIDO\n");
        }
    }
    return 0;
}
