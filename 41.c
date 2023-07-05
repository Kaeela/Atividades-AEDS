#include <stdio.h>
#include <math.h>

int main(){
    float altura, peso, imc;
    puts("Digite o seu peso:");
    scanf("%f", &peso);
    puts("Digite a sua altura:");
    scanf("%f", &altura);
    imc=peso/(pow(altura, 2));

    if(imc<18.5){
        puts("Abaixo do peso");
    } else if(imc>=18.6 && imc<=24.9){
        puts("Saudavel");
    } else if(imc>=25 && imc<=29.9){
        puts("Peso em execeso");
    } else if(imc>=30 && imc<=34.9){
        puts("Obesiade Grau I");
    } else if(imc>=35 && imc<=39.9){
        puts("Obesidade Grau II(Severa)");
    } else if(imc>=40){
        puts("Obesidade Grau III(Morbida)");
    }
    return 0;
}
