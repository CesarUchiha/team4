#include <stdio.h>
#include <stdlib.h>

int main() {
	system ("color 3A");
    int primos_por_mostrar, n, d;
    int es_primo;
    char seguir;

    printf("Cuantos primos desea mostrar: ");
    scanf("%d", &primos_por_mostrar);

    n = 2;
    do
    {

     while (primos_por_mostrar > 0) {
 
         /* determinar si n es primo */
         es_primo = 1;
         for (d = 2; d < n; ++d) {
             if (n % d == 0) {
                 es_primo = 0;
                 break;
             }
         }

         /* mostrar el numero
          * y actualizar el contador */
         if (es_primo) {
             printf("%d ", n);
             primos_por_mostrar--;
         }
         n++;
     }

     printf("\n");
     printf( "\n\n   %cDesea ingresar otra cantidad de numeros primos (s/n)?: ", 168 );
         fflush( stdin );
         scanf( "%c", &seguir );

    } while ( seguir != 'n' );
    return 0;
}
