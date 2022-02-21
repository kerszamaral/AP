/* Ian Kersz
27.01.22
ler o comprimento e a largura de um quarto e potencia das lampadas e calculo o numero de lampadas para iluminar o espaço.
in: 3 valores (comprimento e largura do quarto, potencia das lamapdas)
out: 1 valor (quantidade de lampadas para iluminar o espaço)
*/
#include <stdio.h>
#include <math.h>

int main(){
    float larg, comp, area;
    int qlamp, wlamp;
    //input    
    printf("\nQuantos metros de comprimento e largura tem seu quarto? ");
    scanf("%f %f", &comp, &larg);
    printf("\n\nQual a potencia das lampadas a serem utilizadas? ");
    scanf("%d", &wlamp);
    //math
    area=larg*comp;
    //16w por m2
    //não manter nenhum espaço com menos de 16w por metro quadrado
    qlamp=ceil((16*area)/wlamp);
    //output
    printf("\nNumero de lampadas a ser comprado: %d \n\n", qlamp);

    return 0;
}