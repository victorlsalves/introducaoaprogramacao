#include <stdio.h>

int main() {
    
    int n, par = 0, impar = 0;
    
    printf("qual o numero?");
    scanf("%d", &n);
    
    for (int i = n; i > 0; i/=10) {
        
        if (i%2) {
            impar++;
        } else { par++; 
        }
    }
    
    printf("o numero %d possui %d algarismos pares e %d algarismos impares!\n", n, par, impar);

    return 0;
}
