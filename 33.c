#include <stdio.h>

int main(){
    float preco;
    puts("Digite o preco antigo do produto:");
    scanf("%f", &preco);

        if(preco<=50){
            preco+=preco*0.05;
            printf("O novo preco e:%f\n", preco);
        } else if(preco>50 && preco<100){
            preco+=preco*0.1;
            printf("O novo preco e:%f\n", preco);
        } else if(preco>=100){
            preco+=preco*0.15;
            printf("O novo preco e:%f\n", preco);
        }

        if(preco<=80){
            puts("Preco barato");
        } else if(preco>80 && preco<=120){
            puts("Preco normal");
        } else if(preco>120 && preco<=200){
            puts("Preco caro");
        } else if(preco>200){
            puts("Preco muito caro");
        }
    return 0;
}
