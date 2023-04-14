#include <stdio.h>

int main() {
    
    int n, maior, menor;
    
    printf("quantos numeros serao lidos?\n");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        
        int num;
        printf("qual o numero?");
        scanf("%d", &num);
        
        if (i==0) {
            menor = num;
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
        
        if (num > maior) {
            maior = num;
        }
        
    }
    
    printf("o menor numero eh %d e o maior numero eh %d!\n", menor, maior);

    return 0;
}
