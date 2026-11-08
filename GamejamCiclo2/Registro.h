#pragma once
#include "ControladoraDeDatos.h"
#include "Listado.h"
#include "DashBoard3.h"

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
			controladora2 = controladora;
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

	private: System::Windows::Forms::Label^ lblValidacion;
	private: System::Windows::Forms::TextBox^ tbCambio;
	private: System::Windows::Forms::Label^ lblCambio;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnAleatorio;
	private: System::Windows::Forms::Button^ btnDetalles;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ComboBox^ cbValidacion;

		   ControladoraDeDatos* controladora2;

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
			this->lblValidacion = (gcnew System::Windows::Forms::Label());
			this->tbCambio = (gcnew System::Windows::Forms::TextBox());
			this->lblCambio = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnAleatorio = (gcnew System::Windows::Forms::Button());
			this->btnDetalles = (gcnew System::Windows::Forms::Button());
			this->cbValidacion = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// tbResultado
			// 
			this->tbResultado->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbResultado->Location = System::Drawing::Point(14, 366);
			this->tbResultado->Name = L"tbResultado";
			this->tbResultado->Size = System::Drawing::Size(540, 30);
			this->tbResultado->TabIndex = 31;
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->Location = System::Drawing::Point(14, 335);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(247, 22);
			this->lblResultado->TabIndex = 30;
			this->lblResultado->Text = L"Resultado de la IA (resumen):";
			// 
			// tbConsulta
			// 
			this->tbConsulta->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConsulta->Location = System::Drawing::Point(14, 294);
			this->tbConsulta->Name = L"tbConsulta";
			this->tbConsulta->Size = System::Drawing::Size(540, 30);
			this->tbConsulta->TabIndex = 29;
			this->tbConsulta->TextChanged += gcnew System::EventHandler(this, &Registro::tbConsulta_TextChanged);
			// 
			// lblConsulta
			// 
			this->lblConsulta->AutoSize = true;
			this->lblConsulta->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConsulta->Location = System::Drawing::Point(14, 265);
			this->lblConsulta->Name = L"lblConsulta";
			this->lblConsulta->Size = System::Drawing::Size(163, 22);
			this->lblConsulta->TabIndex = 28;
			this->lblConsulta->Text = L"Consulta realizada:";
			// 
			// cbHerramienta
			// 
			this->cbHerramienta->FormattingEnabled = true;
			this->cbHerramienta->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Gemini", L"Chat gpt", L"Claude", L"Copilot" });
			this->cbHerramienta->Location = System::Drawing::Point(14, 187);
			this->cbHerramienta->Name = L"cbHerramienta";
			this->cbHerramienta->Size = System::Drawing::Size(248, 30);
			this->cbHerramienta->TabIndex = 27;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthCalendar1->Location = System::Drawing::Point(616, 41);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(10);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 26;
			// 
			// cbCurso
			// 
			this->cbCurso->FormattingEnabled = true;
			this->cbCurso->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Cálculo I", L"Algoritmos", L"Organización y Dirección de Empresas",
					L"Aplicaciones de ingeniería de Software", L"Seminario de Investigación Académica"
			});
			this->cbCurso->Location = System::Drawing::Point(14, 114);
			this->cbCurso->Name = L"cbCurso";
			this->cbCurso->Size = System::Drawing::Size(248, 30);
			this->cbCurso->TabIndex = 25;
			this->cbCurso->SelectedIndexChanged += gcnew System::EventHandler(this, &Registro::cbCurso_SelectedIndexChanged);
			// 
			// cbCategoria
			// 
			this->cbCategoria->FormattingEnabled = true;
			this->cbCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Tarea", L"Examen", L"LB1", L"EA1", L"EB1",
					L"Reto", L"Proyecto", L"Consulta Conceptual", L"Depuración de errores"
			});
			this->cbCategoria->Location = System::Drawing::Point(14, 41);
			this->cbCategoria->Name = L"cbCategoria";
			this->cbCategoria->Size = System::Drawing::Size(248, 30);
			this->cbCategoria->TabIndex = 24;
			// 
			// lblIA
			// 
			this->lblIA->AutoSize = true;
			this->lblIA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIA->Location = System::Drawing::Point(14, 158);
			this->lblIA->Name = L"lblIA";
			this->lblIA->Size = System::Drawing::Size(139, 22);
			this->lblIA->TabIndex = 23;
			this->lblIA->Text = L"Herramienta IA:";
			// 
			// lblCategoria
			// 
			this->lblCategoria->AutoSize = true;
			this->lblCategoria->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCategoria->Location = System::Drawing::Point(14, 10);
			this->lblCategoria->Name = L"lblCategoria";
			this->lblCategoria->Size = System::Drawing::Size(187, 22);
			this->lblCategoria->TabIndex = 22;
			this->lblCategoria->Text = L"Categoría de consulta:";
			// 
			// lblCurso
			// 
			this->lblCurso->AutoSize = true;
			this->lblCurso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurso->Location = System::Drawing::Point(14, 85);
			this->lblCurso->Name = L"lblCurso";
			this->lblCurso->Size = System::Drawing::Size(63, 22);
			this->lblCurso->TabIndex = 21;
			this->lblCurso->Text = L"Curso:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->Location = System::Drawing::Point(612, 10);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(63, 22);
			this->lblFecha->TabIndex = 20;
			this->lblFecha->Text = L"Fecha:";
			// 
			// lblValidacion
			// 
			this->lblValidacion->AutoSize = true;
			this->lblValidacion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValidacion->Location = System::Drawing::Point(612, 335);
			this->lblValidacion->Name = L"lblValidacion";
			this->lblValidacion->Size = System::Drawing::Size(152, 22);
			this->lblValidacion->TabIndex = 34;
			this->lblValidacion->Text = L"¿Cómo se validó\?";
			// 
			// tbCambio
			// 
			this->tbCambio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCambio->Location = System::Drawing::Point(612, 294);
			this->tbCambio->Name = L"tbCambio";
			this->tbCambio->Size = System::Drawing::Size(540, 30);
			this->tbCambio->TabIndex = 33;
			// 
			// lblCambio
			// 
			this->lblCambio->AutoSize = true;
			this->lblCambio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCambio->Location = System::Drawing::Point(612, 265);
			this->lblCambio->Name = L"lblCambio";
			this->lblCambio->Size = System::Drawing::Size(144, 22);
			this->lblCambio->TabIndex = 32;
			this->lblCambio->Text = L"¿Qué se cambio\?";
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(14, 430);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(270, 54);
			this->btnGuardar->TabIndex = 36;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Registro::btnGuardar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->Location = System::Drawing::Point(291, 430);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(270, 54);
			this->btnLimpiar->TabIndex = 37;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &Registro::btnLimpiar_Click);
			// 
			// btnAleatorio
			// 
			this->btnAleatorio->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAleatorio->Location = System::Drawing::Point(567, 430);
			this->btnAleatorio->Name = L"btnAleatorio";
			this->btnAleatorio->Size = System::Drawing::Size(270, 54);
			this->btnAleatorio->TabIndex = 38;
			this->btnAleatorio->Text = L"Generar Datos aleatorios";
			this->btnAleatorio->UseVisualStyleBackColor = true;
			// 
			// btnDetalles
			// 
			this->btnDetalles->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDetalles->Location = System::Drawing::Point(882, 430);
			this->btnDetalles->Name = L"btnDetalles";
			this->btnDetalles->Size = System::Drawing::Size(270, 54);
			this->btnDetalles->TabIndex = 39;
			this->btnDetalles->Text = L"Ver Deatalles ->";
			this->btnDetalles->UseVisualStyleBackColor = true;
			this->btnDetalles->Click += gcnew System::EventHandler(this, &Registro::btnDetalles_Click_1);
			// 
			// cbValidacion
			// 
			this->cbValidacion->FormattingEnabled = true;
			this->cbValidacion->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Compilacion en Visual studio", L"Verificacion mediante ejemplos",
					L"Respaldo por fuentes confiables", L"No se valido"
			});
			this->cbValidacion->Location = System::Drawing::Point(612, 366);
			this->cbValidacion->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->cbValidacion->Name = L"cbValidacion";
			this->cbValidacion->Size = System::Drawing::Size(540, 30);
			this->cbValidacion->TabIndex = 40;
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1194, 498);
			this->Controls->Add(this->cbValidacion);
			this->Controls->Add(this->btnDetalles);
			this->Controls->Add(this->btnAleatorio);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnGuardar);
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
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Location = System::Drawing::Point(408, 279);
			this->Name = L"Registro";
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &Registro::Registro_Load);
			this->Leave += gcnew System::EventHandler(this, &Registro::Registro_Leave);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: 
		string Transformer(String^ trans) {
			const char* consul = (const char*)(System::Runtime::   // resultado de gemini
				InteropServices::Marshal::StringToHGlobalAnsi(trans)).ToPointer();
			string contenido(consul);
			System::Runtime::InteropServices::Marshal::
				FreeHGlobal(System::IntPtr((void*)consul));
			return contenido;
		}
		ControladoraDeDatos* GetControladora() {
			return controladora2;
		}
