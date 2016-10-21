#include <iostream>

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
				break;
			}
			
			case 3:{
				break;
			}
		}
	}

}


void protoEjercicio2 (int numero){
	int divisores[15];
	int totalNumeros = 0;
	int location = 0;
	for (int i = 1; i <= numero; ++i)
	{
		if(numero % i == 0){
			divisores[location] = i;
			location++;
		}
	}//fin de for

	for (int i = 0; i < location; ++i)
	{
		cout << "Los divisores son : " << divisores[location] << "\n";
	}

}

void isPrime(int numero){
	int dividendos = 0;
	for (int i = 0; i < count; ++i)
		{
			
		}	


}
