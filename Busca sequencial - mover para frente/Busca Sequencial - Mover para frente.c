#include <stdio.h>
#include <stdlib.h>
#define N 5

int buscaSequencialMoverParaFrente(int *vetor, int k)
{
    int i, j, temp1, temp2;

    for (i = 0; i < N; i++)
    {
        if (vetor[i] == k)
        {
            temp1 = vetor[0];
            vetor[0] = vetor[i];
            for (j = 0; j < i; j++)
            {
                temp2 = vetor[j + 1];
                vetor[j + 1] = temp1;
                temp1 = temp2;
            }
            printVetor(vetor);
            return vetor[0];
        }
    }
    return -1;
}

int printVetor(int *vetor){
    int i;
    printf("Vetor atual:\n");
    for (i = 0; i<N; i++){
        printf("[%d] ", vetor[i]);
    }
}

int main(void)
{
    int i, k, vetor[N], retorno, opcao;
    for (i = 0; i < N; i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    do
    {
        printf("\nDeseja fazer uma busca?\n\n");
        printf(" 1 - Sim \n");
        printf(" 2 - Nao \n\n");
        printf("Entre com sua opcao:\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("\nDigite a chave de busca: ");
            scanf("%d", &k);
            retorno = buscaSequencialMoverParaFrente(vetor, k);
            if (retorno != -1)
            {
                printf("\nNumero encontrado: %d", retorno);
            }
            else
            {
                printf("\nRegistro nao encontrado.");
            }
            break;
        case 2:
            break;
        default:
            printf("\n\n Opcao Invalida");
            getch();
            break;
        }
    } while (opcao != 2);
}