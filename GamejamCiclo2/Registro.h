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
	/// Resumen de Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(ControladoraDeDatos * controladora)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->controladora = controladora;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbResultado;
	protected:
	private: System::Windows::Forms::Label^ lblResultado;
	private: System::Windows::Forms::TextBox^ tbConsulta;
	private: System::Windows::Forms::Label^ lblConsulta;
	private: System::Windows::Forms::ComboBox^ cbHerramienta;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::ComboBox^ cbCurso;
	private: System::Windows::Forms::ComboBox^ cbCategoria;
	private: System::Windows::Forms::Label^ lblIA;
	private: System::Windows::Forms::Label^ lblCategoria;
	private: System::Windows::Forms::Label^ lblCurso;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::TextBox^ tbValidacion;
	private: System::Windows::Forms::Label^ lblValidacion;
	private: System::Windows::Forms::TextBox^ tbCambio;
	private: System::Windows::Forms::Label^ lblCambio;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnAleatorio;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		ControladoraDeDatos* controladora;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbResultado = (gcnew System::Windows::Forms::TextBox());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->tbConsulta = (gcnew System::Windows::Forms::TextBox());
			this->lblConsulta = (gcnew System::Windows::Forms::Label());
			this->cbHerramienta = (gcnew System::Windows::Forms::ComboBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->cbCurso = (gcnew System::Windows::Forms::ComboBox());
			this->cbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->lblIA = (gcnew System::Windows::Forms::Label());
			this->lblCategoria = (gcnew System::Windows::Forms::Label());
			this->lblCurso = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->tbValidacion = (gcnew System::Windows::Forms::TextBox());
			this->lblValidacion = (gcnew System::Windows::Forms::Label());
			this->tbCambio = (gcnew System::Windows::Forms::TextBox());
			this->lblCambio = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnAleatorio = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbResultado
			// 
			this->tbResultado->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbResultado->Location = System::Drawing::Point(9, 279);
			this->tbResultado->Margin = System::Windows::Forms::Padding(2);
			this->tbResultado->Name = L"tbResultado";
			this->tbResultado->Size = System::Drawing::Size(361, 26);
			this->tbResultado->TabIndex = 31;
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->Location = System::Drawing::Point(9, 258);
			this->lblResultado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(188, 19);
			this->lblResultado->TabIndex = 30;
			this->lblResultado->Text = L"Resultado de la IA (resumen):";
			// 
			// tbConsulta
			// 
			this->tbConsulta->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConsulta->Location = System::Drawing::Point(9, 230);
			this->tbConsulta->Margin = System::Windows::Forms::Padding(2);
			this->tbConsulta->Name = L"tbConsulta";
			this->tbConsulta->Size = System::Drawing::Size(361, 26);
			this->tbConsulta->TabIndex = 29;
			// 
			// lblConsulta
			// 
			this->lblConsulta->AutoSize = true;
			this->lblConsulta->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConsulta->Location = System::Drawing::Point(9, 210);
			this->lblConsulta->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblConsulta->Name = L"lblConsulta";
			this->lblConsulta->Size = System::Drawing::Size(122, 19);
			this->lblConsulta->TabIndex = 28;
			this->lblConsulta->Text = L"Consulta realizada:";
			// 
			// cbHerramienta
			// 
			this->cbHerramienta->FormattingEnabled = true;
			this->cbHerramienta->Location = System::Drawing::Point(9, 128);
			this->cbHerramienta->Margin = System::Windows::Forms::Padding(2);
			this->cbHerramienta->Name = L"cbHerramienta";
			this->cbHerramienta->Size = System::Drawing::Size(167, 21);
			this->cbHerramienta->TabIndex = 27;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthCalendar1->Location = System::Drawing::Point(411, 28);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(7);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 26;
			// 
			// cbCurso
			// 
			this->cbCurso->FormattingEnabled = true;
			this->cbCurso->Location = System::Drawing::Point(9, 78);
			this->cbCurso->Margin = System::Windows::Forms::Padding(2);
			this->cbCurso->Name = L"cbCurso";
			this->cbCurso->Size = System::Drawing::Size(167, 21);
			this->cbCurso->TabIndex = 25;
			// 
			// cbCategoria
			// 
			this->cbCategoria->FormattingEnabled = true;
			this->cbCategoria->Location = System::Drawing::Point(9, 28);
			this->cbCategoria->Margin = System::Windows::Forms::Padding(2);
			this->cbCategoria->Name = L"cbCategoria";
			this->cbCategoria->Size = System::Drawing::Size(167, 21);
			this->cbCategoria->TabIndex = 24;
			// 
			// lblIA
			// 
			this->lblIA->AutoSize = true;
			this->lblIA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIA->Location = System::Drawing::Point(9, 108);
			this->lblIA->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblIA->Name = L"lblIA";
			this->lblIA->Size = System::Drawing::Size(106, 19);
			this->lblIA->TabIndex = 23;
			this->lblIA->Text = L"Herramienta IA:";
			// 
			// lblCategoria
			// 
			this->lblCategoria->AutoSize = true;
			this->lblCategoria->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCategoria->Location = System::Drawing::Point(9, 7);
			this->lblCategoria->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCategoria->Name = L"lblCategoria";
			this->lblCategoria->Size = System::Drawing::Size(143, 19);
			this->lblCategoria->TabIndex = 22;
			this->lblCategoria->Text = L"Categoría de consulta:";
			// 
			// lblCurso
			// 
			this->lblCurso->AutoSize = true;
			this->lblCurso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurso->Location = System::Drawing::Point(9, 58);
			this->lblCurso->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCurso->Name = L"lblCurso";
			this->lblCurso->Size = System::Drawing::Size(49, 19);
			this->lblCurso->TabIndex = 21;
			this->lblCurso->Text = L"Curso:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->Location = System::Drawing::Point(408, 7);
			this->lblFecha->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(49, 19);
			this->lblFecha->TabIndex = 20;
			this->lblFecha->Text = L"Fecha:";
			// 
			// tbValidacion
			// 
			this->tbValidacion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbValidacion->Location = System::Drawing::Point(408, 279);
			this->tbValidacion->Margin = System::Windows::Forms::Padding(2);
			this->tbValidacion->Name = L"tbValidacion";
			this->tbValidacion->Size = System::Drawing::Size(361, 26);
			this->tbValidacion->TabIndex = 35;
			// 
			// lblValidacion
			// 
			this->lblValidacion->AutoSize = true;
			this->lblValidacion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValidacion->Location = System::Drawing::Point(408, 258);
			this->lblValidacion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblValidacion->Name = L"lblValidacion";
			this->lblValidacion->Size = System::Drawing::Size(118, 19);
			this->lblValidacion->TabIndex = 34;
			this->lblValidacion->Text = L"¿Cómo se validó\?";
			// 
			// tbCambio
			// 
			this->tbCambio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCambio->Location = System::Drawing::Point(408, 230);
			this->tbCambio->Margin = System::Windows::Forms::Padding(2);
			this->tbCambio->Name = L"tbCambio";
			this->tbCambio->Size = System::Drawing::Size(361, 26);
			this->tbCambio->TabIndex = 33;
			// 
			// lblCambio
			// 
			this->lblCambio->AutoSize = true;
			this->lblCambio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCambio->Location = System::Drawing::Point(408, 210);
			this->lblCambio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCambio->Name = L"lblCambio";
			this->lblCambio->Size = System::Drawing::Size(114, 19);
			this->lblCambio->TabIndex = 32;
			this->lblCambio->Text = L"¿Qué se cambio\?";
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(9, 323);
			this->btnGuardar->Margin = System::Windows::Forms::Padding(2);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(180, 37);
			this->btnGuardar->TabIndex = 36;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->Location = System::Drawing::Point(194, 323);
			this->btnLimpiar->Margin = System::Windows::Forms::Padding(2);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(180, 37);
			this->btnLimpiar->TabIndex = 37;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			// 
			// btnAleatorio
			// 
			this->btnAleatorio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAleatorio->Location = System::Drawing::Point(378, 323);
			this->btnAleatorio->Margin = System::Windows::Forms::Padding(2);
			this->btnAleatorio->Name = L"btnAleatorio";
			this->btnAleatorio->Size = System::Drawing::Size(180, 37);
			this->btnAleatorio->TabIndex = 38;
			this->btnAleatorio->Text = L"Generar Datos aleatorios";
			this->btnAleatorio->UseVisualStyleBackColor = true;
			this->btnAleatorio->Click += gcnew System::EventHandler(this, &Registro::btnAleatorio_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(588, 323);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 37);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Ver Deatalles ->";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 372);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnAleatorio);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->tbValidacion);
			this->Controls->Add(this->lblValidacion);
			this->Controls->Add(this->tbCambio);
			this->Controls->Add(this->lblCambio);
			this->Controls->Add(this->tbResultado);
			this->Controls->Add(this->lblResultado);
			this->Controls->Add(this->tbConsulta);
			this->Controls->Add(this->lblConsulta);
			this->Controls->Add(this->cbHerramienta);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->cbCurso);
			this->Controls->Add(this->cbCategoria);
			this->Controls->Add(this->lblIA);
			this->Controls->Add(this->lblCategoria);
			this->Controls->Add(this->lblCurso);
			this->Controls->Add(this->lblFecha);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Registro";
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &Registro::Registro_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Registro_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAleatorio_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
