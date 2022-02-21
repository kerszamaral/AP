/* Ian Kersz - Cartão ufrgs: 00338368
10.02.22

in: 2 valores
out: 1 valor 
*/

#include<stdio.h>
#include<math.h>

int main(void){
    float pi;
    int t;
    //Entrada do valor de x
    printf("\nEntre com o numero de termos para calculo de Pi: ");
    scanf("%d", &t);
    //calculo da soma dos termos
    for (int i = 1; i <= t; i++){
            if(i%2==0){
            pi -= (float)4/(1+(2*(i-1)));
            }else{
            pi += (float)4/(1+(2*(i-1)));
            }
        }
    //Resultado/output
    printf("\nValor de Pi com %d termos: %f", t, pi);
    return 0;
}