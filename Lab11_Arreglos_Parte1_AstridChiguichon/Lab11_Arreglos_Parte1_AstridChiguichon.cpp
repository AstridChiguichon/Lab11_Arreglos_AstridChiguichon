#include <iostream>
using namespace std;

int main() {
	const int TAM = 20;
	int arreglo[TAM];

	// Llenar el arreglo con números del 1 al 10
	for (int i = 0; i < TAM; i++) {
		arreglo[i] = i + 1;
	}


	// Imprimir cada valor con su índice correspondiente
	for (int i = 0; i < TAM; i++) {
		cout << "Indice [" << i << "J = " << arreglo[i] << endl;
	}
	return 0;
}
