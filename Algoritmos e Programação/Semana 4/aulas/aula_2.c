/* Ian Kersz
09.02.22

in: 2 valores
out: 1 valor 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    int n_termos, i, j;
    double x, exp_x=0,num=0,fat=1;


    printf("Entre com o nro de termos: ");
    scanf("%d", &n_termos);
    printf("Entre com o valor de x: ");
    scanf("%lf", &x);

    for(i=0;i<n_termos;i++){
        num = pow(x,i);
        fat=1;
        for(j=i;j>1;j--)
            fat=fat*j;
        printf("fat=%lf");   
    }
    return 0;
}