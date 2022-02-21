/* Ian Kersz - Cartão ufrgs: 00338368
10.02.22
Ler a quantidade de alunos, pegar os generos e vezes no vest, ver a porcentagem de feminino e
quantos fizeram o vest 3+ vezes e depois mostrar esses valores.
in: 1 valor (Numero de alunos) + 2*n valores (2 valores para cada aluno)
out: 2 valores (porcentagem de alunas e porcentagem de 3+ vezes no vest) 
*/
#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    int al, vest;
    char gen;
    float f=0, vest3=0;
    //contagem de alunos
    printf("\nQuantos alunos estão matriculados no curso? ");
    scanf("%d", &al);
    printf("\n");
    //loop para saber quais os generos e vezes nov est
    for (int i = 1; i <= al; i++){
        //genero
        printf("entre com o genero: ");
        scanf(" %c", &gen);
        gen = tolower(gen);
        //vezes no vestibular
        printf("Entre com o nro de vezes do vestibular: ");
        scanf("%d", &vest);

        if (gen == 'f')
            f = f+1;
        if (vest >= 3)
            vest3 = vest3+1;
    }
    //output com as variaveis anteriores conseguimos saber a porcentagem
    printf("\nPorcentagem alunos genero feminino: %g", (f/al)*100);
    printf("\nPorcetagem vestibular 3 vezes ou mais: %g", (vest3/al)*100);
    return 0;
}