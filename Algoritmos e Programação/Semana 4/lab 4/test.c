#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(){
    int conta, total, vestibulares1, yhomens;
    float xmulheres, vestibulares2;
    char genero;

    //genero= toupper(genero);

    printf("diga o numero total de alunos\n");
    scanf("%d",&total);

    for(conta=1;conta<=total;conta++){
        printf("\ndigite o genero do aluno com as letras f para feminino ou m para masculino\n");
        scanf(" %c", &genero); //scanf("%    c", &genero);
        genero= tolower(genero);

        printf("diga o numero de vestibulares\n");
        scanf("%d", &vestibulares1);

        if (genero =='f'){
            xmulheres=xmulheres+1;}

        if(vestibulares1>= 3){
            vestibulares2 = vestibulares2 + 1;
        }
    }
    vestibulares2 =(vestibulares2/total)*100;
    xmulheres=(xmulheres/total)*100;

    printf("a porcentagem total de mulheres corresponde:%2.0f\n\n",xmulheres);
    printf(" \n\na porcentagem total de repetente corresponde:%2.0f",vestibulares2);

    return 0;
}