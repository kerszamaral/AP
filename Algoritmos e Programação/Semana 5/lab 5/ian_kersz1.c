/* Ian Kersz - Cartão ufrgs: 00338368
17.02.22
Leia os caracteres do teclado, até o usuario pressionar "!" e então dizer quantas letras foram maiusculas e quantas foram minusculas
in: 1 caracter vezes o numero desejado pelo usuario
out: 2 valores (Numero de caracteres maisculos e minusculos) 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void){
    //Inicialização das variaveis
    int cont=1, mai=0, min=0;
    char x;
    //Loop para rodar até quando o usuario decidir
    do{
        //Entrada dos caracteres
        printf("\nEntre com o %dº caractere: ", cont);
        scanf(" %c", &x);
        //Logica para decidir em qual adicionar
        if ((int)x>= 65 && (int)x<=90)
            mai++;
        else if ((int)x>=97 && (int)x<=122)
            min++;
        //Contador para dizer em qual caracteres está
        cont++;
    } while (x!='!');
    //Saida 
    printf("\nVocê digitou %d caracteres em minusculos e %d em maiúsculo", min, mai);

    return 0;
}