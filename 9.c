#include <stdio.h>
#include <math.h>

int main(){
    float salario=0, emprestimo=0;
    printf("Digite o seu salario:\n");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo:\n");
    scanf("%f", &emprestimo);
    salario=salario*0.2;

    if(emprestimo>salario){
        printf("Emprestimo nao concedido");

    } else {
        printf("Emprestimo concedido");
    }
    return 0;
}
