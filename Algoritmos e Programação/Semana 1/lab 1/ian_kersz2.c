/** Ian Kersz
20.01.22
Pegar o ano de nascimento e subtair para conseguir a idade
in: ano (1 val)
out: idade (1 val)
*/
#include <stdio.h>

int main(){
    int a, s, aa = 2022;
    //input
    printf("\nEm que ano voce nasceu? ");
    scanf("%d", &a);
    //math
    s = aa - a;
    //output
    printf("\nVoce tem %d anos de idade", s);
    
    return 0;
}