/* Ian Kersz - Cartão UFRGS: 00338368
28.03.22

in: 2 valores
out: 1 valor 
*/

#include <stdio.h>

void troca(int *a , int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    printf("\n*** Na função: ");
    printf("a = %d b = %d\n" , *a , *b );
}
int main(void)
{
    int a = 5 , b = 10;

    printf(" a = %d b = %d\n", a , b );
    troca( &a , &b );
    printf("a = %d b = %d\n", a , b );
    
    return 0;
}