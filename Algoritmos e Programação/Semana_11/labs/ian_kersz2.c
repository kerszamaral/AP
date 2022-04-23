/* Ian Kersz - Cartão UFRGS: 00338368
22.03.22
Ler quantos alunos o professor quiser, até digitar sair, salvar esses valores em um arquivo. Ler o arquivo e imprimir os arquivos com media maior e sua idade media.
in: n alunos (até entrar "sair")
out: k + 1 valor (k é o número de alunos com nota maior que o pesquisado)
*/

#include <stdio.h>
#include <string.h>

typedef struct ALUNOS
{
    char nome[60];
    int idade;
    int nota;
} ALUNOS;

void registrarAluno(char arquivo[])
{
    ALUNOS aluno;
    FILE *fAlunos;

    fAlunos = fopen(arquivo, "wb");

    if (fAlunos != NULL)
    {
        do
        {
            printf("\nNome: ");
            scanf("%s", aluno.nome);
            if (strcmp(aluno.nome, "sair"))
            {
                printf("Idade: ");
                scanf("%d", &aluno.idade);
                printf("Nota: ");
                scanf("%d", &aluno.nota);
                fwrite(&aluno, sizeof(ALUNOS), 1, fAlunos);
            }
        } while (strcmp(aluno.nome, "sair"));
    }
    else
        printf("\nErro ao abrir o arquivo!\n");
    fclose(fAlunos);
}

void lerAlunos(char arquivo[], int media)
{
    ALUNOS aluno;
    int count = 0;
    float idadeMedia = 0;
    FILE *fAlunos = fopen(arquivo, "rb");
    if (fAlunos != NULL)
    {
        printf("Lista todos alunos com media maior ou igual a %d:", media);
        while (fread(&aluno, sizeof(ALUNOS), 1, fAlunos))
        {
            if (aluno.nota >= media)
            {
                printf("\nNome: %s", aluno.nome);
                printf(" Nota: %d", aluno.nota);
                idadeMedia += aluno.idade;
                count++;
            }
        }
        printf("\nMedia das idades: %.2f\n", idadeMedia / count);
    }
    else
        printf("\nErro ao abrir o arquivo!\n");
    fclose(fAlunos);
}

int main(void)
{
    char arquivo[60];
    printf("Entre com o nome do arquivo: ");
    scanf("%s", arquivo);
    registrarAluno(arquivo);

    int media;
    printf("\nEntre com a media para buscar: ");
    scanf("%d", &media);
    lerAlunos(arquivo, media);

    return 0;
}