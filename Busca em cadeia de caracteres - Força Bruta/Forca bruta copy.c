#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char texto[5];
char busca[5];

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
    printf("Digite o texto:\n");
    scanf(" %s", &texto);

    fflush(stdin);

    printf("\nDigite uma cadeia de digitos para ser buscada no texto que digitou: \n");
    scanf(" %s", &busca);

    printf("\n[%s]", texto);
    printf("\n[%s]", busca);

    int textoTamanho = strlen(texto);

    int buscaTamanho = strlen(busca);

    int retorno = forcaBruta(texto, busca, textoTamanho, buscaTamanho);

    if (retorno == -1)
    {
        printf("\nCadeia nao encontrada no texto");
    }
    else
    {
        printf("\nA cadeia de digitos '%s' foi encontrada a partir da posicao %d", busca, retorno);
    }
}