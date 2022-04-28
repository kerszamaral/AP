/* Ian Kersz - Cartão UFRGS: 00338368
28.04.22
Le um arquivo de text com times, e salva em um array de structs. Depois, pega esse array e extrapola a pontuacao e aproveitamento,
a partir do conteudo. Salve em um arquivo de texto o nome, os pontos e o aproveitamento.
in: 1 arquivo com times e vitorias, empates, derrotas e publico
out: 1 arquivo com times, pontos e aproveitamento
*/

#include <stdio.h>

#define MAX_CLUBES 10

typedef struct CLUBE
{
    char nome[30];
    int vit;
    int emp;
    int der;
    int pontos;
    float publico;
} CLUBE;

int lerClubes(CLUBE clube[], FILE **f)
{
    int count = 0; //contador de clubes

    while (1)
    {
        fscanf(*f, "%s %d %d %d %f", clube[count].nome, &clube[count].vit, &clube[count].emp, &clube[count].der, &clube[count].publico); //leitura dos dados
        
        clube[count].pontos = clube[count].vit * 3 + clube[count].emp; //calculo dos pontos
        count++; //incrementa o contador de clubes

        if (feof(*f)) //verifica se chegou ao fim do arquivo
            break;
    }

    return count; //retorna o numero de clubes
}

void escreverPontuacao(CLUBE clube[], int n, FILE **f)
{
    fprintf(*f, "Numero de clubes: %d\n", n); //escreve o numero de clubes

    for (int i = 0; i < n; i++) 
    {
        int totalPontosPoss = clube[i].vit * 3 + clube[i].emp*3 + clube[i].der*3; //calcula o total de pontos possiveis
        double porcentagem = (double)clube[i].pontos / (double)totalPontosPoss * 100; //calcula a porcentagem de pontos
        fprintf(*f, "%s, %d pontos, aproveitamento de %.2f%c\n", clube[i].nome, clube[i].pontos, porcentagem, 37); //escreve o nome, pontos e aproveitamento
    }
}

int main(void)
{
    FILE *f; //ponteiro para o arquivo
    CLUBE clube[MAX_CLUBES]; //array de structs

    f = fopen("brasileiro.txt", "r"); //abre o arquivo
    if (f == NULL)
    {
        printf("\nErro ao abrir o arquivo!\n"); //verifica se o arquivo foi aberto
        return 1;
    }

    int n = lerClubes(clube, &f); //le os clubes e retorna o numero de clubes

    freopen("pontuacao.txt", "w", f); //abre o arquivo de saida
    if (f == NULL)
    {
        printf("\nErro ao abrir o arquivo!\n"); //verifica se o arquivo foi aberto
        return 1;
    }

    escreverPontuacao(clube, n, &f); //escreve a pontuacao

    fclose(f); //fecha o arquivo
    return 0;
}