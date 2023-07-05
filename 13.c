#include <stdio.h>
#include <math.h>

int main(){
    float nota1, nota2, nota3, result;
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);
    result=(nota1+nota2+nota3*2)/4;

    if(result>=60){
        printf("Aluno aprovado. Media:%f", result);

    } else {
        printf("Aluno reprovado");
    }
    return 0;

}
