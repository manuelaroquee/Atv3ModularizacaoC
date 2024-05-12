#include <stdio.h>
void tabuada(int n){
    int i;
    for (i=0; i<=9; i++){
        printf("\n %d x %d = %d", i,n,i*n);
        
    }
}
int main(){
    int num;
    printf("Informe o número = ");
    scanf("%d", &num);
    tabuada(num);
    
    return 0;
}
