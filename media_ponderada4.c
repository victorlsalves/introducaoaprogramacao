#include <stdio.h>

int main() {
	int num1, num2, num3, num4;
	float media;

	printf("qual eh o primeiro numero?");
	scanf("%d", &num1);

	printf("qual eh o segundo numero?");
	scanf("%d", &num2);

	printf("qual o terceiro numero?");
	scanf("%d", &num3);

	printf("qual o quarto numero?");
	scanf("%d", &num4);

	num1 = num1*1;
	num2 = num2*2;
	num3 = num3*3;
	num4 = num4*4;

	media = (num1 + num2 + num3 + num4)/4.0;

	printf("a media ponderada eh %f!\n", media);

return 0;
}
