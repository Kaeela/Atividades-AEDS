#include <stdio.h>
#include<string.h>

int main(){

    char estado[3];
    char mg[]="MG";
    char ms[]="MS";
    char sp[]="SP";
    char rj[]="RJ";
    float valor;
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor);
    printf("Digite a sigla do estado(tudo maiusculo):\n");
    scanf("%s", &estado);

        if(strcmp(estado,mg)==0){
        valor=valor+valor*0.07;
        printf("O valor final e:%f", valor);
        } else if(strcmp(estado,ms)==0){
        valor=valor+valor*0.08;
        printf("O valor final e:%f", valor);
        } else if(strcmp(estado,rj)==0){
        valor=valor+valor*0.15;
        printf("O valor final e:%f", valor);
        } else if(strcmp(estado,sp)==0){
        valor=valor+valor*0.12;
        printf("O valor final e:%f", valor);
        }
    return 0;
}
