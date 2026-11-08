#pragma once
#include "ClasePadre.h"

class ControladoraDeDatosParte1 : public ControladoraDeDatos {
private:
public:
	ControladoraDeDatosParte1() {};
	~ControladoraDeDatosParte1() {};

	void GenerarDatoNuevo(string fecha, string curso, string categoria, string herramienta, string consulta, string resultado, string cambio, string valido) {
		bool esValido = false;
		if (valido == "Compilacion en Visual studio" || valido == "Verificacion mediante ejemplos" || valido == "Respaldo por fuentes confiables") {
			esValido = true;
		}
		cantregistros++;
		DatosRegistro r(cantregistros, fecha, curso, categoria, herramienta, consulta, resultado, cambio, esValido);
		r.GenerarArchivo(fecha, curso, categoria, herramienta, consulta, resultado, cambio, valido, cantregistros);
		registros.push_back(r);

		fstream archivoObj("DatosDeObjetos/Objetos.txt", ios::app);
		if (!archivoObj.is_open()) {
			// error: ruta inválida o carpeta DatosDeObjetos inexistente
		}
		if (archivoObj.is_open()) {
			archivoObj << cantregistros << endl;
		}
		archivoObj.close();
		fstream archivoObj2("DatosDeObjetos/CantObjetos.txt", ios::out);
		if (archivoObj2.is_open()) {
			archivoObj2 << cantregistros;
		}
		archivoObj2.close();
	}
	vector<DatosRegistro> ObtenerRegistros() override {
		return this->registros;
	}
	vector<int> Calcularporcetajes(vector<string> clave) { 
		vector<int> total(clave.size(), 0);
		for (size_t i = 0; i < registros.size(); i++) {
			vector<int> awa = registros[i].LeerArchivos(clave);
			for (size_t j = 0; j < clave.size() && j < awa.size(); j++) {
				total[j] += awa[j];
			}
		}
		return total; 
	}
};
