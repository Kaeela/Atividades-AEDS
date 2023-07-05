#include <stdio.h>

int main(){

    int ano;
    printf("Digite o ano:\n");
    scanf("%d", &ano);
    ano=ano%4;

    if(ano==0){
    printf("O ano e bissexto");
    } else {
    printf("O ano nao e bissexto");
    }
    return 0;
}
