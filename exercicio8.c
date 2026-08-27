/* ex8 - verificador de notas escolares */
#include <stdio.h>

int main( void )
{
    int nota; 

    printf( "Digite a nota final (0 a 100): " );
    scanf( "%d", &nota );

    if ( nota >= 60 ) {
        printf( "Aprovado\n" );
    }

    if ( nota < 60 ) {
        printf( "Reprovado\n" );
    }

    return 0;
}
