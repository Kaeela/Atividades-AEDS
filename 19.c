#include <stdio.h>
#include <math.h>
int main(){
    int num1;
    printf("Digite o numero:\n");
    scanf("%d", &num1);

        if(num1%3==0 && num1%5==0){
        printf("O numero e divisivel por ambos");
        } else if(num1%3==0 && num1%5!=0) {
        printf("O numero e somente divisivel por 3");
        } else if(num1%3!=0 && num1%5==0){
        printf("O numero e somente divisivel por 5");
        } else {
        printf("O numero nao e divisivel por nenhum deles");
        }
    return 0;
}
