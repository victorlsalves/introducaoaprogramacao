/*
#include <stdio.h>

int soma(int n1, int n2, int n3, int n4)
{
	return n1 + n2 + n3 + n4;
}

int main()
{
	int num1, num2, num3, num4;

	printf("num1 = ");
	scanf("%d", &num1);

	printf("num2 = ");
	scanf("%d", &num2);

	printf("num3 = ");
	scanf("%d", &num3);

	printf("num4 = ");
	scanf("%d", &num4);

	float media = soma(num1,num2,num3,num4)/4.0;

	printf("media = %.2f\n",media);
return 0;
} */

#include <stdio.h>

float s;

void soma(int n1, int n2, int n3, int n4)
{
	s = n1 + n2 + n3 + n4;
}

int main()
{
	int num1, num2, num3, num4;

	printf("num1 = ");
	scanf("%d", &num1);

	printf("num2 = ");
	scanf("%d", &num2);
	
	printf("num3 = ");
	scanf("%d", &num3);
	
	printf("num4 = ");
	scanf("%d", &num4);
	
	soma(num1,num2,num3,num4);

	s = s/4.0;

	printf("media = %.2f\n", s);
return 0;
}
