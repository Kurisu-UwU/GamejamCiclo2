#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Registro {
private:
	int numero;
public:
	Registro(int num) { numero = num; };
	~Registro() {};	
	int getNumero() { return numero; }

	void GenerarArchivo() {
		string name = "Registro_";
		name += to_string(this->numero);
		ofstream my_file;
		my_file.open(name);
		if (!my_file) {
			cout << "Error opening file" << endl;
		}
		else {
			cout << "File created successfully" << endl;
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