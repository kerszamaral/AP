/* Ian Kersz - Cartão ufrgs: 00338368
21.02.22

in: 2 valores
out: 1 valor 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

#define NRALUNOS 5

int main(void){
    //declaração de variaveis
    int i, al_acima_media=0;
    float media=0, soma_notas=0;
    float notas[NRALUNOS]={}; // Declaração de arranjo NOTAS com 5 posições

    //leitura das notas
    for (i=0;i<NRALUNOS;i++){
        //printf("%.0f ", notas[i]);
        printf("\nEntre com a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma_notas+=notas[i];
    }
    //media
    media=soma_notas/NRALUNOS;
    //Teste contra a media
    for (i = 0; i < NRALUNOS; i++)
        if(notas[i]>media)
            al_acima_media++;
    //Output
    printf("Am media da turma vale %.2f e %d alunos acima da media\n\n", media, al_acima_media);

    return 0;
}