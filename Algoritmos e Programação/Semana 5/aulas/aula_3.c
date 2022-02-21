/* Ian Kersz - Cartão ufrgs: 00338368
14.02.22

in:  valores
out:  valor 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(void){

    float peso_ideal=0, altura=0;
    char gen;

    do{
    printf("entre com o genero: ");
    scanf(" %c", &gen);
    gen = tolower(gen);
    }while(gen != 'f'&& gen != 'm');

    printf("\nEntre com sua altura em metros: ");
    scanf("%f", &altura);

    switch (gen){
    case 'f':
        peso_ideal = altura * 62.1-44.7;
        printf("\nSeu peso ideal vale %g kg", peso_ideal);
        break;
    case 'm':
        peso_ideal = altura * 72.7-58;
        printf("\nSeu peso ideal vale %g kg", peso_ideal);
        break;
    }
    return 0;
}