#include <stdio.h>
#include <stdlib.h>
#define N 5

int OrdernacaoBolha(int *vetor)
{
    int i = N, n = N, j, aux, mudou = 1;

    while (mudou == 1)
    {
        j = 0;
        mudou = 0;
        while (j < n)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                mudou = 1;
            }
            i = j;
            j++;
        }
        n = i;
    };
    return 1;
};

void printVetor(int *vetor)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("[%d] ", vetor[i]);
    }
};

int main()
{
    int vetor[N] = {5, 7, 1, 2, 4};
    printf("Vetor inicial: ");
    printVetor(vetor);
    OrdernacaoBolha(vetor);
    printf("\nVetor ordenado: ");
    printVetor(vetor);
    return 1;
};