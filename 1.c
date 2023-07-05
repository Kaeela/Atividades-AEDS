#include <stdio.h>

int main(){
   float num1, num2;
   printf("Digite o primeiro numero:\n");
   scanf("%f", &num1);
   printf("Digite o segundo numero:\n");
   scanf("%f", &num2);

   if(num1>=num2){
        printf("O numero 1 e maior");
   } else {
        printf("O numero 2 e maior");
   }
    return 0;
}
