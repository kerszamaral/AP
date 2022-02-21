/* Ian Kersz
24.01.22
Pegar preço em R$, converter valor para Dol&
In: 2 valores
out 1 valor
*/
#include <stdio.h>

int main(){
    /* int r, d, f;
    //input
    printf("\nQual o valor do produto em reais? ");
    scanf("%d", &r);
    printf("\nQuantos reais vale um dolar atualmente? ");
    scanf("%d", &d);
    */
    float r, d, f;
    //input
    printf("\nQual o valor do produto em reais? ");
    scanf("%f", &r);
    printf("\nQuantos reais vale um dolar atualmente? ");
    scanf("%f", &d);
    //math
    f=r/d;
    //output
    printf("\nO produto vale %.2f dolares.\n\n", f);

    return 0;
}