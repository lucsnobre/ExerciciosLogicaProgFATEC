/* ex5 - verificar se um num é divisivel pelo outro */
#include <stdio.h>

int main( void )
{
    int num1; 
    int num2; 

    printf( "Digite o primeiro número: " );
    scanf( "%d", &num1 );

    printf( "Digite o segundo número: " );
    scanf( "%d", &num2 );

    if ( num2 == 0 ) {
        printf( "Não é possível dividir por zero!\n" );
    }

    if ( num2 != 0 ) {
        printf( " O resultado da divisão é  %d\n", num1 / num2 );
    }

    return 0;
}
