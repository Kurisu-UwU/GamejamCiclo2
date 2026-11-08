#pragma once
#include "RegistroClase.h"
#include "DatosTabla.h"

class ControladoraDeDatos {
protected:
	vector<DatosRegistro> registros;
	vector<DatosTabla> tabla;
	int cantregistros;
public:
	ControladoraDeDatos() {};
	~ControladoraDeDatos() {};
	void SetCantRegistros(int cant) {
		cantregistros = cant;
	}
	int GetCantRegistros() {
		return cantregistros;
	}
	virtual vector<DatosRegistro> ObtenerRegistros() {
		return registros;
	}
	void AgregarDatoExistente(int n) {
		DatosRegistro r(n, "", "", "", "", "", "", "", false);
		r.SeRegistraAsiMismo();
		registros.push_back(r);
	}
};