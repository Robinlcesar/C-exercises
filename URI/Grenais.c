#include <stdio.h>
 
int main() {
 
    int inter=0, gremio=0, empate=0, golInter, golGremio, grenal=0, opcao;
    do{
    scanf("%d", &golInter);
    scanf("%d", &golGremio);
    if(golInter>golGremio){
        inter++;
    }else if(golGremio>golInter){
        gremio++;
    }else{
        empate++;
    }
    grenal++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &opcao);
    }while(opcao != 2);
    printf("%d grenais\n", grenal);
    printf("Inter: %d\n", inter);
    printf("Gremio: %d\n", gremio);
    printf("Empates: %d\n", empate);
    if(inter>gremio){
        printf("Inter venceu mais\n");
    }else if(gremio>inter){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }
    return 0;
}