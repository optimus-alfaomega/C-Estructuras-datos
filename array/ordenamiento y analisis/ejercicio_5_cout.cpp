#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	srand(98);
	
	int cantidad = 300, negativos = 0, positivos = 0, neutros = 0, suma_negativos = 0, suma_positivos = 0;
	int datos[300];
	int aleatorio;
	
	for (int i = 0; i < cantidad; i++){
		aleatorio = rand() % 10 * pow(-1, i);
		datos[i] = aleatorio; // Numero aleatorio del 0 al 9
		//cout << " * " << aleatorio << endl;
		
		if (datos[i] < 0){
			negativos++;
			suma_negativos+= datos[i];
		}
		if (datos[i] > 0){
			positivos++;
			suma_positivos+= datos[i];
		}
		if (datos[i] == 0){
			neutros++;
		}
	}
	
	cout << "\nLa cantidad de n�meros positivos es: " << positivos << " y la suma de ellos es: " << suma_positivos;
	cout << "\nLa cantidad de n�meros negativos es: " << negativos << " y la suma de ellos es de: " << suma_negativos;
	cout << "\nLa cantidad de n�meros neutros es: " << neutros;
	
	return 0;
}

