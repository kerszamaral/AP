/* Ian Kersz
20.01.22
Pegar o ano de nascimento e subtair o ano do pc para conseguir a idade
in: ano (1 val)
out: idade (1 val)
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int a, aa, s;
    //definir ano
    time_t tempo ;
    char stempo [100] ;
    time(&tempo); 
    sprintf(stempo, "%s", 20+ctime(&tempo));
    aa = atoi(stempo);
    //input
    printf("\nEm que ano voce nasceu? ");
    scanf("%d", &a);
    //math
    s = aa - a;
    //output
    printf("\nVoce tem %d anos de idade", s);

    return 0;
}