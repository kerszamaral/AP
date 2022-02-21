/* Ian Kersz
24.01.22
ler valor de venda e comissão (numero inteiro correspondente ao percentual), calcular comissão %, mostrar comissão.
In: 2 valores
out 1 valor (comissão)
*/
#include <stdio.h>

int main(){
    float val_ven, comf, com;
    //input
    printf("Qual o valor do produto? ");
    scanf("%f", &val_ven);
    printf("\nQual a porcentagem da comissao? ");
    scanf("%f", &com);
    //math
    comf = val_ven*(com/100);
    //output
    printf("Sua comissao deve ser %.2f reais", comf);

    return 0;
}
