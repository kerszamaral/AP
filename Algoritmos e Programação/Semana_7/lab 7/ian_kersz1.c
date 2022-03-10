/* Ian Kersz - Cartão UFRGS: 00338368
10.03.22
Cria uma aray 4x4 e preenche ela com numeros aleatorios entre 2 e 40,
cria dois arrays para colocar o numero maior de cada coluna e o menor de cada linha
Mostra o resultados dos 3 arrays
out: 3 arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Inicialização dos arrays
    int matriz[4][4]={0}, linha[4]={0}, coluna[4]={};
    //Inicialização do srando com time
    srand(time(NULL));
    //Loop para preencher o array 4x4
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            matriz[j][i]= 2 + rand() % 39;
    
    //Loop para mostrar o array 4x4
    printf("Matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%3d", matriz[j][i]);
        printf("\n");
    }
    //Loop para indentificar os menores de cada linha
    for (int i = 0; i < 4; i++)
    {
        int x=40;
        for (int j = 0; j < 4; j++)
        {
            int y = matriz[j][i];
            if (y <= x)
            {
                x = y;
                linha[i]=x;
            }
        }
    }
    //Loop para indentificar os maiores de cada coluna
    for (int i = 0; i < 4; i++)
    {
        int x=0;
        for (int j = 0; j < 4; j++)
        {
            int y = matriz[i][j];
            if (y >= x)
            {
                x = y;
                coluna[i]=x;
            }
        }
    }
    //loops para mostrar os arrays resultantes
    printf("\n\nArranjo maiores elementos colunas:\n");
    for (int i = 0; i < 4; i++)
        printf("%3d", coluna[i]);
    printf("\nArranjo menores elementos linhas:\n");
    for (int i = 0; i < 4; i++)
        printf("%3d", linha[i]);
    printf("\n");

    return 0;
}