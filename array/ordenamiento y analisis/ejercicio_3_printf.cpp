#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	srand(6);
	
	int cantidad = 20, mayor = 0, posicion_mayor = 0;
	int datos[20];
	int aleatorio;
	
	int i = 0;
	while (i < cantidad){
		
		aleatorio = rand() % 100; // Numero aleatorio del 0 al 99
		datos[i] = aleatorio;
		cout << " * " << aleatorio << endl;
		
		if (i == 0)
			mayor = aleatorio;
		
		if (aleatorio >= mayor){
			mayor = aleatorio;
			posicion_mayor = i;
		}
		
		i++;
	}
	
	printf("\nEl n�mero mayor es %d y la posici�n es: %d", datos[posicion_mayor], posicion_mayor);
	
	return 0;
}

