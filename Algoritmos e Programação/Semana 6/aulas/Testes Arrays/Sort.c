/* Ian Kersz - Cartão ufrgs: 00338368
22.02.22
Testes para diversos algoritmos de sort.
in: 2 valores
out: 1 valor 
*/

#include<stdio.h>
#define ELEMENTOS 5

int main(void){

    int i=0, j=0;   //Contadores
    char Array[ELEMENTOS]={}; //Arrays

    //Input
    printf("\nEscreva a palavra: ");
    for (i = 0; i < ELEMENTOS; i++){
        scanf(" %c", &Array[i]);
    }
    
    //Output
    printf("\n\nPalavra em ordem alfabetica: ");
    for(i=0; i<2*ELEMENTOS; i++){
        printf("%c ", Array[i]);
    }

    return 0;
}