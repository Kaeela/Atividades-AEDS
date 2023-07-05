#include <stdio.h>
#include <math.h>

int main(){
    float base1, base2, altura;

    printf("Digite a base maior\n");
    scanf("%f", &base1);

    printf("Digite a base menor\n");
    scanf("%f", &base2);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    altura=((base1+base2)*altura)/2;
    printf("A area do trapezio e:%f", altura);

    return 0;
}
