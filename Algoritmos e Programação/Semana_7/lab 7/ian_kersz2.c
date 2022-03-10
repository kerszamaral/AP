/* Ian Kersz - Cartão UFRGS: 00338368
10.03.22
Sorteia um numero aleatorio de 1 a 10, faz o usuario chutar o numero até acertar ou 5 vezes
Diz a cada chute se o valor indicado é maior ou menor do que o valor sorteado
in: até 5 valores
out: 1 valor 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Inicialização das variaveis
    srand(time(NULL));
    int y=1 + rand() % 10, x, i=0;
    //Do while para rodar até 5 vezes ou acertar
    do
    {
        printf("Digite seu chute: ");
        scanf("%d", &x);
        //Verificação se o numero é maior, menor ou acertou
        if (x>y)
            printf("Seu chute é maior do que o valor sorteado!\n");
        
        if (x<y)
            printf("Seu chute é menor do que o valor sorteado!\n");

        if (x == y)
            printf("Parabens, voce acertou em %d tentativa(s)!\n", i + 1);
        //Contador de vezes
        i++;
    } while (y != x && i < 5 );
    //Caso o usuario não acerte até o numero de vezes
    if (i == 5 && x != y)
        printf("\nVoce ultrapassou o numero maximo de tentativas!\n");
    
    return 0;
}