#include <stdio.h>
#include <math.h>

int main(){
    float num;
    printf("Digite o numero\n");
    scanf("%f", &num);

    if(num>=0){
    num=sqrt(num);
    printf("O resultado e:%f", num);
    } else {
    num=pow(num, 2);
    printf("O resultado e:%f", num);
    }
    return 0;
}
