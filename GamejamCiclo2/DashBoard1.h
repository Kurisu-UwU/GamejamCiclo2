#pragma once
#include "DatosTabla.h"
#include "ControladoraDeDatos.h"

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
		DashBoard1(ControladoraDeDatos* controladora)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			controladora2 = controladora;
			controladora2->ObtenerRegistros();
			vector<DatosRegistro> registros = controladora2->ObtenerRegistros();
		}

		void DibujarGraficoBarras(PaintEventArgs^ e) {
			int numtarea = 0;
			int numLB1 = 0;
			int numEA1 = 0;
			int numConceptual = 0;
			int numDepuracion = 0;
			int numEB1 = 0;
			int numReto = 0;
			int numProyecto = 0;
			controladora2->ObtenerRegistros();
			vector<DatosRegistro> registros = controladora2->ObtenerRegistros();
			for (int i = 0; i < registros.size(); i++) {
				if (registros[i].getCategoria() == "Tarea") { numtarea++; }
				if (registros[i].getCategoria() == "LB1") { numLB1++; }
				if (registros[i].getCategoria() == "EA1") { numEA1++; }
				if (registros[i].getCategoria() == "Consulta Conceptual") { numConceptual++; }
				if (registros[i].getCategoria() == "Depuracion de errores") { numDepuracion++; }
				if (registros[i].getCategoria() == "EB1") { numEB1++; }
				if (registros[i].getCategoria() == "Reto") { numReto++; }
				if (registros[i].getCategoria() == "Proyecto") { numProyecto++; }
			}
			int total = numtarea + numLB1 + numEA1 + numConceptual + numDepuracion + numEB1 + numReto + numProyecto;

			

			SolidBrush^ pincelTarea = gcnew SolidBrush(Color::Red);
			SolidBrush^ pincelLB1 = gcnew SolidBrush(Color::Blue);
			SolidBrush^ pincelEA1 = gcnew SolidBrush(Color::Green);
			SolidBrush^ pincelConceptual = gcnew SolidBrush(Color::Yellow);
			SolidBrush^ pincelDepuracion = gcnew SolidBrush(Color::Purple);
			SolidBrush^ pincelEB1 = gcnew SolidBrush(Color::Orange);
			SolidBrush^ pincelReto = gcnew SolidBrush(Color::GreenYellow);
			SolidBrush^ pincelProyecto = gcnew SolidBrush(Color::Aqua);
			e->Graphics->FillRectangle(pincelTarea, 40, 50 + 180 - numtarea * (180 / total), 30, numtarea*(180/total));
			e->Graphics->FillRectangle(pincelLB1, 80, 50 + 180 - numLB1 * (180 / total), 30, numLB1 * (180 / total));
			e->Graphics->FillRectangle(pincelEA1, 120, 50 + 180 - numEA1 * (180 / total), 30, numEA1 * (180 / total));
			e->Graphics->FillRectangle(pincelConceptual, 160, 50 + 180 - numConceptual * (180 / total), 30, numConceptual * (180 / total));
			e->Graphics->FillRectangle(pincelDepuracion, 200, 50 + 180 - numDepuracion * (180 / total), 30, numDepuracion * (180 / total));
			e->Graphics->FillRectangle(pincelEB1, 240, 50 + 180 - numEB1 * (180 / total), 30, numEB1 * (180 / total));
			e->Graphics->FillRectangle(pincelReto, 280, 50 + 180 - numReto * (180 / total), 30, numReto * (180 / total));
			e->Graphics->FillRectangle(pincelProyecto, 320, 50 + 180 - numProyecto * (180 / total), 30, numProyecto * (180 / total));
		}

		void DibujarGraficoCircular(PaintEventArgs^ e) {



			SolidBrush^ pincelCalculo = gcnew SolidBrush(Color::Red);
			SolidBrush^ pincelAlgoritmos = gcnew SolidBrush(Color::Blue);
			SolidBrush^ pincelODE = gcnew SolidBrush(Color::Orange);
			SolidBrush^ pincelSIA = gcnew SolidBrush(Color::Green);
			SolidBrush^ pincelAIS = gcnew SolidBrush(Color::Yellow);
			e->Graphics->FillPie(pincelCalculo, 500, 60, 200, 200, 0, 72);
			e->Graphics->FillPie(pincelAlgoritmos, 500, 60, 200, 200, 72, 72);
			e->Graphics->FillPie(pincelODE, 500, 60, 200, 200, 144, 72);
			e->Graphics->FillPie(pincelSIA, 500, 60, 200, 200, 216, 72);
			e->Graphics->FillPie(pincelAIS, 500, 60, 200, 200, 288, 72);
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
	private: System::Windows::Forms::Label^ lblBarras;
	private: System::Windows::Forms::Label^ lblCursos;
	private: System::Windows::Forms::Label^ lblCalculo;
	private: System::Windows::Forms::Label^ lblAIS;
	private: System::Windows::Forms::Label^ lblAlgoritmos;
	private: System::Windows::Forms::Label^ lblODE;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblEB1;





	private: System::Windows::Forms::Label^ lblEA1;

	private: System::Windows::Forms::Label^ lblLB1;
	private: System::Windows::Forms::Label^ lblReto;


	private: System::Windows::Forms::Label^ lblTarea;
	private: System::Windows::Forms::Label^ lblProyecto;
	private: System::Windows::Forms::Label^ lblConceptual;
	private: System::Windows::Forms::Label^ lblDepuracion;



		   ControladoraDeDatos* controladora2;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblBarras = (gcnew System::Windows::Forms::Label());
			this->lblCursos = (gcnew System::Windows::Forms::Label());
			this->lblCalculo = (gcnew System::Windows::Forms::Label());
			this->lblAIS = (gcnew System::Windows::Forms::Label());
			this->lblAlgoritmos = (gcnew System::Windows::Forms::Label());
			this->lblODE = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblEB1 = (gcnew System::Windows::Forms::Label());
			this->lblEA1 = (gcnew System::Windows::Forms::Label());
			this->lblLB1 = (gcnew System::Windows::Forms::Label());
			this->lblReto = (gcnew System::Windows::Forms::Label());
			this->lblTarea = (gcnew System::Windows::Forms::Label());
			this->lblProyecto = (gcnew System::Windows::Forms::Label());
			this->lblConceptual = (gcnew System::Windows::Forms::Label());
			this->lblDepuracion = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblBarras
			// 
			this->lblBarras->AutoSize = true;
			this->lblBarras->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBarras->Location = System::Drawing::Point(12, 22);
			this->lblBarras->Name = L"lblBarras";
			this->lblBarras->Size = System::Drawing::Size(405, 22);
			this->lblBarras->TabIndex = 0;
			this->lblBarras->Text = L"Registro de categorias en las que más se usa la IA";
			// 
			// lblCursos
			// 
			this->lblCursos->AutoSize = true;
			this->lblCursos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCursos->Location = System::Drawing::Point(637, 22);
			this->lblCursos->Name = L"lblCursos";
			this->lblCursos->Size = System::Drawing::Size(376, 22);
			this->lblCursos->TabIndex = 1;
			this->lblCursos->Text = L"Registro de cursos en los que más se usa la IA";
			// 
			// lblCalculo
			// 
			this->lblCalculo->AutoSize = true;
			this->lblCalculo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCalculo->Location = System::Drawing::Point(677, 323);
			this->lblCalculo->Name = L"lblCalculo";
			this->lblCalculo->Size = System::Drawing::Size(71, 19);
			this->lblCalculo->TabIndex = 2;
			this->lblCalculo->Text = L"Calculo I";
			// 
			// lblAIS
			// 
			this->lblAIS->AutoSize = true;
			this->lblAIS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAIS->Location = System::Drawing::Point(677, 436);
			this->lblAIS->Name = L"lblAIS";
			this->lblAIS->Size = System::Drawing::Size(275, 19);
			this->lblAIS->TabIndex = 3;
			this->lblAIS->Text = L"Aplicaciones de Ingeniería de Software";
			// 
			// lblAlgoritmos
			// 
			this->lblAlgoritmos->AutoSize = true;
			this->lblAlgoritmos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlgoritmos->Location = System::Drawing::Point(677, 351);
			this->lblAlgoritmos->Name = L"lblAlgoritmos";
			this->lblAlgoritmos->Size = System::Drawing::Size(87, 19);
			this->lblAlgoritmos->TabIndex = 4;
			this->lblAlgoritmos->Text = L"Algoritmos";
			// 
			// lblODE
			// 
			this->lblODE->AutoSize = true;
			this->lblODE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblODE->Location = System::Drawing::Point(677, 379);
			this->lblODE->Name = L"lblODE";
			this->lblODE->Size = System::Drawing::Size(274, 19);
			this->lblODE->TabIndex = 5;
			this->lblODE->Text = L"Organización y Dirección de Empresas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(677, 408);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Seminario de Investigación Académica";
			// 
			// lblEB1
			// 
			this->lblEB1->AutoSize = true;
			this->lblEB1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEB1->Location = System::Drawing::Point(282, 323);
			this->lblEB1->Name = L"lblEB1";
			this->lblEB1->Size = System::Drawing::Size(39, 19);
			this->lblEB1->TabIndex = 11;
			this->lblEB1->Text = L"EB1";
			// 
			// lblEA1
			// 
			this->lblEA1->AutoSize = true;
			this->lblEA1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEA1->Location = System::Drawing::Point(75, 379);
			this->lblEA1->Name = L"lblEA1";
			this->lblEA1->Size = System::Drawing::Size(39, 19);
			this->lblEA1->TabIndex = 10;
			this->lblEA1->Text = L"EA1";
			// 
			// lblLB1
			// 
			this->lblLB1->AutoSize = true;
			this->lblLB1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLB1->Location = System::Drawing::Point(75, 351);
			this->lblLB1->Name = L"lblLB1";
			this->lblLB1->Size = System::Drawing::Size(39, 19);
			this->lblLB1->TabIndex = 9;
			this->lblLB1->Text = L"LB1";
			// 
			// lblReto
			// 
			this->lblReto->AutoSize = true;
			this->lblReto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblReto->Location = System::Drawing::Point(282, 351);
			this->lblReto->Name = L"lblReto";
			this->lblReto->Size = System::Drawing::Size(42, 19);
			this->lblReto->TabIndex = 8;
			this->lblReto->Text = L"Reto";
			// 
			// lblTarea
			// 
			this->lblTarea->AutoSize = true;
			this->lblTarea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTarea->Location = System::Drawing::Point(75, 323);
			this->lblTarea->Name = L"lblTarea";
			this->lblTarea->Size = System::Drawing::Size(45, 19);
			this->lblTarea->TabIndex = 7;
			this->lblTarea->Text = L"Tarea";
			// 
			// lblProyecto
			// 
			this->lblProyecto->AutoSize = true;
			this->lblProyecto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProyecto->Location = System::Drawing::Point(282, 380);
			this->lblProyecto->Name = L"lblProyecto";
			this->lblProyecto->Size = System::Drawing::Size(72, 19);
			this->lblProyecto->TabIndex = 12;
			this->lblProyecto->Text = L"Proyecto";
			// 
			// lblConceptual
			// 
			this->lblConceptual->AutoSize = true;
			this->lblConceptual->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConceptual->Location = System::Drawing::Point(75, 408);
			this->lblConceptual->Name = L"lblConceptual";
			this->lblConceptual->Size = System::Drawing::Size(150, 19);
			this->lblConceptual->TabIndex = 13;
			this->lblConceptual->Text = L"Consulta Conceptual";
			// 
			// lblDepuracion
			// 
			this->lblDepuracion->AutoSize = true;
			this->lblDepuracion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDepuracion->Location = System::Drawing::Point(75, 436);
			this->lblDepuracion->Name = L"lblDepuracion";
			this->lblDepuracion->Size = System::Drawing::Size(164, 19);
			this->lblDepuracion->TabIndex = 14;
			this->lblDepuracion->Text = L"Depuracion de Errores";
			// 
			// DashBoard1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 531);
			this->Controls->Add(this->lblDepuracion);
			this->Controls->Add(this->lblConceptual);
			this->Controls->Add(this->lblProyecto);
			this->Controls->Add(this->lblEB1);
			this->Controls->Add(this->lblEA1);
			this->Controls->Add(this->lblLB1);
			this->Controls->Add(this->lblReto);
			this->Controls->Add(this->lblTarea);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblODE);
			this->Controls->Add(this->lblAlgoritmos);
			this->Controls->Add(this->lblAIS);
			this->Controls->Add(this->lblCalculo);
			this->Controls->Add(this->lblCursos);
			this->Controls->Add(this->lblBarras);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DashBoard1";
			this->Text = L"DashBoard1";
			this->Load += gcnew System::EventHandler(this, &DashBoard1::DashBoard1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DashBoard1::DashBoard1_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DashBoard1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DashBoard1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		DibujarGraficoBarras(e);
		DibujarGraficoCircular(e);

	}
	};
}
