#pragma once
#include "RegistroClase.h";

class ControladoraDeDatos {
private:
	vector<DatosRegistro> registros;
	int cantregistros;
public:
	ControladoraDeDatos() : cantregistros(0) {};
	//ControladoraDeDatos() {};
	~ControladoraDeDatos() {};
	//Setters y getters


	//funciones

	void GenerarDatoNuevo(string consulta, string resultado, string cambio, string valido) {
		cantregistros++;
		DatosRegistro r(cantregistros);
		r.GenerarArchivo(consulta, resultado, cambio, valido, cantregistros);
		registros.push_back(r);

		fstream archivoObj("DatosDeObjetos/Objetos.txt");
		if (!archivoObj) {
			archivoObj.open("DatosDeObjetos/Objetos.txt", ios::out);
		}
		else {
			archivoObj.open("DatosDeObjetos/Objetos.txt", ios::app);
		}
	}

	void SetCantRegistros(int cant) {
		cantregistros = cant;
	}

	vector<int> Calcularporcetajes() {
		vector<string> clave = { "consulta", "resultado", "cambio", "valido" };
		vector<int> total(4,0);
		for (size_t i = 0; i < registros.size(); i++) {
			vector<int> awa = registros[i].LeerArchivos(clave);
			total[0] += awa[0];
			total[1] += awa[1];
			total[2] += awa[2];
			total[3] += awa[3];
		}
		return total; 
	}
};
