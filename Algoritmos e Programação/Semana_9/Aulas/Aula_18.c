/* Ian Kersz - Cartão UFRGS: 00338368
00.03.22

in: 2 valores
out: 1 valor 
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void)
{
    int vet[3] = {10,11,12};
    int *pi;

    pi = vet;
    printf("%p\n", pi);
    pi++;
    printf("%p\n", pi);
    pi++;
    printf("%p\n", pi);

    printf("Valor %d\n", *pi);
    pi -= 2;
    printf("Valor %d\n", *pi);
    
    return 0;
}