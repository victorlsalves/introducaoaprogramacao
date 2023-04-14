#include <stdio.h>

int next() {

   static int num = 47, soma = 3;

   num += soma;

   ((soma == 3) ? --soma : ++soma);

 return num;

}

int main () {
    
    printf("%d\n", next());
    printf("%d\n", next());
    printf("%d\n", next());
    printf("%d\n", next());
    printf("%d\n", next());
    printf("%d\n", next());
    printf("%d\n", next());
    printf("%d\n", next());
    printf("%d\n", next());
    
    return 0;
}
