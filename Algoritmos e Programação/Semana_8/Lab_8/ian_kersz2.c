/* Ian Kersz - Cartão UFRGS: 00338368
24.03.22
Pega um numero inicial, a primeira sugestão e a tolerancia, utilizando isso, retorna a raiz cubica do numero inicial
in: 2 valores
out: 1 valor 
*/

#include <stdio.h>
#include <math.h>

float raizcubica(int numreal , float firstguess, float tolerancia)
{   //Realiza a operação da raiz cubica
    float result;
    float x = firstguess;

    do //Roda até x cumprir a tolerancia necessaria
    {   //matematica
        x = x - ((pow(x,3) - numreal) / (3 * pow(x,2)));
    } while ( !(fabs(pow(x,3) - numreal) < tolerancia));
    //salva x em result
    result = x;
    //Retorna result para main
    return result;
}

int main(void)
{
    int numreal;
    float tolerancia, firstguess, result;
    //Entrada do usuario
    printf("Entre com o valor de r: ");
    scanf("%d", &numreal);
    printf("Entre com o valor de x0: ");
    scanf("%f", &firstguess);
    printf("Entre a tolerancia: ");
    scanf("%f", &tolerancia);
    if (tolerancia <= 0)
        printf("Valor de t invalido!\n");
    else //Entrada na função de raiz cubica
    {
        result = raizcubica( numreal , firstguess , tolerancia);
        //Saida dos resultados
        printf( "A raiz aproximada de %d é %f\n", numreal , result );
    }
    
    

    return 0;
}