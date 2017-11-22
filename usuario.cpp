#include "iostream"
#include "stdlib.h"
#include "fstream"
using namespace std;

struct Usuario{ 
	string nombre;
	string apellido;
	string Documento;
	string sexo;
	int edad;
	Usuario *sig;
};
class ListaUsuarios{
	protected: Usuario *cab; 
	//metodos
	public: 
	ListaUsuarios();
	void registrarse(); //lo mismo que agregar
	void agregar();
}; 

ListaUsuarios::ListaUsuarios(){ 
	cab=NULL;
}

void ListaUsuarios::registrarse(){
	//tengo esta duda: Yo quiero guardar los datos en las variables de la structura, 
	//pero no sé como, aquí está creando nuevas variables . 
	
	ofstream archivo ("archivo_usuario.txt");
	string nombre, apellido, documento, sexo; 
	int edad, op, op2; 
	do{
		cout << "1. -Nuevo registro\n2.-Salir\n";
		cin >> op; 
		cin.ignore(); //la función cin.ignore() para que no se tome en cuenta el último enter registrado
		if(op==1) { 
			if(!archivo.is_open()){ 
				archivo.open("archivo_usuario.txt", ios::out); //abriendo el archivo
			}
			cout<<"Nombre: ";
			getline(cin, nombre);
			cout<<"Apellido: ";
			getline(cin, apellido);
			cout<<"Documento: ";
			getline(cin, documento);
			cout<<"Sexo (M) o (F): ";
			getline(cin, sexo);
			cout<<"Edad: ";
			cin>>(cin, edad);
			cout <<"1.- Guardar registro\n2.-Regresar\n"; 
			cin>>op2;
			
			if(op2 == 1){
				archivo << nombre << endl;
				archivo << apellido <<endl;
				archivo <<documento << endl;
				archivo << sexo<<endl;
				archivo << edad << endl; 
				
				system("cls"); 
				cout<<"Registro guardado con exito\n";
				system("pause"); 
				system("cls");
			}
			archivo.close(); 
		}
		
	}while (op != 2);
	system("pause");
}





int main(){
	ListaUsuarios usuarios;
	usuarios.registrarse(); 
	return 1;
}
