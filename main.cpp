#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;
using std::string; 	

void protoEjercicio1(string);

void protoEjercicio2(int);

int esPrime(int);

void protoEjercicio3(int);

int main(){

int opcion = 0;
	do{
		cout << "1. Ejercicio 1" << "\n" << "2. Ejercicio 2" << "\n" << "3. Ejercicio 3" << "\n";
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		switch(opcion){
			case 1:{

				int numeroEjercicio1;
				cout << "Por favor ingrese un numero: ";
				cin >> numero;
				protoEjercicio1(numeroEjercicio1);
				break;
			}
			
			case 2:{

				int numeroEjercicio2;
				cout << "Por favor ingrese un numero: ";
				cin >> numero;
				protoEjercicio2(numeroEjercicio2);
				
				break;
			}

			case 3:{
				cout<<"Ingrese un numero: " << endl;
				cin >> numero;
				string cadenaNumero = to_string(numero);
				protoEjercicio3(numero);

				break;
			}
		}
	}while(opcion == 0);
	return 0;
}

void protoEjercicio1(string numeroIngresado){
	int numeroBase;
	int decimal = 0;
	int numero[numeroIngresado.size()+1];
	for (int i = 0; i < numeroIngresado.size(); ++i)
	{
		numero[i] = numero[i] - 48;
	}

	int numeroMayor = 0;
	for (int index = 0; index < numeroIngresado.size(); ++index)
	{
		cout << numero[i] << "\n";
		if(numeroMayor[index]){
			numeroMayor = numeroIngresado[index];
		}		
	}
	numeroBase = numeroMayor +1;
	int posicionDeNumero = 0;
	//for (int i = numeroBase -1 ; i >= 0 ; ++i)
	//{
					
	//}

}


void protoEjercicio2 (int numero){
	int divisores[15];
	int totalNumeros = 0;
	int location = 0;
	for (int index = 1; index <= numero; ++index)
	{
		if(numero % index == 0){
			divisores[location] = index;
			location++;
		}
	}//fin de for
	for (int index = 0; index < location; ++index)
	{
		if(esPrime((divisores[index]+numero)/divisores[index])){
			totalNumeros += (divisores[index] + numero/divisores[index]);
		}
	}
	cout << "El total de la formula es: " << totalNumeros << "\n";
}

int esPrime(int numeroYaSumado){
	int listaDivisores = 0;
	for (int index = 1 ; index < numeroYaSumado; ++index)
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


void protoEjercicio3(string numeroDeUsario){
	int sumaDigitos = 0;
	int numeroFinal;
	int digit;
	int numero;
	numeroFinal = numero;
	while(numero > 0){
		digit = numero % 10;
		numero = numero / 10;
		sumaDigitos = sumaDigitos = digit;
	}

	if(numeroFinal % sumaDigitos == 0){
		cout << "El numero si es divisible por su suma!" << endl;
	}else{
		cout << "El numero no es divisble por su suma!" < endl;
	}

