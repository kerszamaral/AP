/* Ian Kersz
31.01.22

in: 2 valores
out: 1 valor 
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void){
    int nro_livros=0;
    float a_pagar=0;
    char tipo;
    //input
    printf("Entre com o tipo de livro: ");
    scanf("%c", &tipo);
    tipo=tolower(tipo);//puts everything lowercase//???? oq ta acontecendo aqui??
    printf("Entre com a quantidade de livros: ");
    scanf("%i", &nro_livros);
    //math
    if (tipo == 'a'){
        a_pagar = 10*nro_livros;
    }else{
        if (tipo == 'b'){
            a_pagar=20*nro_livros;
        }else{ 
            if (tipo=='c'){
                a_pagar=30*nro_livros;
            }else{
                printf("Tipo de livro desconhecido!\n\n");
            }
        }
    }
    //output
    printf("O valor da compra é %.2f\n\n", a_pagar);
    
    if (nro_livros>10){
        printf("Venda de mais de dez livros!!\n\n");
    }

    return 0;
}
