/* ex9 - calculo de desconto*/
#include <stdio.h>

int main( void )
{
    int valor; 

    printf( "Digite o valor da compra: " );
    scanf( "%d", &valor );

    if ( valor >= 100 ) {
        printf( "Valor a pagar (com desconto): %d\n", valor - 10 );
    }

    if ( valor < 100 ) {
        printf( "Valor a pagar: %d\n", valor );
    }

    return 0;
}
