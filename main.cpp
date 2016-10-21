#include <iostream>
#include <cmath>

using namespace std;

void protoEjercicio1();

void protoEjercicio2(int);

void protoEjercicio3();

int main(){

	do{
		int opcion;
		cout << "1. Ejercicio 1" << "\n" << "2. Ejercicio 2" << "\n" << "3.Ejercicio 3" << "\n";
		cout << "Ingrese una opcion: ";
		switch(opcion){
			case 1:{

				break;
			}
			
			case 2:{

				int numero;
				cout << "Por favor ingrese un numero: ";
				cin >> numero;
				protoEjercicio2(numero);

				break;
			}
			
			case 3:{
				break;
			}
		}
	}while(opcion == 0);
	return 0;
}

void protoEjercicio1()


void protoEjercicio2 (int numero){
	int divisores[15];
	int totalNumeros = 0;
	int location = 0;
	for (int index = 1; index <= numero; ++index)
	{
		if(numero % i == 0){
			divisores[location] = i;
			location++;
		}
	}//fin de for
	for (int i = 0; i < location; ++i)
	{
		if(isPrime((divisores[i]+numero)/divisores[i])){
			totalNumeros += (divisores[i] + numero/divisores[i]);
		}
	}
	cout << "El total de la formula es: "; << "\n";
}

void isPrime(int numeroYaSumado){
	int listaDivisores = 0;
	for (int index = 1 index < numeroYaSumado; ++index)
	{
		if(numeroYaSumado % index == 0){
			listaDivisores++;
		}

		if(listaDivisores <= 2){
			return 1;
		}else{
			return 0;
		}
	}
}

