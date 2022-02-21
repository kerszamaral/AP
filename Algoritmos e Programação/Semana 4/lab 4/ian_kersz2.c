/* Ian Kersz - Cartão ufrgs: 00338368
10.02.22
Ler valor de x e numero de termos, verificar se x é valido, fazer a soma dos termos e 
mostrar o resultado do arctan 
in: 2 valores (numero x do arctan e numero de termos)
out: 1 valor (valor do arctan)
*/
#include<stdio.h>
#include<math.h>

int main(void){
    float x, arctan;
    int t;
    //Entrada do valor de x
    printf("\nEntre com o valor de x para calcular arctan(x): ");
    scanf("%f", &x);
    //se x for valido prosegue
    if(x>-1 && x<1){
        //entrada do numero de termos
        printf("\nEntre com o nro de termos: ");
        scanf("%d", &t);
        //calculo da soma dos termos
        for (int i = 1; i <= t; i++){
            if(i%2==0){
                arctan -= pow(x, 1+(2*(i-1)))/(1+(2*(i-1)));
            }else{
                arctan += pow(x, 1+(2*(i-1)))/(1+(2*(i-1)));
            }
        }
        //Resultado/output
        printf("\nResultado para arctan(%g) = %g", x, arctan);
    }else
        printf("\nValor invalido!");
    return 0;
}