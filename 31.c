#include <stdio.h>

int main(){
    float altura, peso;
    puts("Digite o seu peso");
    scanf("%f", &peso);
    puts("Digite a sua altura");
    scanf("%f", &altura);

        if(peso<=60){
            if(altura<1.2){
            puts("Tipo A");
            } else if(altura>=1.2 && altura<=1,7){
            puts("Tipo B");
            } else if(altura>1.7){
            puts("Tipo C");
            }
        } else if(peso>60 && peso<=90){
            if(altura<1.2){
            puts("Tipo D");
            } else if(altura>=1.2 && altura<=1,7){
            puts("Tipo E");
            } else if(altura>1.7){
            puts("Tipo F");
            }
        } else if(peso>90){
            if(altura<1.2){
            puts("Tipo G");
            } else if(altura>=1.2 && altura<=1,7){
            puts("Tipo H");
            } else if(altura>1.7){
            puts("Tipo I");
            }
        }
    return 0;

}
