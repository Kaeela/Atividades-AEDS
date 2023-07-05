#include <stdio.h>
#include <math.h>

int main(){
    float sexo, peso, altura=0;
    printf("Digite para o sexo masculino 1 e paro o feminino 2:\n");
    scanf("%f", &sexo);
    printf("Digite a sua altura em metros:\n");
    scanf("%f", &altura);

    if(sexo==1 && altura>0){
        peso=72.7*altura-58;
        printf("O peso ideal e:%f\n", peso);
    } else {
        peso=62.1*altura-44.7;
        printf("O peso ideal e:%f\n", peso);
    }
    return 0;
}
