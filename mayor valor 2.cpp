#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
9. Encontrar el mayor valor de un conjunto de n numeros dados
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad;
	float numero, mayor;
	
	printf("Ingrese la cantidad de n�mero a ingresar: ");
	scanf("%d", &cantidad);
	
	for (int i = 1; i <= cantidad; i++){
		printf("Ingrese el %d n�mero: ", i);
		scanf("%f", &numero);
		
		if (i == 1){
			mayor = numero;
		}
		
		if (numero >= mayor){
			mayor = numero;
		}
		
	}
	
	printf("\nEl n�mero mayor del conjunto de n�meros es: %.2f", mayor);
	
	return 0;
}

