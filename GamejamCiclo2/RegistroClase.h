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
public:
	DatosRegistro() : numero(0) {};
	DatosRegistro(int n) : numero(n) {};
	~DatosRegistro() {};	
	void SetNumero(int num) { numero = num; }
	int getNumero() { return numero; }

	void GenerarArchivo(string consulta, string resultado, string cambio, string valido, int numeroarchivo) {
		ofstream my_file;
		my_file.open("Datos/DatosRegistro_" + to_string(numeroarchivo) + ".txt");
		if (my_file) {
			my_file << consulta << endl;
			my_file << resultado << endl;
			my_file << cambio << endl;
			my_file << valido << endl;
		}
		my_file.close();
	}
	vector<int> LeerArchivos(vector<string> buscadas) {
		vector<int> conteo(buscadas.size(),0);
		string nomb = "Datos/DatosRegistro_" + to_string(numero) + ".txt";
		ifstream archivo(nomb);
		string contenido = "";
		string linea;

		if (!archivo) {
			cout << "Error opening file" << endl;
		}

		while (getline(archivo, linea)) {
			contenido += linea + " ";
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
			else {
				actual += contenido[i];
			}
		}
		if (!actual.empty()) {

			string limpia = "";
			for (size_t i = 0; i < actual.size(); i++) {
				char c = actual[i];
				if (isalnum((unsigned char)c) || (unsigned char)c > 127) {
					limpia += (char)tolower((unsigned char)c);
				}
			}

			if (!limpia.empty()) palabras.push_back(limpia);
		}

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
	
};