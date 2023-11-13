#include <stdio.h>

int numPrimo(int num) {
   
    if (num < 2) {
        return 0; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}


void verificaPrimo() {
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (numPrimo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }
}

int main() {
    verificaPrimo();

    return 0;
}
