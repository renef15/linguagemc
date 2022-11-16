#include <stdio.h>

int main()
{
    int tamanho_vetor;
    printf("Digite o quantas letras a palavra tem: ");
    scanf("%d", &tamanho_vetor);
    char palavra[tamanho_vetor];

    printf("Digite a palavra: ");
    scanf("%s", &palavra);

    for (int i = 0, j = tamanho_vetor - 1; i < tamanho_vetor - 1, j >= 0; i++, j--)
    {
        if (palavra[i] != palavra[j])
        {
            printf("Nao eh palindromo");
            break;
        }
        else
        {
            printf("Eh palindromo\n");
            break;
        }
    }
}
