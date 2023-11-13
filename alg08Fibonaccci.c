#include <stdio.h>

int fibonacci(int n) {
    if (n<=0) {
        return -1; 
    }else if (n == 1 || n == 2) {
        return 1; 
    }else {
        int a = 1, b = 1, resultado;

        for (int i = 3; i <= n; i++) {
            resultado = a + b;
            a = b;
            b = resultado;
        }

        return resultado;
    }
}

int main() {
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    
    if (resultado == -1) {
        printf("O valor deve ser maior que 0.\n");
    } else {
        printf("O %dº termo da série de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}
