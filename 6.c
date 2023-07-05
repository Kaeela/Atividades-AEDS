#include <stdio.h>

int main(){
        float num1, num2, difer;
        printf("Digite o valor do primerio numero\n");
        scanf("%f", &num1);
        printf("Digite o valor do segundo numero\n");
        scanf("%f", &num2);

        if(num1>num2){
            difer=num1-num2;
            printf("O maior numero e %f e a diferenca e %f\n", num1, difer);
        } else {
            difer=num2-num1;
            printf("O maior numero e %f e a diferenca e %f\n", num2, difer);
        }
        return 0;
}
