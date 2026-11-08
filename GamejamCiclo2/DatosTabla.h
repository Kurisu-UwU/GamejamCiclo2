#pragma once
#include"string";

using namespace std;

class DatosTabla
{
private:
	string fecha;
	string curso;
	string categoria;
	string herramienta;
	string consulta;
	bool validacion;

public:
	DatosTabla(string f, string cr, string ctg, string hr, string cst, string v) {
		fecha = f;
		curso = cr;
		categoria = ctg;
		herramienta = hr;
		consulta = cst;
		if (v == "No se valido") {
			validacion = false;
		}
		else {
			validacion = true;
		}
	}

	~DatosTabla() {

	}

	string getCurso() {
		return curso;
	}

	string getCategoria() {
		return categoria;
	}

	string getHerramienta() {
		return herramienta;
	}

	string getFecha() {
		return fecha;
	}
};