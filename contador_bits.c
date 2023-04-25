#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i, v, c = 0;
    
    printf("qual o numero?");
    scanf("%d", &n);
    
    for (int i = 0 ; i < sizeof(int)*8 ; i++){
        
    v = (n >> 1) & 1;
    
    if (n == 1)
    c++;
    
    }
    
    printf("%d!\n", c);

    return 0;
}

