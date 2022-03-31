/* Ian Kersz - Cartão UFRGS: 00338368
00.03.22
Pega dois vetores e diz quantos numeros são iguais
in: 2 valores
out: 1 valor 
*/

#include <stdio.h>

int avalia_aposta (int *aposta , int *sorteio, int tam)
{
    int acertos = 0; //Contador
    for (int i = 0; i < tam; i++)
        for (int j = 0; j < tam; j++)
            if (aposta[j] == sorteio[i]) //Testa se existe algum numero igual
                acertos++;
    
    return acertos; //Retorna quantos acertos
}

int main(void)
{
    int tam = 6;

    int aposta[6] = {0}, sorteio[6] = {0};
    
    int sortcheck, apostcheck;
    
    do
    {        
        sortcheck = 0;
        printf("Entre com as dezenas sorteadas\n");
        for (int i = 0; i < tam; i++)
        {
            scanf("%d", &sorteio[i]); //Entrada dos numeros no vetor
            if (sorteio[i] >= 1 && sorteio[i] <= 80) //DIz que os numeros só podem se dentro daquele intervalo
                sortcheck++;
        }
    } while (sortcheck < tam);  //Se não ele reseta
    
    do
    {        
        apostcheck = 0;
        printf("\nEntre com o jogon\n");
        for (int i = 0; i < tam; i++)
        {
            scanf("%d", &aposta[i]);//Entrada dos numeros no vetor
            if (aposta[i] >= 1 && aposta[i] <= 80) //DIz que os numeros só podem se dentro daquele intervalo
                apostcheck++;
        }
            
    } while (apostcheck < tam); //Se não ele reseta
    
    int resposta = avalia_aposta( aposta, sorteio, tam ); //Vai para a função
    
    printf("\nNumero de acertos %d:\n", resposta); //Diz quantos numeros acertou
    switch (resposta) //Caso seja algum numero legal ele da praise pra pessoa
    {
    case 4:
        printf("Quadra!\n");
        break;
    case 5:
        printf("Quina!\n");
        break;
    case 6:
        printf("Sena!\n");
        break;
    default:
        break;
    }
    
    return 0;
}