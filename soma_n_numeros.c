#include <stdio.h>

int main() {
    
    int n, soma = 0;
    
    printf("qual o valor de n?\n");
    scanf("%d", &n);
    
    int i;
    for (i = 0; i <= n; i++) {
        
        soma += i;
    }
    printf("a soma eh %d!\n", soma);

    return 0;
}
