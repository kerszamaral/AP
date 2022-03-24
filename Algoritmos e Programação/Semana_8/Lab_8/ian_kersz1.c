/* Ian Kersz - Cartão UFRGS: 00338368
24.03.22
Seleciona qual opção o usuario quer, pede um numero e converte para a outra temperatura
in: 2 valores (opção e valor)
out: 1 valor (conversão)
*/

#include <stdio.h>

void FTOC(void)
{   //Fahrenheit para celsius
    int F;
    printf("Entre com a temperatura em fahrenheit: ");
    scanf("%d", &F);
    printf("Temperatura equivalente em graus celsius: %d\n", (( F - 32 ) / 9 ) * 5 );
}

void CTOF(void)
{   //Celcius para fahrenheit
    int C;
    printf("Entre com a temperatura em graus celsius: ");
    scanf("%d", &C);
    printf("Temperatura equivalente em fahrenheit: %d\n", ( C / 5 ) * 9 + 32 );
}

void selection(void)
{   //Mostra as opções de comando
    printf( "Entre com uma das opções:\n1 - Converte centigrados para fahrenheit\n2 - Converte fahrenheit para centigrados\n3 - Sair\nOpção: ");
}

int main(void)
{
    int option;

    selection(); //Inicia o menu de seleção

    scanf("%d",&option); //Escaneia qual opção o usuario quer

    switch (option)
    {
    case 1: //Se for um vai para celsius
        CTOF();
        break;
    case 2: //Se for dois vai para fahrenheit
        FTOC();
        break;
    case 3: //Se for 3 termina o programa
        break;
    default://Se for qualquer outra coisa sinaliza que a entrada está errada
        printf("Entrada não indentificada!\n");
        break;
    }
    
    return 0;
}