#include <stdio.h>
#include <math.h>

int main(void){
    float num1; float num2, result; int num3;
    printf("Digite 1 para soma, 2 para subratracao, 3 para divisao, 4 para multiplicacao\n");
    scanf("%d", &num3);

        switch(num3){

        case 1:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        num1+=num2;
        printf("A soma dos numeros e:%f", num1);
        break;

        case 2:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        num1-=num2;
        printf("A subtração dos numeros e:%f", num1);
        break;

        case 3:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        num1/=num2;
        printf("A divisão dos numeros e:%f", num1);
        break;

        case 4:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        num1*=num2;
        printf("A multiplicacao dos numeros e:%f", num1);
        break;

        default:
        printf("Numero invalido\n");
    }
    return 0;
}
