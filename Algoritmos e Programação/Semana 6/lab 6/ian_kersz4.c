/* Ian Kersz - Cartão ufrgs: 00338368
24.02.22
Pega até 10 valores, faz seus quadrados, faz suas raizes, mostra a Media dos quadrados e das raizes,
informa quantos valores estão contidos entre as medias
in: até 10 valores
out: 3 valor (Media quadrados, Media raizes, Quant num entre as medias) 
*/

#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAXLIDOS 15

int main(void){
    //Variaveis
    int i=0, j=0, MaioresQMedia=0, MenoresQMedia=0;
    float valor=0, Media=0, Array[MAXLIDOS]={0};

    //Inicialização
    printf("Informe até %d valores: ", MAXLIDOS);
    //Entrada dos valores no array com seus valores respectivos dentro do especificado
    do{
        scanf("%f", &valor);
        if (valor > 0){
            Array[i]=valor;
            Media+=valor;
            i++;
        }
    } while (valor > 0 && i < MAXLIDOS);

    //Calculo da media
    Media = Media/i;

    //Calculo valores maioers e menores do que valores
    for (j = 0; j < i; j++){
        if (Array[j]>Media){
            MaioresQMedia++;
        }
        if (Array[j]<Media){
            MenoresQMedia++;
        }
    }

    //Outputs
    printf("\nMedia dos valores: %f", Media);
    printf("\nQuantidade de valores maiores do que a Media: %d", MaioresQMedia);
    printf("\nQuantidade de valores menores do que a Media: %d", MenoresQMedia);

    return 0;
}