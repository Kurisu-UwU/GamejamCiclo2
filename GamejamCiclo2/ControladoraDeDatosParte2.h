#pragma once
#include "ClasePadre.h"

class ControladoraDeDatosParte2 : public ControladoraDeDatos {
private:
public:
	ControladoraDeDatosParte2() {};
	~ControladoraDeDatosParte2() {};

	void AgregarDatoExistente2(int n) {
		int numero = 1;
		string nomb = "Datos/DatosRegistro_" + to_string(numero) + ".txt";
		fstream archivo(nomb);
	}
	vector<DatosRegistro> ObtenerRegistros() override {
		return this->registros;
	}
};
