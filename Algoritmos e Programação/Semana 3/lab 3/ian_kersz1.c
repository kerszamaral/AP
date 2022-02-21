/* Ian Kersz
03.02.22
Fazer Pedra-Papel-Tesoura
in: 2 valores
out: 1 valor (quem ganhou)
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    char j1, j2;
    int n;
    //Entradas
    printf("\nQual suas jogadas? ");
    scanf(" %c %c", &j1, &j2);
    tolower(j1);
    tolower(j2);
    //math
    n=(int)j1-(int)j2;
    /*if else  | Tabela de resultados
    p = 112    | pp 0  e    rp 2 j2     tp 2 j1
    r = 114    | pr -2 j1   rr 0 e      tr 2 j2 
    t = 116    | pt -4 j2   rt -2 j1    tt 0  e*/
    if (j1 == 't'&&j2 == 'p'){
        printf("\nJogador numero 1 ganhou");
    } else if (n == -2){
       printf("\njogador numero 1 ganhou! ");
        }else if(n==0){
            printf("\ndeu empate ");
            }
            else if(n ==-4||n== 2){
            printf("\njogador numero 2 ganhou! ");
            }else{
                printf("\nJogadas invalidas");
   }
    return 0;
}