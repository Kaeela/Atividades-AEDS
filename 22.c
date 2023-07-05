#include <stdio.h>

int main(){
    int idade, tempo;/*tempo é anos de contribuição*/
    printf("Digite a sua idade\n");
    scanf("%d", &idade);
    printf("Digite o seu tempo de contribuicao\n");
    scanf("%d", &tempo);

        if(idade>=65){
        printf("Elegivel para aposentadoria\n");
        } else if(tempo>=30){
        printf("Elegivel para aposentadoria\n");
        } else if(idade>=60 && tempo>=25){
        printf("Elegivel para aposentadoria\n");
        } else {
        printf("Nao elegivel para aposentadoria\n");
        }
    return 0;
}
