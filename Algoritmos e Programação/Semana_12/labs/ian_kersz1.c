/* Ian Kersz - Cartão UFRGS: 00338368
00.03.22

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

int main(void)
{
    char nome[12];
    int a, b, c;
    double d;

    FILE *f;

    f = fopen("ian_kersz.txt", "w");

    if (f == NULL)
    {
        printf("\nErro ao abrir o arquivo!\n");
        return 1;
    }

    while (1)
    {
        printf("\nDigite um nome: ");
        scanf("%s", nome);
        if (strcmp(nome, "sair"))
        {
            printf("Digite um numero: ");
            scanf("%d", &a);
            printf("Digite outro numero: ");
            scanf("%d", &b);
            printf("Digite mais um numero: ");
            scanf("%d", &c);
            printf("Digite um numero decimal: ");
            scanf("%lf", &d);
            fprintf(f, "%s\t%d\t%d\t%d\t%.2lf\n", nome, a, b, c, d);
        }
        else
            break;
    }

    freopen("brasileiro.txt", "r", f);

    if (f == NULL)
    {
        printf("\nErro ao abrir o arquivo!\n");
        return 1;
    }

    while (1)
    {
        fscanf(f, "%s %d %d %d %lf", nome, &a, &b, &c, &d);
        if (feof(f))
            break;
        printf("%s\t%d\t%d\t%d\t%.2lf\n", nome, a, b, c, d);
    }

    fclose(f);

    return 0;
}
/* for easy testing
Cruzeiro 23 6 6 31020.53
Gremio 17 9 9 28123.12
Goias 16 11 8 15321.87
Atletico-PR 16 10 9 17231.72
Botafogo 16 9 10 21421.12
Vitoria 15 9 11 26312.34
*/