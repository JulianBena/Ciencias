#include "iostream"
#include "stdlib.h"
using namespace std;

char menu();
char menuInvitado();
char menuUsuario();
char menuAerolinea();

int main(){ 
	int dato;
	//--------------------------------
	char opcion, opcI, opcU, opcA;
	do{
		opcion=menu();
		switch(opcion){
           		//menu para las personas que no se han reegistrado
			case 'i':
			case 'I':
              do{   
                    opcI=  menuInvitado();
                    switch(opcI){
                       case 'r': 
                       case 'R':
                            cout<<"caso r"<<endl;
                            
                       break;
                      
                       case 'b': 
                       case 'B':
                            cout<<"caso b"<<endl;
                           
                       break;
                      
                       case 'm': 
                       case 'M':
                            cout<<"caso m"<<endl;
                           
                       break;
                    }
                }while(opcion!='t' && opcion!='T');
    	
				
			case 'u':
			case 'U':
                 opcU=  menuUsuario();
			
				break;
			case 'a':
			case 'A':
                 opcA=  menuAerolinea();
				
				break;
		
		}
	}while(opcion!='t' && opcion!='T');
	return 1;		
	}
	
char menu(){
	char opcion;
	cout<<"\t\t\n BIENVENIDO\n";
	cout<<"\nPor favor escoja de que manera desea continuar"<<endl;
	cout<<"\n(I)nvitado";  
	cout<<"\n(U)suario";
	cout<<"\n(A)erolinea";
	cout<<"\n(T)erminar\n";
	cin>>opcion;
	return opcion;
}

char menuInvitado(){
	char opc;
	cout<<"\t\t\n INVITADO\n";
	cout<<"\n(R)egistro";  
	cout<<"\n(B)uscar Itinerario";
	cout<<"\nItinerareo (M)ultiple";
	cout<<"\n(T)erminar\n";

	cin>>opc;
	return opc;
}

char menuUsuario(){
	char opc;
	cout<<"\t\t\n USUARIO\n";
	cout<<"\n(B)uscar Itinerario";
	cout<<"\nItinerareo (M)ultiple";
	cout<<"\n(R)eservar vuelo";
	//reportes
    cout<<"\n(V)er reservas";
    cout<<"\n(C)omprar";
    cout<<"\n(T)erminar\n";
	return opc;
}

char menuAerolinea(){
	char opc;
	cout<<"\t\t\n AEROLINEA\n";
    cout<<"\n Registrar (T)rayectos\n";
    cout<<"\n Registrar vuelos (P)laneados";
    cout<<"\n Registrar vuelos (E)specificos";
    //reportes//
   	cout<<"\nPasajes (V)endidos";  
	cout<<"\n(D)estinos frecuentes";
	cout<<"\n(L)ista de Pasajeros por vuelo";
	cout<<"\nLista de (U)suarios"; //ordenados por dinero gastado 
    cout<<"\n(A)erolineas más usadas"; 
	cout<<"\n(T)erminar\n";
	cin>>opc;
	return opc;
}
