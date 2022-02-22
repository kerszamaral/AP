/* Ian Kersz
22.02.22
Pegar o ano de nascimento e subtair o ano do pc para conseguir a idade
in: ano (1 val)
out: idade (1 val)
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int tempoo(void){
    //variaveis
    char stempo [100];
    int result;

    //String manipulation
    time_t tempo;
    time(&tempo); 
    sprintf(stempo, "%s", 20+ctime(&tempo));

    //output
    result=atoi(stempo);
    return result;
}

int main(){
    int ano=0, anoatual=0, idade=0;
    //definir ano
    anoatual = tempoo();
    //input
    printf("\nEm que ano voce nasceu? ");
    scanf("%d", &ano);
    //math
    idade = anoatual - ano;
    //output
    printf("\nVoce tem %d anos de idade", idade);

    return 0;
}