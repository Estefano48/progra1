#include <iostream>

// utilizando using namespace 
using namespace std;
	
	int main(){
		// cambio de color de la consola
		system("color 0A");
		cout<<"--------------CALCULADORA--------------"<<endl;
		//declaracion de variables
		float a,b;
		float suma,resta,mult,div;
		//Pidiendo datos al usuario
		cout<<"Ingrese un primer numero: ";
		cin>>a;
		cout<<"Ingrese un segundo numero: "<<endl;
		cin>>b;
		 // se realizan las operaciones
		suma = a + b;
		resta = a - b;
		mult = a * b;
		div = a / b;
		// imprimiendo resultados en pantalla
	cout<<"--------------RESULTADOS--------------"<<endl;
	cout<<"Suma: "<<suma<<endl;
	cout<<"Resta: "<<resta<<endl;
	cout<<"Producto: "<<mult<<endl;
	cout<<"Divicion: "<<div;
		
				
		return 0;
	}
