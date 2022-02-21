/* Ian Kersz
03.02.22
Pegar um valor, separar em dezena e unidade, somar os dois e tambem dar o numero por extenso.
in: 1 valor
out: 2 valores (soma e por extenso) 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    int n, u, d, s;
    printf("\nDeclare seu valor: ");
    scanf("%d", &n);
    printf("\n");
    if(n >= 20&&n<=39){
        //math
        //u = unidade
        //d = dezena 
        u=n%10;
        n=n/10;
        d=n%10;
        s=d+u;
        //da a soma
        printf("\nSoma dos algarismos %d \n", s);
        //escrita por extenso
        printf("Extenso: ");
        switch (d){
        case 2:
            printf("vinte ");
            break;
        case 3:
            printf("trinta ");
            break;
        default:
            break;
        }
        switch (u){
        case 1: printf("e um");
            break;
         case 2: printf("e dois");
            break;
         case 3: printf("e tres");
            break;
         case 4: printf("e quatro");
            break;
         case 5: printf("e cinco");
            break;
         case 6: printf("e seis");
            break;
         case 7: printf("e sete");
            break;
         case 8: printf("e oite");
            break;
         case 9: printf("e nove");
            break;
        default:
            break;
        }
    }else{
        printf("\nEntrada invalida");
    }
    return 0;
}