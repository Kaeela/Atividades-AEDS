#include <stdio.h>
#include <math.h.>

int main(){
    float num1, result;
    printf("Digite o numero a ser calculado:\n");
    scanf("%f", &num1);

    if(num1>0){
        result=log10(num1);
        printf("O log na base 10 e:%f\n", result);
    } else {
        printf("Numero invalido\n");
    }

}
