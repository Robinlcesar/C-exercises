#include <stdio.h>
#include <stdlib.h>
#define N 7

void criaHeap(int *vetor, int inicio, int fim)
{
    int aux = vetor[inicio];
    int j = inicio * 2 + 1;
    while (j <= fim)
    {
        if (j < fim)
        {
            if (vetor[j] < vetor[j + 1])
            {
                j = j + 1;
            }
        }
        if (aux < vetor[j])
        {
            vetor[inicio] = vetor[j];
            inicio = j;
            j = 2 * inicio + 1;
        }
        else
        {
            j = fim + 1;
        }
    }
    vetor[inicio] = aux;
};

int heapSort(int *vetor, int tam)
{
    int i;
    for (i = ((tam - 1) / 2); i >= 0; i--)
    {
        criaHeap(vetor, i, tam - 1);
    }

    for (i = tam - 1; i > 0; i--)
    {
        int aux = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = aux;
        criaHeap(vetor, 0, i - 1);
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
    int vetor[N] = {23, 4, 67, -8, 90, 54, 21};
    printf("Vetor inicial:\n");
    printVetor(vetor);
    int vetorOrdenado = heapSort(vetor, N);
    printf("\nVetor Ordenado:\n");
    printVetor(vetorOrdenado);
    return 1;
};