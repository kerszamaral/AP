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

    char dia_da_semana[14+1]={};

    printf("Entre com o dia da semana: ");
    if(fgets(dia_da_semana, 15, stdin)!=NULL){
        dia_da_semana[strlen(dia_da_semana)-1]='\0';
        printf("\nDia da semana: %s", dia_da_semana);
    }else{
        printf("Problema com o fgets()\n");
    }
    return 0;
}