/* Ian Kersz - Cartão ufrgs: 00338368
23.02.22

in: 2 valores
out: 1 valor 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>


int main(void){

    char dia_da_semana[13+1]={};

    printf("Entre com o dia da semana: ");
    fgets(dia_da_semana, 14, stdin);
    dia_da_semana[strlen(dia_da_semana)-1]='\0';

    printf("\nString = %s\n", dia_da_semana);

    return 0;
}