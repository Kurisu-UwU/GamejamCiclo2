#pragma once
#include "RegistroClase.h";

class ControladoraDeDatos {
private:
	vector<DatosRegistro> registros;
public:
	ControladoraDeDatos() {};
	~ControladoraDeDatos() {};
	//Setters y getters


	//funciones

	void GenerarDatoNuevo() {
		int n = registros.size() + 1;
		DatosRegistro* r = new DatosRegistro(n);
		registros.push_back(*r);
		r->GenerarArchivo();
	}
};
