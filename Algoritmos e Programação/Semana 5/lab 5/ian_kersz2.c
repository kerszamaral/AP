/* Ian Kersz - Cartão ufrgs: 00338368
17.02.22
Ler valor do angulo e o erro desejado, calcular o seno com a formula e mostrar ele na tela
in: 2 valores (valor dos graus e valor do erro)
out: 1 valor (valor do seno daquele angulo)
*/

#include<stdio.h>
#include<math.h>

int main(void){
    //Inicialização das variaveis
    int sinal=1, exp=1, i;
    float erro, valab=1, seno=0, rad;
    double factorial=1;
    //Entrada dos valores
    printf("\nEntre com o valor do angulo em graus: ");
    scanf("%f", &rad);
    printf("\nEntre com o valor do erro: ");
    scanf("%f", &erro);
    //Transformação de graus para radianos
    rad = (rad*M_PI)/180;
    //Entrada do while até o 
    do{
        //Loop para fazer o fatorial
        for (i=exp, factorial=1; i > 1; i--)
            factorial *= i;
        //Matematica
        valab = sinal*((pow(rad,exp))/factorial);
        if (fabs(valab)>=erro){
            seno +=valab;
            sinal *= -1;
            exp += 2;
        }
    } while (fabs(valab)>=erro);
    //Saida
    printf("\nValor aproximado do seno: %g", seno);

    return 0;
}