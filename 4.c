#include <stdio.h>
#include <math.h>

int main(){
    float num, square;
    printf("Digite o numero:\n");
    scanf("%f", &num);

    if(num>=0){
               square=sqrt(num);
                num=pow(num, 2);
                printf("O numero ao quadrado e:%f\n", num);
                printf("A raiz quadrada do numero e:%f", square);
    }
    return 0;
}
