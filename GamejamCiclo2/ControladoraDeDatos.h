#pragma once
#include "RegistroClase.h";
#include "DatosTabla.h"

class ControladoraDeDatos {
private:
	vector<DatosRegistro> registros;
	vector<DatosTabla> tabla;
	int cantregistros;
public:
	ControladoraDeDatos() : cantregistros(0) {};
	//ControladoraDeDatos() {};
	~ControladoraDeDatos() {};
	//Setters y getters


	//funciones

	void GenerarDatoNuevo(string fecha, string curso, string categoria, string herramienta, string consulta, string resultado, string cambio, string valido) {
		bool esValido = false;
		if (valido == "Compilacion en Visual studio" || valido == "Verificacion mediante ejemplos" || valido == "respaldo por fuentes confiables") {
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
	void AgregarDatoExistente(int n) {
		DatosRegistro r(n, "", "", "", "", "", "", "", false);
		r.SeRegistraAsiMismo();
		registros.push_back(r);
	}

	void SetCantRegistros(int cant) {
		cantregistros = cant;
	}

	/*vector<int> Calcularporcetajes() { //Desuso
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
	}*/

	vector<DatosRegistro> ObtenerRegistros() {
		return registros;
	}


	void AsignarValoresTabla() {
		int numero = 1;
		string nomb = "Datos/DatosRegistro_" + to_string(numero) + ".txt";
		fstream archivo(nomb);

	}
};
