/* Ian Kersz - Cartão ufrgs: 00338368
24.02.22
Ler uma string de até 25 caracteres, criar duas outras strings, uma toda maiuscula e outra invertida.
in: 1 string
out: 2 strings 
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){
    //variaveis
    int i=0, j=0, k=0;
    char palavra[25+1]={0}, reversa[25+1]={0}, maiuscula[25+1]={0};

    //Inicialização
    printf("Entre com uma string: ");

    //função para pegar a string com espaços
    if(fgets(palavra, 26, stdin)!=NULL){
        palavra[strlen(palavra)-1]='\0';
    }else{
        printf("Problema com o fgets()\n");
    }

    //loop para todas maiuscula
    for (i = 0; i < strlen(palavra); i++){
        maiuscula[i]=toupper(palavra[i]);
    }

    //loop para invertar a paalvra
    for (j = strlen(palavra)-1; j >= 0; j--){
        reversa[j]=palavra[k];
        k++;
    }

    printf("\nString toda maiuscula: %s", maiuscula);
    printf("\nString invertida: %s", reversa);

    return 0;
}