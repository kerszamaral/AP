/* Ian Kersz - Cartão UFRGS: 00338368
31.03.22
Entra com 2 vetores e devolve a intersecção entre eles
in: 2 vetores
out: 1 vetor
*/

#include <stdio.h>

void calc_intersec( int a[], int na, int b[], int nb, int c[], int *nc)
{
    int count = 0; // contador
    for (int i = 0; i < na; i++)
        for (int j = 0; j < nb; j++)
            if (a[i] == b[j]) //Testa se são iguais
            {
                c[count] = a[i]; //Salva em c
                count++;
            }
    *nc = count; //Salva count em nc
}

int main(void)
{
    int na = 0, nb = 0, nc = 0;
    int a[40] = {0}, b[40] = {0}, c[40] = {0};
    
    printf("Entre com o nro de elementos do vetor a: ");
    scanf("%d", &na); //Pega quantos numeros o vetor a vai ter

    printf("Entre com os %d elementos de a: ", na);
    for (int i = 0; i < na; i++)
        scanf("%d", &a[i]); //Pega os elementos do vetor a
    
    printf("Entre com o nro de elementos do vetor b: ");
    scanf("%d", &nb);//Pega quantos numeros o vetor a vai ter
    
    printf("Entre com os %d elementos de b: ", nb);
    for (int i = 0; i < nb; i++)
        scanf("%d", &b[i]);//Pega os elementos do vetor b
    
    calc_intersec( a, na, b, nb, c, &nc); //Vai para a função de interseccao

    printf("\nVetor interseccao: ");
    if (nc == 0) //Testa se nc é vazio
        printf("Vazio");
    else //Se não for mostra a interseccao
        for (int i = 0; i < nc; i++)
            printf("%d ", c[i]);
    
    printf("\n");
    
    return 0;
}