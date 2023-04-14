#include <stdio.h>

int main() {
	
	float media;
	printf("qual foi a media?");
	scanf("%f", & media);
	printf("o aluno com nota %f esta %s!", media, (media<3?"REPROVADO":(media<7?"PROVA FINAL":"APROVADO")));

	return 0;
}	
