#include <stdio.h>
#include <math.h>

int main(void){
    float e = exp(1), x, realExp, sum;
    double index = 1.0, factorial = 1.0;

    printf("\nEntre com o x: ");
    scanf("%f", &x);

    realExp = exp(x);

    while (sum + 0.0001 < realExp){
        sum += pow(x, index - 1) / factorial;
        if (index > 1){
            factorial *= index;
        }
        index++;
    }
    printf("\nsum %f", sum);
    printf("\nfactorial %f", factorial);
    printf("\nindex %f", index);
    printf("\nValor de x: %f", x);
    printf("\nValor da serie: %f", sum);
    printf("\nValor da funcao exponencial: %f", realExp);

    return 0;
}