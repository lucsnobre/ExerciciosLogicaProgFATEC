/* ex4 - checar se numero int é positivo, negativo ou zero*/
#include <stdio.h>

int main( void )
{
    int numero; /* número digitado pelo usuário */

    printf( "Digite um número inteiro: " );
    scanf( "%d", &numero );

    if ( numero > 0 ) {
        printf( "O número é positivo\n" );
    }

    if ( numero < 0 ) {
        printf( "O número é negativo\n" );
    }

    if ( numero == 0 ) {
        printf( "O número é zero\n" );
    }

    return 0;
}
