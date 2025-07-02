#include <stdio.h>

long int quadrado(long int x) {
	return x*x;
}

int main() {
	long int N;
	long int Q;
	scanf("%ld", &N);
	if (5 < N && N < 2000) {
		for (long int i = 1; i <= N; i++) {
			if (i%2 == 0) {
				Q = quadrado(i);
				printf("%ld^2 = %ld\n", i, Q);
			}
		}
	}
	return 0;
}
