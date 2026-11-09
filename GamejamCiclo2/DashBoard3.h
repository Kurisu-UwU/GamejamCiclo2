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
			label8->Text = Char::ConvertFromUtf32(0x2705);

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

	private: System::Windows::Forms::Label^ lblBarras;
	private: System::Windows::Forms::DataGridView^ dgvListado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Curso;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;














		  ControladoraDeDatosParte1* controladora2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblBarras = (gcnew System::Windows::Forms::Label());
			this->dgvListado = (gcnew System::Windows::Forms::DataGridView());
			this->Numero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Curso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListado))->BeginInit();
			this->SuspendLayout();
			// 
			// lblBarras
			// 
			this->lblBarras->AutoSize = true;
			this->lblBarras->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBarras->Location = System::Drawing::Point(23, 23);
			this->lblBarras->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblBarras->Name = L"lblBarras";
			this->lblBarras->Size = System::Drawing::Size(403, 57);
			this->lblBarras->TabIndex = 1;
			this->lblBarras->Text = L"Terminos y/o palabras que mas tuvieron presencia en los registros\r\n\r\n\r\n";
			// 
			// dgvListado
			// 
			this->dgvListado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Numero, this->Fecha,
					this->Curso
			});
			this->dgvListado->Location = System::Drawing::Point(11, 57);
			this->dgvListado->Margin = System::Windows::Forms::Padding(2);
			this->dgvListado->Name = L"dgvListado";
			this->dgvListado->RowHeadersVisible = false;
			this->dgvListado->RowHeadersWidth = 51;
			this->dgvListado->RowTemplate->Height = 24;
			this->dgvListado->Size = System::Drawing::Size(434, 307);
			this->dgvListado->TabIndex = 37;
			// 
			// Numero
			// 
			this->Numero->HeaderText = L"#";
			this->Numero->MinimumWidth = 6;
			this->Numero->Name = L"Numero";
			this->Numero->Width = 30;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Palabra Clave";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 200;
			// 
			// Curso
			// 
			this->Curso->HeaderText = L"Presencia";
			this->Curso->MinimumWidth = 6;
			this->Curso->Name = L"Curso";
			this->Curso->Width = 200;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 376);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(403, 57);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Terminos y/o palabras que mas tuvieron presencia en los registros\r\n\r\n\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &DashBoard3::label1_Click_2);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::LimeGreen;
			this->label8->Location = System::Drawing::Point(22, 376);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 25);
			this->label8->TabIndex = 39;
			this->label8->Text = L"a";
			// 
			// DashBoard3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 422);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvListado);
			this->Controls->Add(this->lblBarras);
			this->Name = L"DashBoard3";
			this->Text = L"DashBoard3";
			this->Load += gcnew System::EventHandler(this, &DashBoard3::DashBoard3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DashBoard3_Load(System::Object^ sender, System::EventArgs^ e) {
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
			String^ hola = gcnew String(clave[i].c_str());

			dgvListado->Rows->Add(i+1,hola, (porcentajes[i]));
		}
		String^ hola = gcnew String(clave[0].c_str());
		label1->Text = "Palabra clave con mayor presencia: " + hola;
		/*label1->Text = result;
		for (int i = 0; i < registros.size(); i++) {
			dgvListado->Rows->Add(registros[i].getNumero(), gcnew System::String(registros[i].getFecha().c_str()), gcnew System::String(registros[i].getCurso().c_str()), gcnew System::String(registros[i].getCategoria().c_str()), gcnew System::String(registros[i].getHerramienta().c_str()), gcnew System::String(registros[i].getConsulta().c_str()), gcnew System::String(registros[i].getValidacion().c_str()));
			totalregistros++;
			if (gcnew System::String(registros[i].getValidacion().c_str()) == "Si") {
				verificado++;
			}
			else {
				if (gcnew System::String(registros[i].getValidacion().c_str()) == "No") {
					NoValidado++;
				}
			}
		}*/
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
