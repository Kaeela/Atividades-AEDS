#include <stdio.h>
#include <math.h>

int main(){
    float lab, avalia, exam, result;
    printf("Digite a nota do Trabalho de Laboratorio:\n");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliacao Semestral:\n");
    scanf("%f", &avalia);
    printf("Digite a nota do Exame Final:\n");
    scanf("%f", &exam);
    result=(lab*2+avalia*3+exam*5)/10;

    if(2.9>=result){
        printf("Aluno reprovado");
    } else if(4.9>=result && 3<=result) {
        printf("Aluno em recuperaçao");
    } else {
        printf("Aluno Aprovado");
    }
    return 0;
}
