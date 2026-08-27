/* ex3 - autenticação de senha do user*/     
#include <stdio.h>

int main( void )
{
    int senha;

    printf( "Digite a senha: " );
    scanf( "%d", &senha );

    if ( senha == 1234 ) {
        printf( "Acesso Permitido\n" );
    }

    if ( senha != 1234 ) {
        printf( "Acesso Negado\n" );
    }

    return 0;
}