private: System::Void btnAleatorio_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tbConsulta_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fecha = monthCalendar1->SelectionStart.ToShortDateString();
	String^ curso = cbCurso->Text;
	String^ categoria = cbCategoria->Text;
	String^ herramienta = cbHerramienta->Text;
	String^ consulta = tbConsulta->Text;
	String^ resultado = tbResultado->Text;
	String^ cambio = tbCambio->Text;
	String^ valido = cbValidacion->Text;
	controladora2->GenerarDatoNuevo(Transformer(fecha), Transformer(curso), Transformer(categoria), Transformer(herramienta), Transformer(consulta),Transformer(resultado), Transformer(cambio), Transformer(valido));
}
	private: System::Void btnDetalles_Click(System::Object^ sender, System::EventArgs^ e) {
		Listado^ frm = gcnew Listado(controladora2);
		frm->ShowDialog();
	}
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	cbCategoria->Text = "";
	cbCurso->Text = "";
	cbHerramienta->Text = "";
	tbConsulta->Text = "";
	tbCambio->Text = "";
	tbResultado->Text = "";
	cbValidacion->Text = "";
	monthCalendar1->SelectionStart = DateTime::Today;
}
private: System::Void btnDetalles_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Listado^ frm = gcnew Listado(controladora2);
	frm->ShowDialog();
}
private: System::Void Registro_Leave(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void cbCurso_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Registro_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
	
}
