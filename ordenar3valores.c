#include <stdio.h>

int main() {
	
	int n1, n2, n3;
	int aux;

	printf("qual o primeiro numero?");
	scanf("%d", &n1);
	printf("qual o segundo numero?");
	scanf("%d", &n2);
	printf("qual o terceiro numero?");
	scanf("%d", &n3);
    
    if (n2 < n1) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
    if (n3 < n1) {
        aux = n3;
        n3 = n1;
        n1 = aux;
    }
    
    if (n3 < n2) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    
    printf("os numeros ordenados: %d, %d, %d.", n1, n2, n3);
    
    return 0;
}
