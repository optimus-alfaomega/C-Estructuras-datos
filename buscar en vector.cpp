#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad = 5, numero_buscar, posicion;
	int datos[5];
	int encontrado = false;
	
	cout << "Ingrese los elementos del vector: \n";
	int i = 0;
	do {
		cin >> datos[i];
		i++;
	} while(i<cantidad);
	
	cout << "\nIngrese el n�mero a buscar: \n";
	cin >> numero_buscar;
	i = 0;
	do {
		if (numero_buscar==datos[i]){
			encontrado = true;
			posicion = i;
			break;
		}
		i++;
	} while(i<cantidad);
	
	if (encontrado){
		cout << "\nEl n�mero se encuentra en el vector en la posici�n: " << posicion;
	} else {
		cout << "\nEl n�mero " << numero_buscar << " no se encuentra en el vector";
	}
	
	return 0;
}

