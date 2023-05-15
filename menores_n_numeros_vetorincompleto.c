#include <stdio.h>
#include <limits.h>

int main()
{
    const int TAM = 10;
    int numeros[TAM];
    int n;
    
    printf("qual o valor de n? ");
    scanf("%d", &n);
    
    for(int i = 0; i < TAM; i++)
    {
        printf("digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    int menores[n];
    
    for(int i = 0; i < menores[n]; i++)
    {
        int indice_menor = -1;
        int menor = INT_MAX;
        
        for(int j = 0; j < TAM; j++)
        {
            if(numeros[j] <= menor)
            {
                menor = numeros[j];
                indice_menor = j;
            }    
        }
        menores[i] = menor;
        numeros[indice_menor] = INT_MAX;
    }
    
    printf("os %d menores valores sao: ", n);
    for(int i = 0; i < n ; i++)
    printf("%d ", menores[i]);

    return 0;
}
