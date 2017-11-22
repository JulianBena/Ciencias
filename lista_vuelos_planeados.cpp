#include "vuelos_planeado.cpp"
// clase externa para el uso de la estrcutura de pasajeros
class listaVuelosPlaneados{
	protected: VueloPlaneado *cab;
	//metodos
	public:
	listaVuelosPlaneados();
	void agregar(string,string,string,string,string,string,string,int);
	void buscar();
	void mostrar(); 
	void eliminar();
};

listaVuelos::listaVuelos(){
	cab = NULL;//asigna a la cabeza de la lista un apuntador NULL
}
//agrega un vuelo a la lista de vuelos 
void listaVuelos::agregar(string aerolinea,string codigo,string origen,string destino,string dia,string inicio,string fin,int sillas){
	VueloPlaneado *p = new VueloPlaneado;
	p->aerolinea=aerolinea;
	p->codigoDelVuelo=codigo;
	p->origen=origen;
	p->destino=destino;
	p->diaDeLaSemana=dia;
	p->horaDeInicio=inicio;
	p->horaDeFinalizacion=fin;
	p->numeroDeSillas=sillas;
	p->sig=cab;
	cab=p;
}

void listaVuelos::mostrar(){
	VueloPlaneado *p=cab;
	while(p!=NULL){ //while(p) p!=null->true p==nul->false
		//cout<<p->dato<<" ";
		cout<<p->aerolinea<<endl;
		cout<<p->codigoDelVuelo<<endl;
		cout<<p->origen<<endl;
		cout<<p->destino<<endl;
		cout<<p->diaDeLaSemana<<endl;
		cout<<p->horaDeInicio<<endl;
		cout<<p->horaDeFinalizacion<<endl;
		cout<<p->numeroDeSillas<<endl;
		p=p->sig;
	}
	cout<<""<<endl;
}
