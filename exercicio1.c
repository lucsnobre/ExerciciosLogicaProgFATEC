/*  exercício 1 - verificar se um num é par ou ímpar */

#include <stdio.h>

int main (void)
{
    int num;
    
    printf("Digite um número inteiro:" );
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d é par \n" , num);
    }
    if (num % 2 != 0) {
        printf("%d é ímpar \n", num);
    }
    
    return 0;
    
}
