#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z, result;
    int opcao;//opcao é referente a qual das operações deve ser efetuada
    printf("Selecione qual o tipo de media voce quer calculada:\n(1) Geometrica\n(2)Ponderada\n(3)Harmonica\n(4)aritimetica\n");
    scanf("%d", &opcao);
    printf("Digite o valor de x:\n");
    scanf("%f", &x);
    printf("Digite o valor de y:\n");
    scanf("%f", &y);
    printf("Digite o valor de Z:\n");
    scanf("%f", &z);

    switch(opcao){

        case 1:
        result=cbrt(x*y*z);
        printf("A media geometrica e:%f\n", result);
        break;

        case 2:
        result=(x+(2*y)+(3*z))/6;
        printf("A media ponderada e:%f\n", result);
        break;

        case 3:
        result=1/((1/x)+(1/y)+(1/z));
        printf("A media harmonica e:%f\n", result);
        break;

        case 4:
        result=(x+y+z)/3;
        printf("A media aritimetica e:%f\n", result);
        break;
        }
    return 0;

}
