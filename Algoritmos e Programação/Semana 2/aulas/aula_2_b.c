/* Ian Kersz
24.01.22
Testando funções da livraria math.h
In: 1 valor float
out 3 valores (ceil, floor, round)
*/
#include <stdio.h>
#include <math.h>

int main(){
    float val1, res_ceil, res_floor;
    //input
    printf("\nEntre com o valor float: ");
    scanf("%f", &val1);
    //math
    res_ceil = ceil(val1);
    res_floor = floor(val1);
    //output
    printf("\nResultado do ceil %f\nResultado floor %f\nRound %f\n\n", res_ceil, res_floor, round(val1));

    return 0;
}