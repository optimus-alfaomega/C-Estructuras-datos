#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad;
	float numero, menor;
	
	printf("Ingrese la cantidad de n�meros: ");
	scanf("%d", &cantidad);
	
	int i = 1;
	do {
		printf("Ingrese el %d n�mero: ", i);
		scanf("%f", &numero);
		
		if (i == 1)
			menor = numero;
		
		if (numero <= menor)
			menor = numero;
		
		i++;
	} while(i <= cantidad);
	
	printf("\nEl n�mero menor de la cantidad %d de n�meros dados es: %.2f", cantidad, menor);
	
	return 0;
}

