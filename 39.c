#include <stdio.h>

int main(){
    float wage, time;
    puts("Digite o valor atual do salario:");
    scanf("%f", &wage);
    puts("Digite o tempo de servico em anos:");
    scanf("%f", &time);

    if(wage<=2000 || time>1.001){
            if(wage<=500){
                wage=wage+wage*0.25;
            } else if(wage<=1000 && wage>500) {
                wage=wage+wage*0.20;
            } else if(wage<=1500 && wage>1000){
                wage=wage+wage*0.15;
            } else if(wage<=2000 && wage>1500) {
                wage=wage+wage*0.10;
            } if(time>1 && time<4){
                wage=wage+100;
            } else if(time>=4 && time<8){
                wage=wage+200;
            } else if(time>=8 && time<10){
                wage=wage+300;
            } else if(time>10){
                wage=wage+500;
            }
            printf("O valor reajustado do salario e:%f", wage);
        } else {
            puts("Sem direito de aumento");
        }
    return 0;
}
