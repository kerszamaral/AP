/* Ian Kersz - Cartão ufrgs: 00338368
21.02.22
Entra com 10 valores quaisquer, sendo 5 deles par e 5 deles impar, Ordena ele em ordem de entrada
e da o output em alternadas entre par e impar.
in: 10 valores
out: 10 valores
*/

#include<stdio.h>
#define ELEMENTOS 5

int main(void){

    int i=0, j=0;   //Contadores
    int Par=0, Impar=0, Valor=0, CounterPar=0, CounterImpar=0;  //Variaveis usadas
    int APar[ELEMENTOS]={}, AImpar[ELEMENTOS]={}, ArrayFinal[2*ELEMENTOS];  //Arrays

    //Info do Programa
    printf("\nInforme %d numeros pares e %d numeros impares em qualquer ordem!\n", ELEMENTOS, ELEMENTOS);

    //Input do usuário      Loop para informar o valor de N*ELEMENTOS de termos
    for (i = 0; i < 2*ELEMENTOS; i++) {
        printf("Informe o %dº numero: ", i+1);
        scanf("%d", &Valor);

        //Check se valor é par ou impar e introdução dele ao array correto
        if (Valor%2==0){
            APar[Par]=Valor;
            CounterPar++;
        }
        if (Valor%2!=0){
            AImpar[Impar]=Valor;
            CounterImpar++;
        }

        Par = 0, Impar = 0; //Algum bug faz com que esses dois fiquem fora dos ifs para não dar erro

        //Codigo para erro caso o usuário faça overflow do array
        if(CounterPar>ELEMENTOS+1||CounterImpar>ELEMENTOS+1){
            printf("\nOverflow de um dos arrays!!");
            return 0;
        }
        //Loops para verificar em qual posição do array o proximo valor deve ser informado
        for (j = 0; j<ELEMENTOS;j++){
            if (APar[j]!=0){
                Par++;
            }
        }  
        for (j = 0; j<ELEMENTOS;j++){
            if (AImpar[j]!=0){
                Impar++;
            }
        }
    }
    //Fusão dos dois arrays (par e impar) em um só array alternado que será a saida final
    for(i=0; i<2*ELEMENTOS; i+=2){
        ArrayFinal[i]=APar[i/2];
        ArrayFinal[i+1]=AImpar[i/2];
    }

    //Sort (Ainda não está funcionando)
    /*for (i = 0; i<2*ELEMENTOS-1; i++){
        if(ArrayFinal[i]>ArrayFinal[i+1]){
            int x = ArrayFinal[i];
            int y = ArrayFinal[i+1];
            ArrayFinal[i] = y;
            ArrayFinal[i+1]=x;
        }
    }*/

    //Output: Print do array final
    printf("\n");
    printf("Resultado: ");
    for(i=0; i<2*ELEMENTOS; i++){
        printf("%d ", ArrayFinal[i]);
    }

    return 0;
}