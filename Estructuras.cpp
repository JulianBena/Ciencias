#include "string"
/*
	archivo encargado de definir las estructuras a usarse en el proyecto
*/
using namespace std;

//--------------------- estructuras propias ---------------------------
// estructura para el manejo de las fechas
struct Fecha {
  int fecha_seg;   // seconds del minutes desde 0 hasta 60
  int fecha_min;   // minutes del hour desde 0 hasta 59
  int fecha_hora;  // hours del day desde 0 hasta 24
  int fecha_mdia;  // day del month desde 1 hasta 31
  int fecha_mes;   // month del year desde 0 hasta 11
  int fecha_anio;  // anio
};
// estructuras para las sillas de un vuelo
struct silla{
	int IdVuelo;
	int IdAvion;
	int numeroSilla;
	bool estado;
	silla *sig;
};
//--------------------- estructuras profesor --------------------------
// estructura para las aerolineas
struct Aerolinea{
	string Nombre;
	int avionesDisponibles;
	int itinerariosDelAnio;
	int numeroDeCuenta; 
	Aerolinea *sig;
};
// estructuras para los usuarios
struct Usuarios{
	string nombres;
	string apellidos;
	int numeroDeDocumento;
	string sexo;
	int edad;
	Usuarios *sig;
};
// estructura para los pasajeros
struct Pasajeros{
	string nombres;
	string apellidos;
	int numeroDeDocumentos;
	Fecha fechaDeNaciemiento;
	string tipo;
	Pasajeros *sig;
};
// estructura para los vuelos planeados
struct VuelosPlaneados{
	int codigoDelVuelo;
	string origen;
	string destino;
	string diaDeLaSemana;
	Fecha horaDeInicio;
	Fecha horaDeFinalizacion;
	int numeroDeSillas;
	VuelosPlaneados *sig;
};
// estructuras para los vuelos especificos
struct VuelosEspecificos{
	int numeroDeSillasDisponibles;
	Fecha fecha;
	listaSillas listaVendidas;
	listaSillas listaDisponibles;
	int precio;
};




