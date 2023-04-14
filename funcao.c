#include <stdio.h>

int fsoma1 (int n1, int n2) {

	int soma = n1+n2;

return soma;
}

int fsoma2 (int n1, int n2) {

	int soma = n1+n2;
	
return soma;
}

int main () {

	int num1,num2,num3,soma;

	printf("qual o primeiro numero?");
	scanf("%d", & num1);
	printf("qual o segundo numero?");
	scanf("%d", & num2);
	printf("qual o terceiro numero?");
	scanf("%d", & num3);
	soma = fsoma1(num1,num2);
	soma = fsoma2(soma,num3);
	printf("a soma eh %d!\n", soma);


return 0;
}
