#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int sumaRecursiva(int n){
	if(n <= 1) {
		return n;
	}
	else{
		return n + sumaRecursiva(n-1);
	}
}

int cuadradosPares(int n){
	if(n == 0){
		return n;
	}
	else if(n % 2 == 0) {
		return n*n + cuadradosPares(n-1);
	} else {
		return cuadradosPares(n - 1);
	}
}

int cuadradosPares2(int n){
	if(n == 0){
		return n;
	} else {
		return pow(n+n,2) + cuadradosPares2(n - 1);
	}
}

int fibNumero(int n){
 	if(n <= 1){
		return n;
	} else {
		return fibNumero(n-1) + fibNumero(n-2);
	}
}


bool lineal(string s, char c, int l){
	if(l < 0){
		return false;
	} else if (s[l] == c){
		return true;		
	} else {
		return lineal(s, c, l-1);
	}
}

int menu(){
  
  int opcion;
  
  cout<<"\n\nBienvenido al menu, escoja una opcion valida\n\n";
  cout<<"1. Suma recursiva\n";
  cout<<"2. Suma de Cuadrados pares\n";
  cout<<"3. Suma de Cuadrados pares usando libreria math\n";
  cout<<"4. Mostrar el n numero de la secuencia de fibonacci\n";
  cout<<"5. Saber si un caracter esta en una palabra\n";
  cout<<"6. Salir del programa\n\n";
  
  cout<<"Digite su opcion: ";
  cin>>opcion;
  
  return opcion;
}


int main() {
    bool bandera = false;
    int numeroSuma, numeroCuadrados, numeroCuadrados2, nFibonacci;
    string palabra;
    char substring;
    int sumaNumeros, resultadoCuadrados, resultadoCuadrados2, resultadoFibonacci;
    bool caracter;

    while (!bandera) {
        switch (menu()) {
            case 1: 
                cout << "\n\nDigite un numero para la suma recursiva: ";
                cin >> numeroSuma;
                sumaNumeros = sumaRecursiva(numeroSuma);
                cout << "\n\nLa suma fue: " << sumaNumeros << endl << endl;
                break;

            case 2: 
                cout << "\n\nDigite un numero para los cuadrados pares: ";
                cin >> numeroCuadrados;
                resultadoCuadrados = cuadradosPares(numeroCuadrados);
                cout << "\n\nLa suma de cuadrados pares fue: " << resultadoCuadrados << endl << endl;
                break;

            case 3: 
                cout << "\n\nDigite un numero para los cuadrados pares: ";
                cin >> numeroCuadrados2;
                resultadoCuadrados2 = cuadradosPares2(numeroCuadrados2);
                cout << "\n\nLa suma de cuadrados pares fue: " << resultadoCuadrados2 << endl << endl;
                break;

            case 4: 
                cout << "\n\nDigite un numero para mostrar el n numero de la secuencia de fibonacci: ";
                cin >> nFibonacci;
                resultadoFibonacci = fibNumero(nFibonacci);
                cout << "\n\nEl digito " << nFibonacci << " de la secuencia es: " << resultadoFibonacci << endl << endl;
                break;

            case 5: 
                cout << "\n\nEscriba una palabra: ";
                cin >> palabra;
                cout << "Digite un caracter: ";
                cin >> substring;
                caracter = lineal(palabra, substring, palabra.length()-1);
                if (!caracter)
                    cout << "\n\nEl caracter no esta en la palabra";
                else
                    cout << "\n\nEl caracter si esta en la palabra";
                break;

            case 6: 
                bandera = true;
                break;

            default: 
                cout << "Digite una opcion valida\n\n";
        }
    }
}
