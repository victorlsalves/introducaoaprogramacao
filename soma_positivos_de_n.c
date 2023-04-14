#include <stdio.h>

int main() {
    
    int n, soma = 0;
    
    printf("quantos numeros serao lidos?\n");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        
        int num;
        printf("qual o numero?\n");
        scanf("%d", &num);
        
        if (num >= 0) {
            soma += num;
        }
        
    }
    
    printf("a soma dos numeros positivos eh %d!\n",soma);

    return 0;
}
