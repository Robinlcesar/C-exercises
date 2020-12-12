#include <stdio.h>
#include <stdlib.h>
#define N 10

int mergeSort(int *vetor, int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        intercalar(vetor, inicio, meio, fim);
    }
    return vetor;
};

int intercalar(int *vetor, int inicio, int meio, int fim)
{
    int i = inicio, j = meio + 1, k = 0, temp[fim];
    while ((i <= meio) || (j <= fim))
    {
        if ((i == meio + 1) || ((vetor[j] < vetor[i]) && ((j != fim + 1))))
        {
            temp[k] = vetor[j];
            j++;
            k++;
        }
        else
        {
            temp[k] = vetor[i];
            i++;
            k++;
        }
    }
    for (i = inicio; i <= fim; i++)
    {
        vetor[i] = temp[i - inicio];
    }
    return vetor;
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
    int vetorOrdenado = mergeSort(vetor, 0, N);    
    printf("\nVetor Ordenado:\n");
    printVetor(vetorOrdenado);
    return 1;
};