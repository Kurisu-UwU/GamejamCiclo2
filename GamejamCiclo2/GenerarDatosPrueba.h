#pragma once

namespace GamejamCiclo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GenerarDatosPrueba
	/// </summary>
	public ref class GenerarDatosPrueba : public System::Windows::Forms::Form
	{
	public:
		GenerarDatosPrueba(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GenerarDatosPrueba()
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
			// GenerarDatosPrueba
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 534);
			this->Name = L"GenerarDatosPrueba";
			this->Text = L"GenerarDatosPrueba";
			this->Load += gcnew System::EventHandler(this, &GenerarDatosPrueba::GenerarDatosPrueba_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GenerarDatosPrueba_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
