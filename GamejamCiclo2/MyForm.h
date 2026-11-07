#pragma once

namespace GamejamCiclo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bntGuardar;
	protected:
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnGeneraDatos;
	private: System::Windows::Forms::Button^ btnVerDetalle;
	private: System::Windows::Forms::TextBox^ txtBoxQueConsultamos;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bntGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnGeneraDatos = (gcnew System::Windows::Forms::Button());
			this->btnVerDetalle = (gcnew System::Windows::Forms::Button());
			this->txtBoxQueConsultamos = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// bntGuardar
			// 
			this->bntGuardar->Location = System::Drawing::Point(39, 461);
			this->bntGuardar->Name = L"bntGuardar";
			this->bntGuardar->Size = System::Drawing::Size(75, 23);
			this->bntGuardar->TabIndex = 0;
			this->bntGuardar->Text = L"Guardar";
			this->bntGuardar->UseVisualStyleBackColor = true;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(178, 461);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar->TabIndex = 1;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			// 
			// btnGeneraDatos
			// 
			this->btnGeneraDatos->Location = System::Drawing::Point(293, 461);
			this->btnGeneraDatos->Name = L"btnGeneraDatos";
			this->btnGeneraDatos->Size = System::Drawing::Size(145, 23);
			this->btnGeneraDatos->TabIndex = 2;
			this->btnGeneraDatos->Text = L"Generar datos aleatorios";
			this->btnGeneraDatos->UseVisualStyleBackColor = true;
			// 
			// btnVerDetalle
			// 
			this->btnVerDetalle->Location = System::Drawing::Point(653, 461);
			this->btnVerDetalle->Name = L"btnVerDetalle";
			this->btnVerDetalle->Size = System::Drawing::Size(145, 23);
			this->btnVerDetalle->TabIndex = 3;
			this->btnVerDetalle->Text = L"Ver Detalle";
			this->btnVerDetalle->UseVisualStyleBackColor = true;
			// 
			// txtBoxQueConsultamos
			// 
			this->txtBoxQueConsultamos->Location = System::Drawing::Point(157, 115);
			this->txtBoxQueConsultamos->Name = L"txtBoxQueConsultamos";
			this->txtBoxQueConsultamos->Size = System::Drawing::Size(246, 20);
			this->txtBoxQueConsultamos->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 543);
			this->Controls->Add(this->txtBoxQueConsultamos);
			this->Controls->Add(this->btnVerDetalle);
			this->Controls->Add(this->btnGeneraDatos);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->bntGuardar);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"AI-TRACE | Registro de Bitácora de uso IA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
