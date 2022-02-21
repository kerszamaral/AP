/* Ian Kersz
31.01.22

in: 2 valores
out: 1 valor
*/
#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    char gen;
    float h=0, p=0;
    //input
    printf("Entre com o seu genero: ");
    scanf("%c", &gen);
    gen=tolower(gen);
    printf("Entre com a sua altura: ");
    scanf("%f", &h);
    //conditional and math
    if (gen=='f'){
        p =  h * 62.1 - 44.7;
    }else{
        if (gen=='m'){
            p = h * 72.7 - 58;
        }else{
            printf("genero desconhecido\n");
        }
    }
    //output
    if (p!=0){
        printf("Seu peso ideal é %.2f\n\n", p);
    }

    return 0;
}