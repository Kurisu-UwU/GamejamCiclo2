#pragma once
#include "DatosTabla.h"

namespace GamejamCiclo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DashBoard1
	/// </summary>
	public ref class DashBoard1 : public System::Windows::Forms::Form
	{
	public:
		DashBoard1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		void DibujarGraficoBarras(PaintEventArgs^ e) {
			SolidBrush^ pincel1 = gcnew SolidBrush(Color::Red);
			SolidBrush^ pincel2 = gcnew SolidBrush(Color::Blue);
			SolidBrush^ pincel3 = gcnew SolidBrush(Color::Magenta);
			SolidBrush^ pincel4 = gcnew SolidBrush(Color::Green);
			SolidBrush^ pincel5 = gcnew SolidBrush(Color::Yellow);
			SolidBrush^ pincel6 = gcnew SolidBrush(Color::Purple);
			SolidBrush^ pincel7 = gcnew SolidBrush(Color::Orange);
			SolidBrush^ pincel8 = gcnew SolidBrush(Color::GreenYellow);
			SolidBrush^ pincel9 = gcnew SolidBrush(Color::Aqua);
			e->Graphics->FillRectangle(pincel1, 50, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel2, 50, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel3, 100, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel4, 150, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel1, 200, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel6, 250, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel7, 300, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel8, 350, 50 + 250 - 200, 30, 200);
			e->Graphics->FillRectangle(pincel9, 400, 50 + 250 - 200, 30, 200);
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DashBoard1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// DashBoard1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 531);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DashBoard1";
			this->Text = L"DashBoard1";
			this->Load += gcnew System::EventHandler(this, &DashBoard1::DashBoard1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DashBoard1::DashBoard1_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DashBoard1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DashBoard1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		DibujarGraficoBarras(e);



	}
	};
}
