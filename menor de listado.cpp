#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad;
	float numero, menor;
	
	cout << "Ingrese la cantidad de n�meros: ";
	cin >> cantidad;
	
	int i = 1;
	do {
		cout << "Ingrese el " << i << " n�mero: ";
		cin >> numero;
		
		if (i == 1)
			menor = numero;
		
		if (numero <= menor)
			menor = numero;
		
		i++;
	} while(i <= cantidad);
	
	cout << "\nEl n�mero menor de la cantidad " << cantidad << " de n�meros dados es: " << menor;
	
	return 0;
}

