#pragma once
#include "RegistroClase.h";

class GeneradorDeArchivos {
private:
	vector<Registro> registros;
public:
	GeneradorDeArchivos(int cant) {};
	~GeneradorDeArchivos() {};
	//Setters y getters


	//funciones

	void GenerarDatoNuevo() {
		int n = registros.size() + 1;
		Registro* r = new Registro(n);
		registros.push_back(*r);
		r->GenerarArchivo();
	}
};
