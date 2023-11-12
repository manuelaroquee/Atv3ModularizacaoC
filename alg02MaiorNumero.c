  #include <stdio.h>

#include <stdio.h>
int funcaoretorna(float a, float b){
    if (a>b){
        return a;
    }else if (b>a){
        return b;
    }else{
        printf("os dois valores sao iguais");
    }
}

int main(){
    int n1, n2;
    printf("Informe o primeiro valor  ");
    scanf("%d", &n1);
    printf("Informe o segundo valor  ");
    scanf("%d", &n2);
    printf("Maior valor = %d", funcaoretorna(n1, n2));
    
    return 0;
  }
