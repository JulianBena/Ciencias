#include "pasajeros.cpp"
// clase externa para el uso de la estrcutura de pasajeros
class listaPasajeros{
	protected: pasajero *cab;
	//metodos
	public:
	listaPasajeros();
	void agregar(String, String, int, Fecha, String);
	void buscar();
	void eliminar();
};

//contructor de la clase
listaPasajeros::listaPasajeros(){
	cab = NULL;
}

void listaVuelos::agregar(string nombres, String apellidos, int numeroDeDocumento, Fecha fechaDeNacimiento, String tipo  ){
	Pasajero *p = new Pasajero;
	p->nombres=nombres;
	p->apellidos=apellidos;
	p->numeroDeDocumento;
	p->fechaDeNacimiento = fechaDeNacimiento;
	p->tipo=tipo;
	p->sig=cab;
	cab=p;
}
