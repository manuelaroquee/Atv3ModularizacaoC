#include <stdio.h>
#include <stdlib.h>

void limparTela();
void menu();
int lerOpcao();
float lerNumero();
float soma(float n1, float n2);
float subtr(float n1, float n2);
float multipl(float n1, float n2);
float divisao(float n1, float n2);

int main() {
    int opcao;
    float n1, n2, result;

    do {
        limparTela();
        menu();
        opcao = lerOpcao();

        if (opcao == 5) {
            printf("Programa encerrado.\n");
            return 0;
        }

        n1 = lerNumero();
        n2 = lerNumero();

        switch (opcao) {
            case 1:
                result = soma(n1, n2);
                printf("Resultado: %.2f\n", result);
                break;
            case 2:
                result = subtr(n1, n2);
                printf("Resultado: %.2f\n", result);
                break;
            case 3:
                result = multipl(n1, n2);
                printf("Resultado: %.2f\n", result);
                break;
            case 4:
                if (n2 != 0) {
                    result = divisao(n1, n2);
                    printf("Resultado: %.2f\n", result);
                } else {
                    printf("Erro: Divisão por zero!\n");
                }
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        printf("Pressione Enter para continuar...");
        getchar();
        getchar();

    } while (opcao != 5);

    return 0;
}

void limparTela() {
    system("clear || cls");
}

void menu() {
    printf("Calculadora\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
}

int lerOpcao() {
    int opcao;
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

float lerNumero() {
    float n;
    printf("Digite um número: ");
    scanf("%f", &n);
    return n;
}

float soma(float n1, float n2) {
    return n1 + n2;
}

float subtr(float n1, float n2) {
    return n1 - n2;
}

float multipl(float n1, float n2) {
    return n1 * n2;
}

float divisao(float n1, float n2) {
    return n1 / n2;
}
