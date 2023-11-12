
#include <stdio.h>
int imparpar(int n){
    if (n %2 == 0){
      printf("O número é par ");
    }else{
        printf("O número é impar ");
    }
}

int main(){
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
    printf("%d", imparpar(num));
    
    return 0;
    
  }
