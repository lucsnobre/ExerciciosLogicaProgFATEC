/* ex7 - verifica qual de 3 num inteiros é o maior */
#include <stdio.h>

int main( void )
{
    int num1, num2, num3; 
    int maior;             

    printf( "Digite três números inteiros: " );
    scanf( "%d%d%d", &num1, &num2, &num3 );

    maior = num1; 

    if ( num2 > maior ) {
        maior = num2;
    }

    if ( num3 > maior ) {
        maior = num3;
    }

    printf( "O maior número é %d\n", maior );

    return 0;
}
