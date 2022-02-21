/* Ian Kersz
27.01.22
Ler valor do produto, porcentagem de juros e dias de aplicação, converter em meses e calcular o montante final
in: 3 valores (valor do produto, juros, dias de aplicacao)
out: 1 valor (montante final)
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale (LC_ALL, "en_US.UTF-8");

    //declaracao de variaveis
    float init_qty, final_qty;
    int n_days, percent, n_month;

    printf("Insira a quantia inicial:");
    scanf("%f", &init_qty);
    printf("Insira o percentual dos juros:");
    scanf("%d", &percent);
    printf("Insira o número de dias:");
    scanf("%d", &n_days);

    //conversao dias para mês
    n_month = n_days / 30; 

    //calculo do montante final 
    final_qty = init_qty * pow(1.0 + percent/100.0, n_month);

    //apresentacao do montante final
    printf("O montante fÇÇÇéáâinal é: R$%.2f", final_qty);
 
    return 0;
}

/*int main(){
    int juros, dias, mes;
    float valor, mont;
    setlocale(LC_ALL, "en_US.utf8");
    //input
    printf("\nQual o valor do produto? ");
    scanf("%f", &valor);
    printf(u8"\nQual a porcentagem de juros por més? ");
    scanf("%d", &juros);
    printf(u8"\nQuantos dias durará a aplicação? ");
    scanf("%d", &dias);
    //math
    mes = dias/30;
    mont = valor*pow(1+((float)juros/100) , mes);
    //output
    printf("\n\nMontante final: R$%.2f\n\n", mont);

    return 0;
}*/