#include "silla.cpp"
// clase externa para el uso de la estrcutura sillas
class listaSillas{
	silla *cab;
	//metodos
	public:
	listaSillas();
	void agregar(int, int, int, bool);
	void buscar();
	void asignar();
};

listaSillas::listaSillas(){
	cab = NULL;
}

void listaSillas::agregar(int idVuelo, int dAvion, int numeroSilla, bool estado ){ 
	Silla *p = new Silla;
	p->idVuelo=idVuelo;
	p->idAvion=idAvion;
	p->numeroSilla=numeroSilla;
	p->estado= estado;
	p->sig= cab;
	cab=p;
}
