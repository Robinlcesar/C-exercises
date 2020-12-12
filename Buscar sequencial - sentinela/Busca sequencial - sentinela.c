#include <stdio.h>
#include <stdlib.h>
#define N 5

int buscaSequencialSentinela(int *vetor, int k)
{
    int i;
    vetor[N] = k;
    for (i = 0; vetor[i] != k; i++)
    {
    }
    if (i < N)
    {
        return vetor[i];
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    int i, k, vetor[N], retorno;
    for (i = 0; i < N; i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\nDigite a chave de busca: ");
    scanf("%d", &k);
    retorno = buscaSequencialSentinela(vetor, k);
    if (retorno != -1)
    {
        printf("\nNumero encontrado: %d", retorno);
    }
    else
    {
        printf("\nRegistro nao encontrado.");
    }
}