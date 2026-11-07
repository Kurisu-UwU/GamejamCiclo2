#pragma once
#include "ControladoraDeDatos.h"
#include "Registro.h"

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
	private: System::Windows::Forms::Button^ btnRegistro;
	protected:

	protected:



	private: System::Windows::Forms::Label^ lblMenu;
	private: System::Windows::Forms::Button^ btnAnalisis;
	private: System::Windows::Forms::Button^ btnDB1;
	private: System::Windows::Forms::Button^ btnDB2;
	private: System::Windows::Forms::Button^ btnDB3;
	private: System::Windows::Forms::Button^ btnInstrucciones;
	private: System::Windows::Forms::Button^ btnCreadores;
	private: System::Windows::Forms::Button^ btnSalir;






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
			this->btnRegistro = (gcnew System::Windows::Forms::Button());
			this->lblMenu = (gcnew System::Windows::Forms::Label());
			this->btnAnalisis = (gcnew System::Windows::Forms::Button());
			this->btnDB1 = (gcnew System::Windows::Forms::Button());
			this->btnDB2 = (gcnew System::Windows::Forms::Button());
			this->btnDB3 = (gcnew System::Windows::Forms::Button());
			this->btnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->btnCreadores = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnRegistro
			// 
			this->btnRegistro->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistro->Location = System::Drawing::Point(13, 69);
			this->btnRegistro->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRegistro->Name = L"btnRegistro";
			this->btnRegistro->Size = System::Drawing::Size(261, 57);
			this->btnRegistro->TabIndex = 2;
			this->btnRegistro->Text = L"Registro de Bitácora";
			this->btnRegistro->UseVisualStyleBackColor = true;
			this->btnRegistro->Click += gcnew System::EventHandler(this, &MyForm::btnRegistro_Click);
			// 
			// lblMenu
			// 
			this->lblMenu->AutoSize = true;
			this->lblMenu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMenu->Location = System::Drawing::Point(13, 13);
			this->lblMenu->Name = L"lblMenu";
			this->lblMenu->Size = System::Drawing::Size(259, 32);
			this->lblMenu->TabIndex = 5;
			this->lblMenu->Text = L"MENÚ PRINCIPAL";
			// 
			// btnAnalisis
			// 
			this->btnAnalisis->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnalisis->Location = System::Drawing::Point(331, 69);
			this->btnAnalisis->Margin = System::Windows::Forms::Padding(4);
			this->btnAnalisis->Name = L"btnAnalisis";
			this->btnAnalisis->Size = System::Drawing::Size(261, 57);
			this->btnAnalisis->TabIndex = 6;
			this->btnAnalisis->Text = L"Detalle y Análisis";
			this->btnAnalisis->UseVisualStyleBackColor = true;
			// 
			// btnDB1
			// 
			this->btnDB1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDB1->Location = System::Drawing::Point(649, 69);
			this->btnDB1->Margin = System::Windows::Forms::Padding(4);
			this->btnDB1->Name = L"btnDB1";
			this->btnDB1->Size = System::Drawing::Size(261, 57);
			this->btnDB1->TabIndex = 7;
			this->btnDB1->Text = L"DashBoard 1";
			this->btnDB1->UseVisualStyleBackColor = true;
			// 
			// btnDB2
			// 
			this->btnDB2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDB2->Location = System::Drawing::Point(13, 185);
			this->btnDB2->Margin = System::Windows::Forms::Padding(4);
			this->btnDB2->Name = L"btnDB2";
			this->btnDB2->Size = System::Drawing::Size(261, 57);
			this->btnDB2->TabIndex = 8;
			this->btnDB2->Text = L"DashBoard 2";
			this->btnDB2->UseVisualStyleBackColor = true;
			// 
			// btnDB3
			// 
			this->btnDB3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDB3->Location = System::Drawing::Point(331, 185);
			this->btnDB3->Margin = System::Windows::Forms::Padding(4);
			this->btnDB3->Name = L"btnDB3";
			this->btnDB3->Size = System::Drawing::Size(261, 57);
			this->btnDB3->TabIndex = 9;
			this->btnDB3->Text = L"DashBoard 3";
			this->btnDB3->UseVisualStyleBackColor = true;
			// 
			// btnInstrucciones
			// 
			this->btnInstrucciones->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInstrucciones->Location = System::Drawing::Point(649, 185);
			this->btnInstrucciones->Margin = System::Windows::Forms::Padding(4);
			this->btnInstrucciones->Name = L"btnInstrucciones";
			this->btnInstrucciones->Size = System::Drawing::Size(261, 57);
			this->btnInstrucciones->TabIndex = 10;
			this->btnInstrucciones->Text = L"Instrucciones";
			this->btnInstrucciones->UseVisualStyleBackColor = true;
			// 
			// btnCreadores
			// 
			this->btnCreadores->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreadores->Location = System::Drawing::Point(13, 301);
			this->btnCreadores->Margin = System::Windows::Forms::Padding(4);
			this->btnCreadores->Name = L"btnCreadores";
			this->btnCreadores->Size = System::Drawing::Size(261, 57);
			this->btnCreadores->TabIndex = 11;
			this->btnCreadores->Text = L"Creadores";
			this->btnCreadores->UseVisualStyleBackColor = true;
			// 
			// btnSalir
			// 

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1041, 435);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnCreadores);
			this->Controls->Add(this->btnInstrucciones);
			this->Controls->Add(this->btnDB3);
			this->Controls->Add(this->btnDB2);
			this->Controls->Add(this->btnDB1);
			this->Controls->Add(this->btnAnalisis);
			this->Controls->Add(this->lblMenu);
			this->Controls->Add(this->btnRegistro);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"AI-TRACE | Registro de Bitácora de uso IA";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		Registro^ frm = gcnew Registro();
		frm->ShowDialog();
	}
};
}
