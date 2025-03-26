#include <iostream> //Entrada y Salida de datos
using namespace std; //Evitar Usar ::std en todos los elementos de la biblioteca Estandar

int main() { //Punto de Entrada del Programa 

	int num = 20; // Declaracion de variable de tipo entero

	int* puntero = &num; // Creacion del puntero con la variable entera adentro

	*puntero = 10; // Cambio de valor atraves del puntero

	cout << "El nuevo Valor de la Variable es: " << num << endl; //Muestra en la consola el mensaje y el numero valor de la variable

	return 0; // Ejecucion del programa Exitosamente 
}
