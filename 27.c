#include <stdio.h>

int main(){
    int idade;
    printf("Digite a idade do nadador:\n");
    scanf("%d", &idade);

        if(idade>=5 && idade<=7){
        printf("Infatil A");
        } else if(idade>=8 && idade<=10){
        printf("Infantil B");
        } else if(idade>=11 && idade<=13){
        printf("Juvenil A");
        } else if(idade>=14 && idade<=17){
        printf("juvenil B");
        } else if(idade>=18) {
        printf("Senior");
        }
    return 0;
}
