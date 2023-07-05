#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a, b, limite=0, soma, acertos=0;
    srand(time(NULL));


    while(limite<5){
        a=rand()%100+1;
        b=rand()%100+1;

        printf("Qual e a soma de %d e %d:\n", a, b);
        scanf("%d", &soma);
        a=a+b;
        limite++;
        if(a==soma){
            printf("Acerto\n", acertos++);
        } else {
            printf("Errado, resposta correta:%d\n", a);
        }


    }
    printf("O numero de acertos foi de %d", acertos);




    return;
}
