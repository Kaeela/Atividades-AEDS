#include <stdio.h>
#include <math.h>

int main(){
    int dia, mes, ano;
    puts("Digite o dia");
    scanf("%d", &dia);
    puts("Digite o mes");
    scanf("%d", &mes);
    puts("Digite o ano");
    scanf("%d", &ano);

    if(ano<=2008){
        if(mes<=12 && mes>=1){
            if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
                if(dia<=31 && dia>=1){
                    puts("Data valida");
                } else {
                    puts("Data invalida");
                }
            } else if(mes==2){
                if((ano%4==0 && !(ano%100==0))||(ano%400==0)){
                    if(dia<=29 && dia>=1){
                        puts("Data valida");
                    } else {
                        puts("Data invalida");
                    }
                } else{
                    if(dia<=28 && dia>=1){
                        puts("Data valida");
                    } else {
                        puts("Data invalida");
                    }
                }
            } else {
                if(dia<=30 && dia>=1){
                    puts("Data valida");
                } else {
                    puts("Data invalida");
                }
            }
        } else {
            puts("Data invalida");
        }
    } else {
        puts("Data invalida");
    }
    return 0;
}



