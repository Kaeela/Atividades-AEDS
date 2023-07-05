#include <stdio.h>
#include <math.h>

int main(){
    int escolha; float num1, num2, result;
    printf("1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros\n3- Produto entre 2 numeros\n4- Divisao entre 2 numeros\n");
    scanf("%d", &escolha);

        switch(escolha){

        case 1:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        result=num1+num2;
        printf("O resultado e:%f", result);
        break;

        case 2:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        result=num1-num2;
        result= fabs(result);
        printf("O resultado e:%f", result);
        break;

        case 3:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        result=num1*num2;
        printf("O resultado e:%f", result);
        break;

        case 4:
        printf("Digite o primeiro numero\n");
        scanf("%f", &num1);
        printf("Digite o segundo numero\n");
        scanf("%f", &num2);
        if(num2!=0){
        result=num1/num2;
        printf("O resultado e:%f", result);}
        else {printf("Opcao invalida");}
        break;

        default:
        printf("Opcao invalida");
        break;
        }
    return 0;

}
