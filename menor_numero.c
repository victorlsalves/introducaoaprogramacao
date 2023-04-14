#include <stdio.h>

int main() {
	
	float num1, num2, num3, num4;

	printf("qual o primeiro numero?");
	scanf("%f", &num1);
	printf("qual o segundo numero?");
	scanf("%f", &num2);
	printf("qual o terceiro numero?");
	scanf("%f", &num3);
	printf("qual o quarto numero?");
	scanf("%f", &num4);

	if ((num1<=num2)&&(num1<=num3)&&(num1<=num4))
		{ printf("o menor numero eh %.2f!\n", num1);
		} else {
			if ((num2<=num3)&&(num2<=num4))
			{ printf("o menor numero eh %.2f!\n", num2);
			} else {
				if (num3<=num4)
				{ printf("o menor numero eh %.2f!\n", num3);
				} else { printf("o menor numero eh %.2f!\n", num4); 
				}
			}
		}
return 0;
}
