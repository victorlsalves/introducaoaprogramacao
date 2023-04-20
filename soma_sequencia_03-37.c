#include <stdio.h>

int main()
{
   int aux, soma = 0;
   
   for(int i = 0; i < 4; i++) {
       aux = 0;
       for (int j = 0; j < 8; j++) {
           
           aux = 10*i+j;
       }
       soma += aux;
   }
   
   printf("a primeira linha deu %d!\n", aux);
   printf("a segunda linha deu %d!\n", aux);
   printf("a terceira linha deu %d!\n", aux);
   printf("a quarta linha deu %d!\n", aux);
   printf("a soma geral deu %d!\n", soma);
   
    return 0;
}
