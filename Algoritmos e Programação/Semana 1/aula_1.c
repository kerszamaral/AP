/** Ian Kersz
19.01.22
Sum 2 numbers
int: 2 val
out: sum
*/

#include <stdio.h>

int main(){
    int x, y, z;

    printf("Declare o primeiro numero:");
    scanf("%d", &x);
    printf("Declare o segundo numero:");
    scanf("%d", &y);

    z = x + y;
    
    printf("A soma de %d com %d vale: %d", x, y, z);

    return 0;
}