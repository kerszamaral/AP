/** Ian Kersz
20.01.22
Fazer a soma e o produto de 3 valores
in: 3 val
out: soma e produto (2 val)
*/
#include <stdio.h>

int main(){
    int v1, v2, s, v3, p;
    //input
    printf("\nEscolha o primeiro numero: ");
    scanf("%d", &v1);
    printf("\nEscolha o segundo numero: ");
    scanf("%d", &v2);
    printf("\nEscolha o segundo numero: ");
    scanf("%d", &v3);
    //math
    s = v1 + v2 + v3;
    p = v1 * v2 * v3;
    //output
    printf("\nA soma dos numeros e igual a %d\n", s);
    printf("\nO produto dos numeros e igual a %d", p);

    return 0;
}