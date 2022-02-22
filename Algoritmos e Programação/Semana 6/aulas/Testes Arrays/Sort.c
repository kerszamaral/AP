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

    //Sort para crescente (Acho que acabou ficando quase igual ao bubble sort, mas fiz sem olhar)
    for(j=0;j<ELEMENTOS*ELEMENTOS; j++){
        for (i = 0; i<ELEMENTOS-1; i++){
            if(Array[i]>Array[i+1]){
                char x = Array[i+1];
                Array[i+1] = Array[i];
                Array[i]=x;
            }
        } 
    }

    //Output
    printf("\n\nPalavra em ordem alfabetica: ");
    for(i=0; i<ELEMENTOS; i++){
        printf("%c ", Array[i]);
    }

    return 0;
}