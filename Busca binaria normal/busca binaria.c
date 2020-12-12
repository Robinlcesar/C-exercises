#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//busca binÃ¡ria tradicional
int buscaBinaria(int vet[], int chave)
{
    int esquerda = 0;
    int direita = TAM - 1;
    int meio;
    int count = 0;
    while (esquerda <= direita)
    {
        count++;
        meio = (esquerda + direita) / 2;
        if (vet[meio] == chave)
            {
                count++;
                printf("%d\n", count);
            return meio;            
            }
        else if (vet[meio] < chave)
        {
            count++;
            count++;
            esquerda = meio + 1;
        }
        else
        {       
            count++;  
            count++;
            direita = meio - 1;
        }
    }
    
    return -1;
}

//busca binÃ¡ria recursiva
int buscaBinariaRec(int vet[], int chave, int esquerda, int direita)
{
    if (esquerda > direita)
        return -1;
    else
    {
        int meio = (esquerda + direita) / 2;

        if (vet[meio] == chave)
            return meio;
        if (vet[meio] < chave)
            return buscaBinariaRec(vet, chave, meio + 1, direita);
        else
            return buscaBinariaRec(vet, chave, esquerda, meio - 1);
    }
}

//busca binÃ¡ria sem comparaÃ§Ã£o de igualdade
int buscaBinariaV2(int vet[], int chave)
{
    int esquerda = 0;
    int direita = TAM - 1;
    int meio;
    while (esquerda < direita)
    {
        meio = (esquerda + direita) / 2;
        if (chave > vet[meio])
            esquerda = meio + 1;
        else
            direita = meio;
    }
    return (vet[direita] == chave) ? direita : -1;
}

int main(int argc, char **argv)
{
    int vet[TAM], chave, result;
    vet[0] = 2;
    vet[1] = 5;
    vet[2] = 7;
    vet[3] = 11;
    vet[4] = 13;
    vet[5] = 17;
    vet[6] = 25;
    vet[7] = 32;
    vet[8] = 35;
    vet[9] = 39;

    printf("Informe a chave: \n");
    scanf("%d", &chave);

    result = buscaBinaria(vet, chave);
    printf("Pesquisa binaria: %d \n", result);

    return (EXIT_SUCCESS);
}