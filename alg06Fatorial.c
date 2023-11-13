#include <stdio.h>

// Função para calcular o fatorial de um número
int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1; // O fatorial de 0 e 1 é 1
    } else {
        return num * calcularFatorial(num - 1); // Recursivamente calcular o fatorial
    }
}

int main() {
    // Testar a função com alguns valores
    int numero = 5;
    printf("O fatorial de %d é: %d\n", numero, calcularFatorial(numero));

    return 0;
}
