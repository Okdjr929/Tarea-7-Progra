// Direccion y contenido de un puntero. 
// Escribe un programa que declare una variable entera, asigne su dirección a un puntero y muestre la dirección y el valor mediante el puntero.

#include <iostream> // libreria estandar de entrada y salida

using namespace std; // deja espacios entre las lineas.

int main() { // aqui inicia el programa
	 // declarar una una variable entera
	int numero = 10;  // aqui se declara la variable llamada numero y con el valor de 10

	// Declarar un puntero que a punte aun entero

	int* puntero = &numero; // aqui se declara un puntero que puede apuntar a una variable tipo int

	// mostrar la direccion de la variable y su valor mediante el puntero

	cout << "la direccion de la variable ´numero ´ es: " << puntero << endl; // esta linea imprime en la pantalla la direccion de memoria de la variable 
	cout << " el valor de la variable ´numero´ es: " << *puntero << endl; // esta linea imprime el valor de la variable atraves del puntero 

	return 0;
}