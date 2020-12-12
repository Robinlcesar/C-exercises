#include <stdio.h>
#include <stdlib.h>
#define N 15

int buscaBinariaRecursiva(int *vetor, int k, int inicio, int fim){
    int meio = (inicio+fim)/2;
    printVetor(vetor, inicio, fim);
    if (inicio>fim){
        return -1;
    }
    if (vetor[meio] == k){
        return vetor[meio];
    }
    else if (vetor[meio]<k)
    {
        buscaBinariaRecursiva(vetor, k, meio + 1, fim);
    }else{
        buscaBinariaRecursiva(vetor, k, inicio, meio - 1);
    }    
}

void printVetor(int *vetor, int inicio, int fim){
    int i;
    printf("Vetor atual:\n");
    for (i = inicio; i<fim; i++){
        printf("[%d] ", vetor[i]);
    }
    printf("\n");
}

int main(void){
    int i, vetor[N], retorno, k;

    for (i = 0; i<N; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\nDigite a chave de busca: ");
    scanf("%d", &k);
    retorno = buscaBinariaRecursiva(vetor, k, 0, N);
    if (retorno == -1){
        printf("\nNumero nao encontrado no vetor");
    }else{
        printf("\nNumero encontrado: %d", retorno);
    }
}