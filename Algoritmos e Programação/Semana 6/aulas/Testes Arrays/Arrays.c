/* Ian Kersz - Cartão ufrgs: 00338368
21.02.22
Entra com 10 valores quaisquer, sendo 5 deles par e 5 deles impar, forma um Array com todos
Então faz um sort crescente e decrescente.
A output é então o Array original, com a ordem de entrada alternadas entre par e impar, 
o Array em ordem Crescente e o Array em ordem Decrescente.
in: 10 valores
out: 3 valores (3 arrays de 10 valores, totalizando 30 valores)
*/

#include<stdio.h>
#define ELEMENTOS 5

int main(void){

    int i=0, j=0;   //Contadores
    int Par=0, Impar=0, Valor=0, CounterPar=0, CounterImpar=0;  //Variaveis usadas
    int APar[ELEMENTOS]={}, AImpar[ELEMENTOS]={}, ArrayFinal[2*ELEMENTOS]={}; // Arrays

    //Info do Programa
    printf("\nInforme %d numeros pares e %d numeros impares em qualquer ordem!\n", ELEMENTOS, ELEMENTOS);

    //Input do usuário      Loop para informar o valor de N*ELEMENTOS de termos
    for (i = 0; i < 2*ELEMENTOS; i++) {
        printf("Informe o %dº numero (%d pares e %d impares já foram informados): ", i+1, CounterPar, CounterImpar);
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
        if(CounterPar>ELEMENTOS||CounterImpar>ELEMENTOS){
            printf("\nOverflow dos arrays!!");
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
    //Output
    //Print do ArrayFinal na ordem de entrada alternada entre par e impar (problema original da aula)
    printf("\n\nResultado em ordem inicial: ");
    for(i=0; i<2*ELEMENTOS; i++){
        printf("%d ", ArrayFinal[i]);
    }

    //Sort para crescente (fiz sem olhar)
    for(j=0;j<2*ELEMENTOS; j++){
        for (i = 0; i<2*ELEMENTOS-1; i++){
            if(ArrayFinal[i]>ArrayFinal[i+1]){
                int x = ArrayFinal[i+1];
                ArrayFinal[i+1] = ArrayFinal[i];
                ArrayFinal[i]=x;
            }
        } 
    }
    //Output
    //Print do ArrayFinal em ordem crescente (demonstração do sort)
    printf("\nResultado em ordem crescente: ");
    for(i=0; i<2*ELEMENTOS; i++){
        printf("%d ", ArrayFinal[i]);
    }

    //Sort para decrescente
    for(j=0;j<2*ELEMENTOS; j++){
        for (i = 0; i<2*ELEMENTOS-1; i++){
            if(ArrayFinal[i]<ArrayFinal[i+1]){ //Alterando o sinal mudamos de crescente pra descrente
                int x = ArrayFinal[i+1];
                ArrayFinal[i+1] = ArrayFinal[i];
                ArrayFinal[i]=x;
            }
        } 
    }
    //Output
    //Print do ArrayFinal em ordem decrescente (demonstração do sort)
    printf("\nResultado em ordem decrescente: ");
    for(i=0; i<2*ELEMENTOS; i++){
        printf("%d ", ArrayFinal[i]);
    }

    //Para poder ler os resultados quando aberto na cmd do windows
    printf("\n\nDigite qualquer coisa para sair: ");
    scanf("%d", &j);
    
    return 0;
}