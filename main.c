#include <stdio.h>

int main( void )
{
   int contador; 
   int nota; 
   int total; 
   float média; 
   
   total = 0; 
   contador = 0; 
   
   printf( "Digite a nota, -1 no fim: " ); 
   scanf( "%d", &nota ); 
   
   while ( nota != -1 ) {
      total = total + nota; 
      contador = contador + 1; 
      
      printf( "Digite a nota, -1 para finalizar: " ); 
      scanf("%d", &nota); 
   }

   if ( contador != 0 ) {

      média = ( float ) total / contador; 

      printf( "Média da turma á %.2f\n", média );   
   } 
   else { 
      printf( "Nenhuma nota foi informada\n" );
   }

   return 0; 
} 