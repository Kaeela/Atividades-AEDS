#include <stdio.h>

int main(){

int num1, soma=0;
    printf("Digite o numero:\n");
    scanf("%d", &num1);

        if(num1>=1){
                while(num1>0){
                    soma=soma+num1%10;
                    num1/=10;
                }
            } else {
            puts("Numero invalido");
        }
    printf("A soma dos numeros e:%d", soma);
    return 0;
}
