/* Ian Kersz
02.02.22

in: 2 valores
out: 1 valor (montante final)
*/
#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    char cod;
    //input
    printf("Entre com o codigo: ");
    scanf("%c", &cod);
    //switch/output
    switch (tolower(cod)){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': printf("É vogal!\n");
        break;
    default: printf("É consoante!\n");
        break;
    }

    return 0;
}