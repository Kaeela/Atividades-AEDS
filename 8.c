#include <stdio.h.>
#include <math.h>

int main(){
    float nota1, nota2, media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    if(0<=nota1 && 0<=nota2 && nota1<=10 && nota2<=10){
        media=(nota1+nota2)/2;
        printf("A media das notas e:%f", media);
    } else {
    printf("Nota informada nao e valida");
    }
    return 0;
}
