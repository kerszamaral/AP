/* Ian Kersz
02.02.22

in: 2 valores
out: 1 valor 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    char w[20], w2[20];
    printf("\nQual é a palavra? ");
    scanf("%s", w);
    for(int i=0;i<strlen(w);i++){
       //w2=w-32;
    }
    printf("\nSua senha é %s", w);
    return 0;
}