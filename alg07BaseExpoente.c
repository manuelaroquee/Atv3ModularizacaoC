#include <stdio.h>
int calcularPotencia(int base, int expoente) {
    
    if (expoente == 0) {
        return 1; 
    } else {
        int resultado = 1;

        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }
        return resultado;
    }
}
int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    int resultado = calcularPotencia(base, expoente);
    printf("%d elevado a %d é: %d\n", base, expoente, resultado);

    return 0;
}
