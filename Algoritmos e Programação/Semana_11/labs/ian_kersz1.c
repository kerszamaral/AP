/* Ian Kersz - Cartão UFRGS: 00338368
22.04.22

in: N valores
out: até 4 strings ()
*/

#include <stdio.h>

int main(void)
{
    int num = -1;
    FILE *fNum[2];
    fNum[0] = fopen("pares.bin", "wb");
    fNum[1] = fopen("impares.bin", "wb");

    do
    {
        printf("Entre com um valor inteiro (0 para sair): ");
        scanf("%d", &num);
        if (num != 0)
        {
            if (num % 2 == 0)
                fwrite(&num, sizeof(int), 1, fNum[0]);
            else
                fwrite(&num, sizeof(int), 1, fNum[1]);
        }
    } while (num != 0);
    fclose(fNum[0]);
    fclose(fNum[1]);

    int countNum[2] = {0, 0}, maxNum[2] = {0, 0}, temp = 0;
    float mediaNum[2] = {0, 0};
    fNum[0] = fopen("pares.bin", "rb");
    fNum[1] = fopen("impares.bin", "rb");

    for (int i = 0; i < 2; i++)
    {
        while (fread(&temp, sizeof(int), 1, fNum[i]))
        {
            countNum[i]++;
            mediaNum[i] += temp;
            if (temp > maxNum[i])
                maxNum[i] = temp;
        }
        mediaNum[i] /= countNum[i];
        fclose(fNum[i]);
    }

    if (maxNum[0] != 0)
        printf("O maior valor par é %d\nA média dos valores pares é %.2f\n", maxNum[0], mediaNum[0]);
    else
        printf("Não foram lidos valores pares!\n");

    if (maxNum[1] != 0)
        printf("O maior valor impar é %d\nA média dos valores impares é %.2f\n", maxNum[1], mediaNum[1]);
    else
        printf("Não foram lidos valores impares!\n");

    return 0;
}
