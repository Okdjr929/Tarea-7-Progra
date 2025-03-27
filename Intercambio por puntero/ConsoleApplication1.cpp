#include <iostream>

using namespace std;
//Creamos una función que toma como paramtros punteros a numeros enteros
void intercambiar(int* num1, int* num2) {
	int temp; //Utilizamos esta variable para guardar el valor de num1
	temp = *num1; //temp pasa a tener el valor de *num1
	*num1 = *num2; //*num1 pasa a tener el valor de *num2
	*num2 = temp; //*num2 pasa a tener el valor de temp, osea *num1
}

int main()
{
	int num1, num2;

	cout << "Ingrese el primer numero: " << endl;
	cin >> num1;
	cout << "Ingrese el segundo numero: " << endl;
	cin >> num2;

	//Llamamos a la función pasando su dirección de memoria de num1 y num2 con el Ampersand.
	intercambiar(&num1, &num2); 
	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;

	return 0;
}

