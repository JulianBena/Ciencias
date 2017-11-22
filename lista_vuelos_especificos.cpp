#include "string"
#include "vuelo_especifico.cpp"
#include "iostream"

using namespace std;
// clase extrena para el uso de la estructura vuelo planeado
class listaVuelos{
	protected: VueloEspecifico *cab;
	//metodos
	public:
	listaVuelos();
	void agregar(int, string );
	void buscar();
	void mostrar();
	void vuelosAerolinea(string);
	void eliminar();

};
//contructor de la clase
listaVuelos::listaVuelos(){
	cab = NULL;//asigna a la cabeza de la lista un apuntador NULL
}

void listaVuelos::agregar(int numeroDesillasDisponibles, Fecha fecha ){ 
	VueloEspecifico *p = new VueloEspecifico;
	p->numeroDesillasDisponibles=numeroDeSillasDisponibles;
	p->fecha=fecha;
	p->sig=cab;
	cab=p;
}


