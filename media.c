#include <stdio.h>

int main(){
	int num1 = 0, num2 = 0, num3 = 0, media = 0;
	printf("qual o primeiro numero?");
	scanf("%d", & num1);
	printf("qual o segundo numero?");
	scanf("%d", & num2);
	printf("qual o terceiro numero?");
	scanf("%d", & num3);
	media=(num1+num2+num3)/3;
	printf("a media eh %d!", media);
return 0;
}
