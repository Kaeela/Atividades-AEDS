#include <stdio.h>

int main(){
    float faltas, notas;
    puts("Digie a nota:");
    scanf("%f", &notas);
    puts("Digite a quantidade de faltas:");
    scanf("%f", &faltas);

        if(faltas<=20){
            if(notas>=9){
                puts("Nota A");
            } else if(notas>=7.5 && notas<=8.9){
                puts("Nota B");
            } else if(notas>=5.0 && notas<=7.4){
                puts("Nota C");
            } else if(notas>=4.0 && notas<=4.9){
                puts("Nota D");
            } else if(notas<=3.9){
                puts("Nota E");
            }
        } else {
            if(notas>=9){
                puts("Nota B");
            } else if(notas>=7.5 && notas<=8.9){
                puts("Nota C");
            } else if(notas>=5.0 && notas<=7.4){
                puts("Nota D");
            } else if(notas<=4.9){
                puts("Nota E");
            }
        }
    return 0;

}
