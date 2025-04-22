#include <iostream>
using namespace std;

const int TAM = 10;

// Función para ingresar los números
void ingresarNumeros(int arreglo[]) {
    for (int i = 0; i < TAM; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> arreglo[i];
    }
}

// Función para calcular la suma total
int calcularSuma(int arreglo[]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += arreglo[i];
    }
    return suma;
}

// Función para calcular el promedio
float calcularPromedio(int suma) {
    return static_cast<float>(suma) / TAM;
}

// Función para obtener el valor máximo
int calcularMaximo(int arreglo[]) {
    int max = arreglo[0];
    for (int i = 1; i < TAM; i++) {
        if (arreglo[i] > max) {
            max = arreglo[i];
        }
    }
    return max;
}

// Función para obtener el valor mínimo
int calcularMinimo(int arreglo[]) {
    int min = arreglo[0];
    for (int i = 1; i < TAM; i++) {
        if (arreglo[i] < min) {
            min = arreglo[i];
        }
    }
    return min;
}

// Función para contar pares e impares
void contarParesImpares(int arreglo[], int& pares, int& impares) {
    pares = 0;
    impares = 0;
    for (int i = 0; i < TAM; i++) {
        if (arreglo[i] % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }
    }
}

int main() {
    int numeros[TAM];
    int pares, impares;

    ingresarNumeros(numeros);

    int suma = calcularSuma(numeros);
    float promedio = calcularPromedio(suma);
    int maximo = calcularMaximo(numeros);
    int minimo = calcularMinimo(numeros);
    contarParesImpares(numeros, pares, impares);

    cout << "\n--- Resultados ---" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;
    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;

    return 0;
}
