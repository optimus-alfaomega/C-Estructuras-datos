#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad;
	float numero, mayor;
	
	cout << "Ingrese la cantidad de n�meros: ";
	cin >> cantidad;
	
	int i = 1;
	do {
		cout << "Ingrese el " << i << " n�mero: ";
		cin >> numero;
		
		if (i == 1)
			mayor = numero;
		
		if (numero >= mayor)
			mayor = numero;
		
		i++;
	} while(i <= cantidad);
	
	cout << "\nEl n�mero mayor de la cantidad " << cantidad << " de n�meros dados es: " << mayor;
	
	return 0;
}

