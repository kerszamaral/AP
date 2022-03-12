/* Ian Kersz - Cartão ufrgs: 00338368
07.03.22

in: 2 valores
out: 1 valor 
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define MAX 20

int main(void){

    //Qualquer string é convertido em int com atoi
    //int d=0;
    //char str[30]="1999";
    //d=atoi(str);
    //printf("%d", d);

    //Qualquer int para string
    /*char str[30]={0};
    int i=0;
    //converte o inteiro 199 para string
    sprintf(str, "%d", 1999);

    //imprimindo caracteres do array
    for (i = 0; i < strlen(str); i++){
        printf("%c ", str[i]);
    }*/
    


    //Algoritmo do Selection sort
    /*int pos=0, min=0, i=0, x=0, vet[MAX]={0};

    for (pos = 0; pos < MAX -1; pos++){
        min = pos;
        for (i = pos +1; i < MAX; i++){
            if (vet[i] < vet[min]){
                min = i;
            }
            if (pos != min){
                x = vet[min];
                vet[min] = vet[pos];
                vet[pos] = x;
            }
        }
    }*/

    //Como achar somente valor em uma range com rand()
    //x = MIN + rand() % (MAX - MIN + 1)

    int r=0, i;

    srand(time(NULL));
    for (i = 0; i < 5; i++){
        printf("%d ", rand());
    }
    printf("\n");
    
    return 0;
}