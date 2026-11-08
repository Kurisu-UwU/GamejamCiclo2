#pragma once
#include "ControladoraDeDatos.h"
namespace GamejamCiclo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DashBoard3
	/// </summary>
	public ref class DashBoard3 : public System::Windows::Forms::Form
	{
	public:
		DashBoard3(ControladoraDeDatos* controladora)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			controladora2 = (ControladoraDeDatosParte1*)controladora;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DashBoard3()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label1;

		  ControladoraDeDatosParte1* controladora2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(186, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &DashBoard3::label1_Click_1);
			// 
			// DashBoard3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Name = L"DashBoard3";
			this->Text = L"DashBoard3";
			this->Load += gcnew System::EventHandler(this, &DashBoard3::DashBoard3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DashBoard3_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ result = "";
		vector<string> clave{ "consulta", "resultado", "cambio", "valido", "mejora", "cambiamos", "analizamos" };
		vector<int> porcentajes = controladora2->Calcularporcetajes(clave);  // no se usa d emomento
		vector<string> posicion = clave;
		for (size_t i = 0; i < porcentajes.size(); i++) {
			size_t mayor = i;
			for (size_t j = i; j < porcentajes.size(); j++) {
				if (porcentajes[j] > porcentajes[mayor]) {
					mayor = j;
				}
			}
			if (mayor != i) {
				int tempNum = porcentajes[i];
				porcentajes[i] = porcentajes[mayor];
				porcentajes[mayor] = tempNum;

				string tempPal = clave[i];
				clave[i] = clave[mayor];
				clave[mayor] = tempPal;
			}
			int adios = porcentajes[i];
			String^ hola = gcnew String(clave[i].c_str());
			result = result + (i+1) + ". " + hola + ":  " + adios + "\n";
		}
		if (porcentajes.size() < 7) return;
		/*int a = porcentajes[0];
		int b = porcentajes[1];
		int c = porcentajes[2];
		int d = porcentajes[3];
		int f = porcentajes[4];
		int g = porcentajes[5];
		int h = porcentajes[6];
		String^ result =
			"Consulta: " + a +
			"\nResultado: " + b +
			"\nCambio: " + c +
			"\nValido: " + d +
			"\nMejora: " + f +
			"\nCambiamos: " + g +
			"\nCambio: " + h;
		*/
		label1->Text = result;
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
