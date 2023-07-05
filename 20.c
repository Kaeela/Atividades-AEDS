#include <stdio.h>

int main(void){
    float lado1=0, lado2=0, lado3=0, soma12=0, soma13=0, soma23=0;
    printf("Digite o primeiro lado\n");
    scanf("%f", &lado1);
    printf("Digite o segundo lado\n");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado\n");
    scanf("%f", &lado3);
    soma12=lado1+lado2;
    soma13=lado1+lado3;
    soma23=lado2+lado3;

        if(lado3<=soma12 && lado2<=soma13 && lado1<=soma23){
            if(lado1==lado2 && lado2==lado3){
            printf("O triangulo e equilatero");
            } else if(lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
            printf("O triangulo e escaleno");
            } else {
            printf("O triangulo e isosecele");
            }
            } else {
        printf("O triangulo nao e valido, um dos lados e maior do que a soma dois outros dois");
        }
    return 0;
}
