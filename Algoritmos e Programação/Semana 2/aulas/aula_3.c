/* Ian Kersz
26.01.22

in: 
out: 
*/
#include <stdio.h>
#include <math.h>

int main(){
    int x, y;

    printf("qual o valor de x? ");
    scanf("%d", &x);
    printf("\nqual o valor de y? ");
    scanf("%d", &y);
// (x=10, y=1) = falso (x=12, y=5) = verdade
    if (x>y){
        printf("\n x > y é verdade\n\n");
    }
    else
    {
        printf("\n x > y é falso\n\n");
    }
    
    return 0;
}