/* Ian Kersz - Cartão UFRGS: 00338368
14.04.22
Acredite nos seus sonhos e seja feliz.
in: até 3 carros
out: opção desejado 
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

typedef struct carro
{
    int cod; //codigo do carro
    char modelo[45]; //modelo do carro
    char marca[45]; //marca do carro
    float preco; //preço do carro
    int ano; //ano do carro
} CARRO;

int menu (void)
{
    int opcao;

    printf("\n1 - Cadastro de carro\n2 - Consulta de carro\n3 - Preco médio dos carros\n4 - Imprime estoque revenda\n5 - Fim\nEntre com sua opção: ");
    scanf("%d", &opcao); //leitura da opção

    return opcao;
}

void cadastraCarro( CARRO *c )
{
    printf("Código: "); 
    scanf("%d", &c->cod); //leitura do código
    printf("Marca: ");
    scanf("%s", c->marca); //leitura da marca
    printf("Modelo: ");
    scanf("%s", c->modelo); //leitura do modelo
    printf("Preço: ");
    scanf("%f", &c->preco); //leitura do preço
    printf("Ano: ");
    scanf("%d", &c->ano); //leitura do ano
}

void print_carro( CARRO c )
{
    if ( c.cod != -1)
        printf("Código: %d\nMarca: %s\nModelo: %s\nPreço: %.2f\nAno: %d\n", c.cod, c.modelo, c.marca, c.preco, c.ano);
    else
        printf("Carro não existe!\n");
}

float calcMediaPreco( CARRO c[], int ncarros )
{
    float media = 0;

    for(int i = 0; i < ncarros; i++) //soma dos preços dos carros
        media += c[i].preco;

    media = media / ncarros; //calculo da média

    return media;
}

CARRO procuraCarro( CARRO carros[], int ncarros, int cod )
{
    for(int i = 0; i < ncarros; i++)
        if(carros[i].cod == cod) //se o código for igual ao código do carro
            return carros[i]; //retorna o carro

    CARRO c = {0}; //cria um carro vazio
    c.cod = -1; //código -1 indica que o carro não existe
    return c; //retorna o carro vazio
}

int main(void)
{
    int ncarros = 0, opcao = 0, consult = 0;
    CARRO carros[3] = {0};
    
    do
    {
        opcao = menu(); //chama o menu
        switch (opcao)
        {
        case 1: //cadastro de carro
            if ( opcao < 3)
            {
                cadastraCarro(&carros[ncarros]);
                ncarros++;
            }
            else
                printf("Número máximo de carros cadastrados atingido.\n");
            break;
            
        case 2: //consulta de carro
            printf("Informe o código do carro: ");
            scanf( "%d", &consult );
            print_carro( procuraCarro(carros, ncarros, consult) );
            break;

        case 3: //preço médio dos carros
            printf("Preço médio dos carros: %.2f\n", calcMediaPreco(carros, ncarros));
            break;

        case 4: //imprime estoque revenda
            for(int i = 0; i < ncarros; i++)
            {
                print_carro(carros[i]);
            }
            break;

        case 5: //fim
            break;

        default: //opção inválida
            printf("Opção inválida.\n");
            break;
        }

    } while (opcao != 5);

    return 0;
}