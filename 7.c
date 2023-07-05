#include <stdio.h>

int main(){
    float num1=0, num2=0;
    printf("Digite o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &num2);

    if(num1>num2){printf("O maior numero e:%f\n", num1);}
    else if(num1<num2){printf("O maior numero e:%f\n", num2);}
    else{printf("Numeros iguais\n");}

    return 0;
}
