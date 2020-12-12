#include <stdio.h>
#include <stdlib.h>
#define baldeTamanho 100
#define numeroBaldes 10
#define N 10

typedef struct
{
    int topo;
    int balde[baldeTamanho];
} bucket;

void bubbleSort(int vetor[], int tam)
{
    int i, j, aux;
    if (tam)
        for (j = 0; j < tam - 1; j++)
        {            
            for (i = 0; i < tam - 1; i++)
            {
                if (vetor[i + 1] < vetor[i])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[i + 1];
                    vetor[i + 1] = aux;
                }
            }
        }
}

void bucketSort(int vetor[], int tam)
{
    int i, j, k;
    bucket baldes[numeroBaldes];
    for (i = 0; i < numeroBaldes; i++)
    {
        baldes[i].topo = 0;
    }

    for (i = 0; i < tam; i++)
    {
        j = numeroBaldes - 1;
        while (j >= 0)
        {
            if (vetor[i] >= j * 10)
            {
                baldes[j].balde[baldes[j].topo] = vetor[i];
                (baldes[j].topo)++;
            }
            j--;
        }
    }

    for (i = 0; i < numeroBaldes; i++)
    {
        if (baldes[i].topo)
        {
            bubbleSort(baldes[i].balde, baldes[i].topo);
        }
    }

    i = 0;
    for (j = 0; j < numeroBaldes; j++)
    {
        for (k = 0; k < baldes[j].topo; k++)
        {
            vetor[i] = baldes[j].balde[k];
            i++;
        }
    }
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
    int vetor[N] = {5, 7, 1, 2, 4, 10, 3, 6, 20, 15};
    printf("Vetor inicial:\n");
    printVetor(vetor);
    bucketSort(vetor, N);
    printf("\nVetor Ordenado:\n");
    printVetor(vetor);
    return 1;
};