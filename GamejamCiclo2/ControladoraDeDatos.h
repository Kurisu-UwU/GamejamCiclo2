#pragma once
#include "RegistroClase.h";

class ControladoraDeDatos {
private:
	vector<DatosRegistro> registros;
	int cantregistros;
public:
	ControladoraDeDatos() {};
	//ControladoraDeDatos() {};
	~ControladoraDeDatos() {};
	//Setters y getters


	//funciones

	void GenerarDatoNuevo(string consulta, string resultado, string cambio, string valido) {
		cantregistros++;
		DatosRegistro* r = new DatosRegistro(cantregistros);
		registros.push_back(*r);
		r->GenerarArchivo(consulta, resultado, cambio, valido, cantregistros);
	}

	void SetCantRegistros(int cant) {
		cantregistros = cant;
	}
};
