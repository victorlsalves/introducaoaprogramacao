#include <stdio.h>

int main()
{
    int n, menor, maior, par = 0, impar = 0;
    

    
    menor = maior = n;
    
    for (int i = 0 ; i < 10 ; i++){
        
    printf("qual o numero?\n");
    scanf("%d", &n);
    
        if (n < menor)
        menor = n;
        
        if (n > maior)
        maior = n;
        
        if (!(n%2))
        par += n;
        
        else 
        impar += n;
    }
    
    printf("menor:%d!\nmaior: %d!\nsoma dos pares:%d!\nsoma dos impares:%d!\n", menor, maior, par, impar);

    return 0;
}
