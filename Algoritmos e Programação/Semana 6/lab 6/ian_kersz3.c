/* Ian Kersz - Cartão ufrgs: 00338368
24.02.22
Ler uma string de até 25 caracteres, criar duas outras strings, uma toda SemEspaco e outra invertida.
in: 1 string
out: 2 strings 
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define TAM 60

int main(void){
    //variaveis
    int i=0, j=0, k=0, Vogais=0;
    char palavra[TAM+1]={0}, SemEspaco[TAM+1]={0}, Minuscula[TAM+1]={0};

    //Inicialização
    printf("Entre com uma string: ");

    //função para pegar a string com espaços
    if(fgets(palavra, TAM, stdin)!=NULL){
        palavra[strlen(palavra)-1]='\0';
    }else{
        printf("Problema com o fgets()\n");
    }
    
    //loop para todas SemEspaco
    for (i = 0; i < TAM+1; i++){
        Minuscula[i]=tolower(palavra[i]);
        if (Minuscula[i]=='a'||Minuscula[i]=='e'||Minuscula[i]=='i'||Minuscula[i]=='o'||Minuscula[i]=='u'){
            Vogais++;
        }
        if (palavra[i]!=' '){
            SemEspaco[j]=palavra[i];
            j++;
        }
    }

    printf("\nString toda SemEspaco: %s", SemEspaco);
    printf("\nString invertida: %d", Vogais);

    return 0;
}