#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

class DatosRegistro {
private:
	int numero;
	string fecha;
	string curso;
	string categoria;
	string herramienta;
	string consulta;
	string resultado;
	string cambio;
	bool validacion;

public:
	DatosRegistro() : numero(0) {};
	DatosRegistro(int n, string fech, string curs, string cate, string herra, string consul, string resul, string camb, bool vali) : numero(n) {
		numero = n;
		fecha = fech;
		curso = curs;
		categoria = cate;
		herramienta = herra;
		consulta = consul;
		validacion = vali;
		resultado = resul;
		cambio = camb;
	};
	~DatosRegistro() {};
	void SetNumero(int num) { numero = num; }
	void SetFecha(string fech) { fecha = fech; }
	void SetCurso(string curs) { curso = curs; }
	void SetCategoria(string cate) { categoria = cate; }
	void SetHerramienta(string herra) { herramienta = herra; }
	void SetConsulta(string consul) { consulta = consul; }
	void SetResultado(string resul) { resultado = resul; }
	void SetCambio(string camb) { cambio = camb; }
	void SetValidacion(bool vali) { validacion = vali; }

	int getNumero() { return numero; }
	string getFecha() { return fecha; }
	string getCurso() { return curso; }
	string getCategoria() { return categoria; }
	string getHerramienta() { return herramienta; }
	string getConsulta() { return consulta; }
	string getResultado() { return resultado; }
	string getCambio() { return cambio; }
	string getValidacion() {
		if (validacion == true) {
			return "Si";
		}
		else {
			return "No";
		}
	}
	void GenerarArchivo(string fecha1, string curso1, string categoria1, string herramienta1, string consulta1, string resultado1, string cambio1, string valido1, int numeroarchivo) {
		ofstream my_file;
		my_file.open("Datos/DatosRegistro_" + to_string(numeroarchivo) + ".txt");
		if (my_file) {
			my_file << fecha1 << endl;
			my_file << curso1 << endl;
			my_file << categoria1 << endl;
			my_file << herramienta1 << endl;
			my_file << consulta1 << endl;
			my_file << resultado1 << endl;
			my_file << cambio1 << endl;
			my_file << valido1 << endl;
		}
		my_file.close();
	}
	vector<int> LeerArchivos(vector<string> buscadas) {
		string nomb = "Datos/DatosRegistro_" + to_string(numero) + ".txt";
		ifstream archivo(nomb);
		string contenido = "";
		string linea;
		if (!archivo) { cout << "Error opening file" << endl; }
		int bucle = 0;
		while (getline(archivo, linea)) {
			if (bucle > 3) {
				contenido += linea + " ";
			}
			bucle++;
		}
		vector<string> palabras;
		string actual = "";
		for (size_t i = 0; i < contenido.size(); i++) {
			if (contenido[i] == ' ' || contenido[i] == '\t' || contenido[i] == '\n') {
				if (!actual.empty()) {
					string limpia = "";
					for (size_t i = 0; i < actual.size(); i++) {
						char c = actual[i];
						if (isalnum((unsigned char)c) || (unsigned char)c > 127) {
							limpia += (char)tolower((unsigned char)c);
						}
					}
					if (!limpia.empty()) palabras.push_back(limpia);
					actual = "";
				}
			}
			else { actual += contenido[i]; }
		}
		vector<int> conteo(buscadas.size(), 0);
		for (size_t i = 0; i < buscadas.size(); i++) {
			string objetivo = buscadas[i];
			for (size_t j = 0; j < palabras.size(); j++) {
				if (palabras[j] == objetivo) {
					conteo[i]++;
				}
			}
		}
		return conteo;
	}
	void SeRegistraAsiMismo() {
		fstream archivoObj("Datos/DatosRegistro_" + to_string(numero) + ".txt", ios::in);
		string linea;
		int lineaInt = 0;
		string valido;
		while (getline(archivoObj, linea)) {
			switch (lineaInt) {
			case 0: this->fecha = linea; break;
			case 1: this->curso = linea; break;
			case 2: this->categoria = linea; break;
			case 3: this->herramienta = linea; break;
			case 4: this->consulta = linea; break;
			case 5: this->resultado = linea; break;
			case 6: this->cambio = linea; break;
			case 7: valido = linea; break;
			}
			lineaInt++;
		}
		if (valido == "Compilacion en Visual studio" || valido == "Verificacion mediante ejemplos" || valido == "Respaldo por fuentes confiables") this->validacion = true; else this->validacion = false;
	}
};
