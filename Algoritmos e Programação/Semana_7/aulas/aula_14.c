/* Ian Kersz - Cartão UFRGS: 00338368
09.03.22

in: 2 valores
out: 1 valor 
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define NALUNOS 10
#define NNotas 5

int main(void)
{
    /*
    //Inicialização das variaveis
    float notas[NALUNOS][NNotas]={0}, soma=0, media=0;
    int k=0;
    //Preenchimento do array com as notas pelo usuario
    for (int i = 0; i < NALUNOS; i++)
    {
        printf("Entre as %d notas do aluno %d\n", NNotas, i+1);
        for (int j = 0; j < NNotas; j++)
            scanf("%f", &notas[i][j]);
    }
    //Loop para saber a media das notas da primeira prova
    for (int i = 0; i < NALUNOS; i++)
    {
        soma += notas[i][0];
    }
    media = soma / NALUNOS;
    //Loop para saber quantos alunos ficaram acima da media
    for (int i = 0; i < NALUNOS; i++)
    {
        if (notas[i][0] > media)
            k++;
    }
    //Output
    printf("Media da primeira nota: %2.2f\n", media);
    printf("Numero de alunos com 1a nota maior do que a media: %d", k);
    */

    /*O maior elemento de cada coluna da matriz
    int maior;
    for (int i = 0; i < tamanhocoluna; i++)
    {
        maior = matriz[0][i];
        for (int j = 0; j < tamanholinha; j++)
        {
            if (maior < matriz[j][i])
                maior = matriz[j][i];
        }
        printf("Maior da coluna %d = %d", i, maior);
    }*/
    
    /*A media dos elementos de cada linha
    int somalinha;
    float media;
    for (int i = 0; i < tamanholinha; i++)
    {
        somalinha = 0;
        for (int j = 0; j < tamanhocoluna; j++)
            somalinha += matriz[i][j];
        
        media = (float) somalinha / tamanhocoluna;

        printf("Media linha %d = %f", i, media);
    }*/

    return 0;
}