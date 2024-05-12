#include <stdio.h>
int funcao(int n){
    if (n>=0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    printf("Informe um numero = ");
    scanf("%d", &num);
    printf("O retorno é = %d", funcao(num));
    
    return 0;
  }
