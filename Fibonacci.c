#include <stdio.h>
#include <stdlib.h>

int fib(int n, int memo[]) {
    if (n <= 1) {
        return 1;
    } else if (memo[n] != 0) {
        return memo[n];
    } else {
        int resultado = fib(n-1, memo) + fib(n-2, memo);
        memo[n] = resultado;
        return resultado;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int memo[31]; // array para memoização
    for (int i = 0; i <= 30; i++) {
        memo[i] = 0; // inicializa o array com zeros
    }

    printf("%d\n", fib(N, memo));
    return 0;
}