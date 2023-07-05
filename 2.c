#include <stdio.h>

int main(){
    float num;
    printf("Digite o numero:\n");
    scanf("%f", &num);

    if(num>=0){
    num=sqrt(num);
    printf("O seu numero e:%f", num);
    } else {
        printf("O numero e invalido");
        }
    return 0;
    }
