#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, potencia, contador;
	
	contador = 1;

	while (contador < 16) {
		printf("Digite 15 n�meros: ");
		scanf("\n%d", &numero);
		contador++;
		potencia = pow(numero, 2);
		printf("%d�: %d\n", numero, potencia);
	}
	return 0;
}
