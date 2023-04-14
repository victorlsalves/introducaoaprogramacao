#include <stdio.h>

int fsoma(int n1,int n2) {
	int s = n1+n2;
return s;
}

int main() {

	int num1, num2, soma;
	printf("qual o primeiro numero?");
	scanf("%d", & num1);
	printf("qual o segundo numero?");
	scanf("%d", & num2);
	num1 = num1%2?num1*3:num1*2;
	num2 = num2%2?num2*3:num2*2;
	soma = fsoma(num1,num2);
	printf("soma = %d\n",soma);

return 0;
}
