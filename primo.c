#include <stdio.h>

int main()
{
    int n, c;
    
    printf("qual o numero?");
    scanf("%d", &n);
    
    for (int i = 2 ; i <= n; i++){
        
    if(!(n%i))
    c++;
    
    }
    
    if (c == 1)
    printf("%d eh primo!\n", n);
    
    else
    printf("%d nao eh primo!\n", n);

    return 0;
}
