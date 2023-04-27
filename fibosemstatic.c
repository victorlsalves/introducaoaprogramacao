#include <stdio.h>

int main()
{
int n, a = 1, p = 1, aux;

printf("quantos numeros tera a sequencia?");
scanf("%d", &n);

for (int i = 0; i < n; i++) {
aux = a;
a = p;
p += aux;

printf("%d\t", aux);
}

return 0;
}
