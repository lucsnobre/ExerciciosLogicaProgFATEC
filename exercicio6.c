/* ex6 - verifica se um num é multiplo de 5*/
#include <stdio.h>

int main( void )
{
    int num; 

    printf( "Digite um número: " );
    scanf( "%d", &num);

    if ( num % 5 == 0 ) {
        printf( "%d é múltiplo de 5\n", num );
    }

    if ( numero % 5 != 0 ) {
        printf( "%d não é múltiplo de 5\n", num );
    }

    return 0;
}
