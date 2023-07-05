#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite o valor da variavel a:\n");
    scanf("%f", &a);
    printf("Digite o valor da variavel b:\n");
    scanf("%f", &b);
    printf("Digite o valor da variavel c:\n");
    scanf("%f", &c);

    delta=pow(b, 2)-(4*a*c);

    if(a==0){
    printf("Nao e equaçao de segundo grau");
    } else if(delta<0) {
    printf("Nao existe raiz");
    } else if(delta==0) {
    raiz1=-b/(2*a);
    printf("Raiz unica de valor:%f", raiz1);
    } else if(delta>=0){
    raiz1=(-b+sqrt(delta))/(2*a);
    raiz2=(-b-sqrt(delta))/(2*a);
    printf("%f e %f", raiz1, raiz2);
    }
    return 0;


}
