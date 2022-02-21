/* Ian Kersz
07.02.22

in: 2 valores
out: 1 valor 
*/

#include<stdio.h>

int main(void){
    int a;
    float m;
    for (int i = 0; i < 5; i++){
        printf("\nInforme o Id e media do aluno: ");
        scanf("%d %f", &a, &m);
        if (m>=6){
            printf("\nO aluno %d foi aprovado", a);
        } else {
            printf("\nO aluno %d foi reprovado", a);
        }   
    }
    return 0;
}