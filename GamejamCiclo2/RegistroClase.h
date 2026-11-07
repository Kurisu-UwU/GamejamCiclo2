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
	DatosRegistro();
	DatosRegistro(int) {};
	~DatosRegistro() {};	
	int getNumero() { return numero; }

	void GenerarArchivo(string consulta, string resultado, string cambio, string valido, int numeroarchivo) {
		string name = "Datos/DatosRegistro_";
		string punto = ".txt";
		name += to_string(numeroarchivo) + punto;
		ofstream my_file;
		my_file.open(name);
		if (!my_file) {
			cout << "Error opening file" << endl;
		}
		else {
			cout << "File created successfully" << endl;
			my_file << "Consulta Realizada: " << consulta << endl;
			my_file << "Consulta Resultado de la IA: " << resultado << endl;
			my_file << "¿Que se cambió?: " << cambio << endl;
			my_file << "¿Cómo de validó?: " << valido << endl;
		}
		my_file.close();

		//leer
		/*if (my_file) {
			char ch;
			while (1) {
				my_file >> ch;
				if (my_file.eof()) break;
				cout << ch;
			}
		}*/
	}
};