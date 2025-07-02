#include <stdio.h>

int main() {
      int N;
      int L; 
      scanf("%d", &N); 
      for( L = 0; L < N; L++)
      {
          float N1, N2, N3; 
          float M;
          scanf("%f %f %f", &N1, &N2, &N3);
          M = (N1 * 2 + N2 * 3 + N3 * 5)/10;
          printf("%.1f\n", M); 
      }
      return 0;
}
