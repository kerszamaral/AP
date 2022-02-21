/* Ian Kersz - Cartão ufrgs: 00338368
10.02.22
Ler a quantidade de alunos, pegar os generos e vezes no vest, ver a porcentagem de masculino e
quantos fizeram o vest 3+ vezes e depois mostrar esses valores.
in: 1 valor (Numero de alunos) + 2*n valores (2 valores para cada aluno)
out: 2 valores (porcentagem de alunos e porcentagem de 3+ vezes no vest) 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    int al, vest, id;
    char gen, genres;
    float m=0, f=0, vest3=0, idm=0;
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
        //idade
        printf("Entre com a sua idade: ");
        scanf("%d", &id);
        idm+=id;
        if (gen == 'm')
            m++;
        if(gen=='f')
            f++;
        if (vest >= 3)
            vest3 = vest3+1;
    }
    //switch para genero
    printf("\nVoce deseja a porcentagem de alunos de qual genero? ");
    scanf(" %c", &genres);
    genres=tolower(genres);
    //output com as variaveis anteriores conseguimos saber a porcentagem
    switch (genres){
    case 'f':
        printf("\nPorcentagem alunos genero feminino: %g", (f/al)*100);
        break;
    case 'm':
        printf("\nPorcentagem alunos genero feminino: %g", (m/al)*100); 
        break;
    }
    printf("\nPorcetagem vestibular 3 vezes ou mais: %g", (vest3/al)*100);
    printf("\nIdade media: %g", idm/al);

    return 0;
}