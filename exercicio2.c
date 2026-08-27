/*ex 2 - verificação de maioridade*/
#include <stdio.h>

int main( void )
{
    int idade;

    printf( "Digite sua idade: " );
    scanf( "%d", &idade );

    if ( idade >= 18 ) {
        printf( "Você é maior de idade\n" );
    }

    if ( idade < 18 ) {
        printf( "Você é menor de idade\n" );
    }

