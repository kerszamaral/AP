/* Ian Kersz - Cartão ufrgs: 00338368
14.02.22

in:  valores
out:  valor 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(void){
    float n1, n2, n3, media_turma=0, soma_notas=0;
    int nal=0;

    printf("Entre com a 1a nota: ");
    scanf("%f", &n1);

    while (n1<=10){
        nal++;
        printf("\nEntre com a 2a e 3a notas: ");
        scanf("%f %f", &n2, &n3);
        printf("\nMedia do aluno: %g\n", (n1+n2+n3)/3);
        soma_notas += (n1+n2+n3)/3;
        printf("Entre com a 1a nota:");
        scanf("%f", &n1);
    }
    if(nal>0)
        printf("\nMedia da turma: %g\n", soma_notas/nal);
    else 
        printf("Não houve alunos para calculo da media!\n");
    return 0;
}