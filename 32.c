#include <stdio.h>

int main(){

    float quantidade;
    int codigo;
    puts("Digite o codigo do produto");
    scanf("%d", &codigo);
    puts("Digite a quantidade comprada");
    scanf("%f", &quantidade);
        switch(codigo){

            case 100:
                quantidade*=1.2;
                printf("O valor total e de:%f", quantidade);
                break;

            case 101:
                quantidade*=1.3;
                printf("O valor total e de:%f", quantidade);
                break;

            case 102:
                quantidade*=1.5;
                printf("O valor total e de:%f", quantidade);
                break;

            case 103:
                quantidade*=1.2;
                printf("O valor total e de:%f", quantidade);
                break;

            case 104:
                quantidade*=1.7;
                printf("O valor total e de:%f", quantidade);
                break;

            case 105:
                quantidade*=2.2;
                printf("O valor total e de:%f", quantidade);
                break;

            case 106:
                quantidade*=1;
                printf("O valor total e de:%f", quantidade);
                break;
        }
    return 0;



}
