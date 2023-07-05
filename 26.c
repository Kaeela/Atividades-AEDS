#include <stdio.h>

int main(){
    float km, litros;
    printf("Digite a quantidade de kilometros:\n");
    scanf("%f", &km);
    printf("Digite a quantidade de litros:\n");
    scanf("%f", &litros);
    km=km/litros;

        if(km<=8){
        printf("Venda o carro!");
        } else if(km>8 && km<12){
        printf("Economico!");
        } else if(km>=12) {
        printf("Supereconomico!");
        }
    return 0;
}
