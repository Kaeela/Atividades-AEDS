#include <stdio.h>

int main(){
    float valor;
    puts("Digite o valor das vendas");
    scanf("%f", &valor);

    if(valor>=100000){
        valor=(valor*0.16)+700;
        printf("O valor da comissao e:%f", valor);
    } else if(valor<100000 && valor>=80000) {
        valor=(valor*0.14)+650;
        printf("O valor da comissao e:%f", valor);
    } else if(valor>=60000 && valor<80000){
        valor=(valor*0.14)+600;
        printf("O valor da comissao e:%f", valor);
    } else if(valor>=40000 && valor<60000){
        valor=(valor*0.14)+550;
        printf("O valor da comissao e:%f", valor);
    } else if(valor>=20000 && valor<40000){
        valor=(valor*0.14)+500;
        printf("O valor da comissao e:%f", valor);
    } else {
        valor=(valor*0.14)+400;
        printf("O valor da comissao e:%f", valor);
    }
    return 0;
}
