#pragma once
#include "ControladoraDeDatosParte2.h"
namespace GamejamCiclo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DashBoard2
	/// </summary>
	public ref class DashBoard2 : public System::Windows::Forms::Form
	{
	public:
		DashBoard2(ControladoraDeDatos* controladora)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			controladora2 = (ControladoraDeDatosParte2*)controladora;
		}
		void DibujarGraficos(PaintEventArgs^ e, int a, int b) {
			SolidBrush^ brush = gcnew SolidBrush(Color::Blue);
			SolidBrush^ brush2 = gcnew SolidBrush(Color::Red);

			e->Graphics->FillRectangle(brush, 80, 120+(100-a), 50, a);
			e->Graphics->FillRectangle(brush2, 30, 120+(100-b), 50, b);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DashBoard2()
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
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ prueba1;
	private: System::Windows::Forms::Label^ prueba2;
	private: System::Windows::Forms::Label^ lblMenu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
		   ControladoraDeDatosParte2* controladora2;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->prueba1 = (gcnew System::Windows::Forms::Label());
			   this->prueba2 = (gcnew System::Windows::Forms::Label());
			   this->lblMenu = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // prueba1
			   // 
			   this->prueba1->AutoSize = true;
			   this->prueba1->Location = System::Drawing::Point(200, 147);
			   this->prueba1->Name = L"prueba1";
			   this->prueba1->Size = System::Drawing::Size(35, 13);
			   this->prueba1->TabIndex = 0;
			   this->prueba1->Text = L"label1";
			   // 
			   // prueba2
			   // 
			   this->prueba2->AutoSize = true;
			   this->prueba2->Location = System::Drawing::Point(200, 184);
			   this->prueba2->Name = L"prueba2";
			   this->prueba2->Size = System::Drawing::Size(35, 13);
			   this->prueba2->TabIndex = 1;
			   this->prueba2->Text = L"label1";
			   // 
			   // lblMenu
			   // 
			   this->lblMenu->AutoSize = true;
			   this->lblMenu->BackColor = System::Drawing::Color::PaleGreen;
			   this->lblMenu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMenu->ForeColor = System::Drawing::Color::MediumSeaGreen;
			   this->lblMenu->Location = System::Drawing::Point(11, 9);
			   this->lblMenu->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->lblMenu->Name = L"lblMenu";
			   this->lblMenu->Size = System::Drawing::Size(298, 25);
			   this->lblMenu->TabIndex = 6;
			   this->lblMenu->Text = L"Verificacion de resultados IA";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::SystemColors::Control;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->label1->Location = System::Drawing::Point(11, 36);
			   this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(400, 57);
			   this->label1->TabIndex = 7;
			   this->label1->Text = L"Una forma de interpretar el buen uso de la IA. \r\nen el siguiente gráfico se compa"
				   L"ra la cantidad de consultas de IA \r\nque termiaron comparando y analizando los re"
				   L"sultados\r\n";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(95, 235);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(35, 13);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"label1";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(41, 235);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(35, 13);
			   this->label3->TabIndex = 8;
			   this->label3->Text = L"label1";
			   // 
			   // DashBoard2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::Control;
			   this->ClientSize = System::Drawing::Size(582, 414);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->lblMenu);
			   this->Controls->Add(this->prueba2);
			   this->Controls->Add(this->prueba1);
			   this->Name = L"DashBoard2";
			   this->Text = L"DashBoard2";
			   this->Load += gcnew System::EventHandler(this, &DashBoard2::DashBoard2_Load);
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DashBoard2::DashBoard2_Paint);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void DashBoard2_Load(System::Object^ sender, System::EventArgs^ e) {
		vector<DatosRegistro> registros = controladora2->ObtenerRegistros();
		prueba1->Text = "Cantidad de registros: " + (float)registros.size();
		float cantvalido = 0;
		for (time_t i = 0; i < registros.size(); i++) {
			if (registros[i].getValidacion() == "Si") {
				cantvalido++;
			}
		}
		label2->Text = "" + (int)cantvalido;
		label3->Text = "" + ((int)registros.size()-(int)cantvalido);
		cantvalido = cantvalido * 100 / (float)registros.size();
		prueba2->Text = "Pocentaje de registros validados: " + cantvalido + "%";
	}
	private: System::Void DashBoard2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		vector<DatosRegistro> registros = controladora2->ObtenerRegistros();
		float cantvalido = 0;
		for (time_t i = 0; i < registros.size(); i++) {
			if (registros[i].getValidacion() == "Si") {
				cantvalido++;
			}
		}
		float b = (float)registros.size() - cantvalido;
		cantvalido = cantvalido * 100 / (float)registros.size();
		b = b * 100 / (float)registros.size();

		DibujarGraficos(e,cantvalido,b);
	}
	};
}
