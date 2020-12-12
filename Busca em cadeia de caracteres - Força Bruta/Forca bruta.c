#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char texto[26] = "abcdefghijklmnopqrstuvwxyz";
char busca[];

int forcaBruta(char *t, char *b, int ts, int bs)
{
    int i, j;
    for (i = 0; i < (ts - bs + 1); i++)
    {
        j = 0;
        while ((j < bs) && (t[(i + j)] == b[j]))
        {
            j = j + 1;
            if (j == bs)
            {
                return i;
            };
        };
    }
    return -1;
}

int main(void)
{
    printf("Texto: %s\n", texto);

    printf("\nDigite uma cadeia de digitos para ser buscada no texto que digitou: \n");
    scanf(" %s", busca);

    int buscaTamanho = strlen(busca);

    int retorno = forcaBruta(texto, busca, 26, buscaTamanho);

    if (retorno == -1)
    {
        printf("Cadeia nao encontrada no texto");
    }
    else
    {
        printf("A cadeia de digitos '%s' foi encontrada a partir da posicao %d", busca, retorno);
    }
}