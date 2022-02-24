/* Ian Kersz - Cartão ufrgs: 00338368
24.02.22
Pega até 10 valores, faz seus quadrados, faz suas raizes, mostra a media dos quadrados e das raizes,
informa quantos valores estão contidos entre as medias
in: até 10 valores
out: 3 valor (media quadrados, media raizes, Quant num entre as medias) 
*/

#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAXLIDOS 10

int main(void){
    //Variaveis
    int i=0, j=0, counter=0;
    float valor=0, QuadradoTotal=0, RaizTotal=0, ArrayQuadrado[MAXLIDOS]={0}, ArrayRaiz[MAXLIDOS]={0};

    //Inicialização
    printf("Informe até %d valores: ", MAXLIDOS);
    //Entrada dos valores nos arrays com seus valores respectivos dentro do especificado
    do{
        scanf("%f", &valor);
        if (valor > 0){
            ArrayQuadrado[i] = pow(valor,2);
            ArrayRaiz[i] = sqrt(valor);
            i++;
        }
    } while (valor > 0 && i < MAXLIDOS);

    //Calculo da media
    for (j = 0; j <= i; j++){
        QuadradoTotal+=ArrayQuadrado[j];
        RaizTotal+=ArrayRaiz[j];
    }
    QuadradoTotal=QuadradoTotal/i;
    RaizTotal=RaizTotal/i;

    //Calculo valores entre os valores
    for (j = 0; j < i; j++){
        if ((ArrayQuadrado[j]>=RaizTotal&&ArrayQuadrado[j]<=QuadradoTotal)||(ArrayRaiz[j]>=RaizTotal&&ArrayRaiz[j]<=QuadradoTotal)){
            counter++;
        }
    }

    //Outputs
    printf("\nMedia dos quadrados: %f", QuadradoTotal);
    printf("\nMedia das raizes quadradas: %f", RaizTotal);
    printf("\nQuantidade de valores entre as duas medias: %d", counter);

    return 0;
}