#include <stdio.h>

int fibo() {

	static int anterior = 0, proximo =1;
	int aux = anterior;

	anterior = proximo;
	proximo += aux;

	return aux;
}

int main() {

	printf("%d\n", fibo());
	printf("%d\n", fibo());
	printf("%d\n", fibo());
	printf("%d\n", fibo());
	printf("%d\n", fibo());
	printf("%d\n", fibo());
	printf("%d\n", fibo());
	printf("%d\n", fibo());
	printf("%d\n", fibo());

	return 0;
}
