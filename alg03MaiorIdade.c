  #include <stdio.h>

#include <stdio.h>
int maiorIdade(int i){
    if (i>=18){
      printf("Você é maior de idade");
    }else{
        printf("Você não é maior de idade");
    }
}

int main(){
    int idade;
    printf("Informe sua idade = ");
    scanf("%d", &idade);
    printf("\nSua idade = %d", maiorIdade(idade));
    
    return 0;
  }
