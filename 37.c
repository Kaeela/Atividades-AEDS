#include <stdio.h>
#include <math.h>

int main(){
    int ehh, emm, shh, smm, tempo=0;
    float valor=0;
    printf("Digite a hora de entrada no formato \"hh:mm\":\n");
    scanf("%d:%d", &ehh,&emm);
    printf("Digite o horario de saida no formato\"hh:mm\":\n");
    scanf("%d:%d", &shh, &smm);

    if(ehh<shh || (ehh==shh && emm<smm)){
        tempo=shh-ehh;
    } else {
        tempo=(shh+24)-ehh;
    }

    if(!(emm-smm==0)){
        tempo++;
    }

    if(tempo<=2){
        valor=tempo*1;
    } else if(tempo>=3 && tempo<=4){
        valor=2+(tempo-2)*1.4;
    } else {
        valor=4.8+(tempo-4)*2;
    }
    printf("O valor e:%f", valor);
    return 0;
}
