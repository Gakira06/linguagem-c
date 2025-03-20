#include <stdio.h>

int main() {

	printf("ola\n");

	int x;

	int y;


	printf("Digite um numero inteiro aleatorio: \n");
	scanf("%d", &x);

	printf("Agora digite outro numero inteiro: \n");
	scanf("%d", &y);

	int m = x*y;
	printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, m);

}