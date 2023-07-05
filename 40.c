#include <stdio.h>

int main(){
    float custo;
    puts("Digite o preco de fabrica:");
    scanf("%f", &custo);

    if(custo<=12000){
        custo=custo+custo*0.05;
    } else if(custo>12000  && custo<=25000){
        custo=custo+custo*0.25;
    } else {
        custo=custo+custo*0.35;
    }
    printf("O preco final do carro e:%f", custo);
    return 0;
}
