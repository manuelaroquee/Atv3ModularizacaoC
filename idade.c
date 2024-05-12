#include <stdio.h>

int idadeDMA(int anos, int meses, int dias) {
    int idadeDias = (anos * 365) + (meses * 30) + dias;
    return idadeDias;
}

int main() {
    int a, m, d;
    
    printf("Informe a idade em anos, meses e dias:\n");
    printf("Anos: ");
    scanf("%d", &a);
    printf("Meses: ");
    scanf("%d", &m);
    printf("Dias: ");
    scanf("%d", &d);

    int idadeDias = idadeDMA(a, m, d);

    printf("A idade corresponde a: %d dias\n", idadeDias);

    return 0;
}
