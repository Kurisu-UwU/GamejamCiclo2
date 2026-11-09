#pragma once
#include "DatosTabla.h"
#include "ControladoraDeDatos.h"
#include "string.h"
#include "sstream"

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
				if (registros[i].getCategoria() == "Depuración de errores") { numDepuracion++; }
				if (registros[i].getCategoria() == "EB1") { numEB1++; }
				if (registros[i].getCategoria() == "Reto") { numReto++; }
				if (registros[i].getCategoria() == "Proyecto") { numProyecto++; }
			}
			int total = numtarea + numLB1 + numEA1 + numConceptual + numDepuracion + numEB1 + numReto + numProyecto;

			int mayor = numtarea;

			if (numLB1 > mayor) mayor = numLB1;
			if (numEA1 > mayor) mayor = numEA1;
			if (numConceptual > mayor) mayor = numConceptual;
			if (numDepuracion > mayor) mayor = numDepuracion;
			if (numEB1 > mayor) mayor = numEB1;
			if (numReto > mayor) mayor = numReto;
			if (numProyecto > mayor) mayor = numProyecto;

			Pen^ lapicero = gcnew Pen(Color::Black);

			SolidBrush^ pincelCalculo = gcnew SolidBrush(Color::Red);
			SolidBrush^ pincelAlgoritmos = gcnew SolidBrush(Color::Blue);
			SolidBrush^ pincelODE = gcnew SolidBrush(Color::Orange);
			SolidBrush^ pincelSIA = gcnew SolidBrush(Color::Green);
			SolidBrush^ pincelAIS = gcnew SolidBrush(Color::Yellow);

			SolidBrush^ pincelTarea = gcnew SolidBrush(Color::Red);
			SolidBrush^ pincelLB1 = gcnew SolidBrush(Color::Blue);
			SolidBrush^ pincelEA1 = gcnew SolidBrush(Color::Green);
			SolidBrush^ pincelConceptual = gcnew SolidBrush(Color::Yellow);
			SolidBrush^ pincelDepuracion = gcnew SolidBrush(Color::Purple);
			SolidBrush^ pincelEB1 = gcnew SolidBrush(Color::Orange);
			SolidBrush^ pincelReto = gcnew SolidBrush(Color::GreenYellow);
			SolidBrush^ pincelProyecto = gcnew SolidBrush(Color::Aqua);
			if (mayor != 0) {
				e->Graphics->FillRectangle(pincelTarea, 40, 50 + 180 - numtarea * (180 / mayor), 30, numtarea * (180 / mayor));
				e->Graphics->FillRectangle(pincelLB1, 80, 50 + 180 - numLB1 * (180 / mayor), 30, numLB1 * (180 / mayor));
				e->Graphics->FillRectangle(pincelEA1, 120, 50 + 180 - numEA1 * (180 / mayor), 30, numEA1 * (180 / mayor));
				e->Graphics->FillRectangle(pincelConceptual, 160, 50 + 180 - numConceptual * (180 / mayor), 30, numConceptual * (180 / mayor));
				e->Graphics->FillRectangle(pincelDepuracion, 200, 50 + 180 - numDepuracion * (180 / mayor), 30, numDepuracion * (180 / mayor));
				e->Graphics->FillRectangle(pincelEB1, 240, 50 + 180 - numEB1 * (180 / mayor), 30, numEB1 * (180 / mayor));
				e->Graphics->FillRectangle(pincelReto, 280, 50 + 180 - numReto * (180 / mayor), 30, numReto * (180 / mayor));
				e->Graphics->FillRectangle(pincelProyecto, 320, 50 + 180 - numProyecto * (180 / mayor), 30, numProyecto * (180 / mayor));

				e->Graphics->FillRectangle(pincelTarea, 30, 260, 19, 19);
				e->Graphics->FillRectangle(pincelLB1, 30, 283, 19, 19);
				e->Graphics->FillRectangle(pincelEA1, 30, 306, 19, 19);
				e->Graphics->FillRectangle(pincelConceptual, 30, 329, 19, 19);
				e->Graphics->FillRectangle(pincelDepuracion, 30, 352, 19, 19);
				e->Graphics->FillRectangle(pincelEB1, 190, 260, 19, 19);
				e->Graphics->FillRectangle(pincelReto, 190, 283, 19, 19);
				e->Graphics->FillRectangle(pincelProyecto, 190, 306, 19, 19);

				e->Graphics->FillRectangle(pincelCalculo, 480, 260, 19, 19);
				e->Graphics->FillRectangle(pincelAlgoritmos, 480, 283, 19, 19);
				e->Graphics->FillRectangle(pincelODE, 480, 306, 19, 19);
				e->Graphics->FillRectangle(pincelSIA, 480, 329, 19, 19);
				e->Graphics->FillRectangle(pincelAIS, 480, 352, 19, 19);

				e->Graphics->DrawLine(lapicero, 360, 230, 19, 230);

				lblnumtarea->Text = gcnew System::String(to_string(numtarea).c_str());
				lblnumLB1->Text = gcnew System::String(to_string(numLB1).c_str());
				lblnumEA1->Text = gcnew System::String(to_string(numEA1).c_str());
				lblnumConceptual->Text = gcnew System::String(to_string(numConceptual).c_str());
				lblnumDepuracion->Text = gcnew System::String(to_string(numDepuracion).c_str());
				lblnumEB1->Text = gcnew System::String(to_string(numEB1).c_str());
				lblnumReto->Text = gcnew System::String(to_string(numReto).c_str());
				lblnumProyecto->Text = gcnew System::String(to_string(numProyecto).c_str());
			}
			else {
				lblError->Text = "               No se han registrado datos";
				e->Graphics->FillRectangle(pincelTarea, 30, 260, 19, 19);
				e->Graphics->FillRectangle(pincelLB1, 30, 283, 19, 19);
				e->Graphics->FillRectangle(pincelEA1, 30, 306, 19, 19);
				e->Graphics->FillRectangle(pincelConceptual, 30, 329, 19, 19);
				e->Graphics->FillRectangle(pincelDepuracion, 30, 352, 19, 19);
				e->Graphics->FillRectangle(pincelEB1, 190, 260, 19, 19);
				e->Graphics->FillRectangle(pincelReto, 190, 283, 19, 19);
				e->Graphics->FillRectangle(pincelProyecto, 190, 306, 19, 19);


				e->Graphics->FillRectangle(pincelCalculo, 480, 260, 19, 19);
				e->Graphics->FillRectangle(pincelAlgoritmos, 480, 283, 19, 19);
				e->Graphics->FillRectangle(pincelODE, 480, 306, 19, 19);
				e->Graphics->FillRectangle(pincelSIA, 480, 329, 19, 19);
				e->Graphics->FillRectangle(pincelAIS, 480, 352, 19, 19);
			}
			

		}

		void DibujarGraficoCircular(PaintEventArgs^ e) {
			int numCalculo = 0;
			int numAlgoritmos = 0;
			int numODE = 0;
			int numSIA = 0;
			int numAIS = 0;
			vector<DatosRegistro> registros = controladora2->ObtenerRegistros();

			for (int i = 0; i < registros.size(); i++) {
				if (registros[i].getCurso() == "Calculo I") { numCalculo++; }
				if (registros[i].getCurso() == "Algoritmos") { numAlgoritmos++; }
				if (registros[i].getCurso() == "Organizacion y Direccion de Empresas") { numODE++; }
				if (registros[i].getCurso() == "Seminario de Investigacion Academica") { numSIA++; }
				if (registros[i].getCurso() == "Aplicaciones de ingenieria de Software") { numAIS++; }
			}

			float total = (float)(numCalculo + numAlgoritmos + numODE + numSIA + numAIS);

			if (total == 0) return;

			SolidBrush^ pincelCalculo = gcnew SolidBrush(Color::Red);
			SolidBrush^ pincelAlgoritmos = gcnew SolidBrush(Color::Blue);
			SolidBrush^ pincelODE = gcnew SolidBrush(Color::Orange);
			SolidBrush^ pincelSIA = gcnew SolidBrush(Color::Green);
			SolidBrush^ pincelAIS = gcnew SolidBrush(Color::Yellow);

			float anguloCalculo = (numCalculo / total) * 360.0f;
			float anguloAlgoritmos = (numAlgoritmos / total) * 360.0f;
			float anguloODE = (numODE / total) * 360.0f;
			float anguloSIA = (numSIA / total) * 360.0f;
			float anguloAIS = (numAIS / total) * 360.0f;

			float anguloActual = 0.0f;

			e->Graphics->FillPie(pincelCalculo, 495.0f, 60.0f, 200.0f, 200.0f, anguloActual, anguloCalculo);
			anguloActual += anguloCalculo;

			e->Graphics->FillPie(pincelAlgoritmos, 495.0f, 60.0f, 200.0f, 200.0f, anguloActual, anguloAlgoritmos);
			anguloActual += anguloAlgoritmos;

			e->Graphics->FillPie(pincelODE, 495.0f, 60.0f, 200.0f, 200.0f, anguloActual, anguloODE);
			anguloActual += anguloODE;

			e->Graphics->FillPie(pincelSIA, 495.0f, 60.0f, 200.0f, 200.0f, anguloActual, anguloSIA);
			anguloActual += anguloSIA;

			e->Graphics->FillPie(pincelAIS, 495.0f, 60.0f, 200.0f, 200.0f, anguloActual, anguloAIS);

			label2->Text = gcnew System::String(to_string(numCalculo * (100 / total)).c_str()) + "%";
			label3->Text = gcnew System::String(to_string(numAlgoritmos * (100 / total)).c_str()) + "%";
			label4->Text = gcnew System::String(to_string(numODE * (100 / total)).c_str()) + "%";
			label5->Text = gcnew System::String(to_string(numSIA * (100 / total)).c_str()) + "%";
			label6->Text = gcnew System::String(to_string(numAIS * (100 / total)).c_str()) + "%";

		}

		void Hallazgo3(PaintEventArgs^ e) {

			int numEnero = 0;
			int numFebrero = 0;
			int numMarzo = 0;
			int numAbril = 0;
			int numMayo = 0;
			int numJunio = 0;
			int numJulio = 0;
			int numAgosto = 0;
			int numSeptiembre = 0;
			int numOctubre = 0;
			int numNoviembre = 0;
			int numDiciembre = 0;

			vector<DatosRegistro> registros = controladora2->ObtenerRegistros();
			for (int i = 0; i < registros.size(); i++) {
				std::string fechaactual = registros[i].getFecha();
				int dia, mes, anio;
				char barra;
				std::stringstream ss(fechaactual);
				ss >> dia >> barra >> mes >> barra >> anio;
				if (mes == 1) { numEnero++; }
				if (mes == 2) { numFebrero++; }
				if (mes == 3) { numMarzo++; }
				if (mes == 4) { numAbril++; }
				if (mes == 5) { numMayo++; }
				if (mes == 6) { numJunio++; }
				if (mes == 7) { numJulio++; }
				if (mes == 8) { numAgosto++; }
				if (mes == 9) { numSeptiembre++; }
				if (mes == 10) { numOctubre++; }
				if (mes == 11) { numNoviembre++; }
				if (mes == 12) { numDiciembre++; }
			}
			int mayor = numEnero;
			if (numFebrero > mayor) mayor = numFebrero;
			if (numMarzo > mayor) mayor = numMarzo;
			if (numAbril > mayor) mayor = numAbril;
			if (numMayo > mayor) mayor = numMayo;
			if (numJunio > mayor) mayor = numJunio;
			if (numJulio > mayor) mayor = numJulio;
			if (numAgosto > mayor) mayor = numAgosto;
			if (numSeptiembre > mayor) mayor = numSeptiembre;
			if (numOctubre > mayor) mayor = numOctubre;
			if (numNoviembre > mayor) mayor = numNoviembre;
			if (numDiciembre > mayor) mayor = numDiciembre;

			vector<string> mesesmayores;
			if (numEnero == mayor) { mesesmayores.push_back("Enero"); }
			if (numFebrero == mayor) { mesesmayores.push_back("Febrero"); }
			if (numMarzo == mayor) { mesesmayores.push_back("Marzo"); }
			if (numAbril == mayor) { mesesmayores.push_back("Abril"); }
			if (numMayo == mayor) { mesesmayores.push_back("Mayo"); }
			if (numJunio == mayor) { mesesmayores.push_back("Junio"); }
			if (numJulio == mayor) { mesesmayores.push_back("Julio"); }
			if (numAgosto == mayor) { mesesmayores.push_back("Agosto"); }
			if (numSeptiembre == mayor) { mesesmayores.push_back("Septiembre"); }
			if (numOctubre == mayor) { mesesmayores.push_back("Octubre"); }
			if (numNoviembre == mayor) { mesesmayores.push_back("Noviembre"); }
			if (numDiciembre == mayor) { mesesmayores.push_back("Diciembre"); }

			string Hallazgo = "Mes o Meses de mayor uso de IA: ";
			for (int i = 0; i < mesesmayores.size(); i++) {
				if (i == 0) {
					Hallazgo += mesesmayores[i];
				}
				else {
					Hallazgo += ", " + mesesmayores[i];
				}

			}

			lblTercerHallazgo->Text = gcnew System::String(Hallazgo.c_str());
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
private: System::Windows::Forms::Label^ lblnumtarea;
private: System::Windows::Forms::Label^ lblnumLB1;
private: System::Windows::Forms::Label^ lblnumConceptual;

private: System::Windows::Forms::Label^ lblnumEA1;
private: System::Windows::Forms::Label^ lblnumEB1;


private: System::Windows::Forms::Label^ lblnumDepuracion;
private: System::Windows::Forms::Label^ lblnumProyecto;


private: System::Windows::Forms::Label^ lblnumReto;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ lblTercerHallazgo;
private: System::Windows::Forms::Label^ lblError;






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
			this->lblnumtarea = (gcnew System::Windows::Forms::Label());
			this->lblnumLB1 = (gcnew System::Windows::Forms::Label());
			this->lblnumConceptual = (gcnew System::Windows::Forms::Label());
			this->lblnumEA1 = (gcnew System::Windows::Forms::Label());
			this->lblnumEB1 = (gcnew System::Windows::Forms::Label());
			this->lblnumDepuracion = (gcnew System::Windows::Forms::Label());
			this->lblnumProyecto = (gcnew System::Windows::Forms::Label());
			this->lblnumReto = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblTercerHallazgo = (gcnew System::Windows::Forms::Label());
			this->lblError = (gcnew System::Windows::Forms::Label());
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
			this->lblCalculo->Size = System::Drawing::Size(76, 19);
			this->lblCalculo->TabIndex = 2;
			this->lblCalculo->Text = L"Calculo I:";
			// 
			// lblAIS
			// 
			this->lblAIS->AutoSize = true;
			this->lblAIS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAIS->Location = System::Drawing::Point(677, 436);
			this->lblAIS->Name = L"lblAIS";
			this->lblAIS->Size = System::Drawing::Size(280, 19);
			this->lblAIS->TabIndex = 3;
			this->lblAIS->Text = L"Aplicaciones de Ingeniería de Software:";
			// 
			// lblAlgoritmos
			// 
			this->lblAlgoritmos->AutoSize = true;
			this->lblAlgoritmos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAlgoritmos->Location = System::Drawing::Point(677, 351);
			this->lblAlgoritmos->Name = L"lblAlgoritmos";
			this->lblAlgoritmos->Size = System::Drawing::Size(92, 19);
			this->lblAlgoritmos->TabIndex = 4;
			this->lblAlgoritmos->Text = L"Algoritmos:";
			// 
			// lblODE
			// 
			this->lblODE->AutoSize = true;
			this->lblODE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblODE->Location = System::Drawing::Point(677, 379);
			this->lblODE->Name = L"lblODE";
			this->lblODE->Size = System::Drawing::Size(279, 19);
			this->lblODE->TabIndex = 5;
			this->lblODE->Text = L"Organización y Dirección de Empresas:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(677, 408);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Seminario de Investigación Académica:";
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
			// lblnumtarea
			// 
			this->lblnumtarea->AutoSize = true;
			this->lblnumtarea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumtarea->Location = System::Drawing::Point(60, 287);
			this->lblnumtarea->Name = L"lblnumtarea";
			this->lblnumtarea->Size = System::Drawing::Size(13, 19);
			this->lblnumtarea->TabIndex = 15;
			this->lblnumtarea->Text = L" ";
			// 
			// lblnumLB1
			// 
			this->lblnumLB1->AutoSize = true;
			this->lblnumLB1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumLB1->Location = System::Drawing::Point(113, 287);
			this->lblnumLB1->Name = L"lblnumLB1";
			this->lblnumLB1->Size = System::Drawing::Size(13, 19);
			this->lblnumLB1->TabIndex = 16;
			this->lblnumLB1->Text = L" ";
			// 
			// lblnumConceptual
			// 
			this->lblnumConceptual->AutoSize = true;
			this->lblnumConceptual->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumConceptual->Location = System::Drawing::Point(221, 287);
			this->lblnumConceptual->Name = L"lblnumConceptual";
			this->lblnumConceptual->Size = System::Drawing::Size(13, 19);
			this->lblnumConceptual->TabIndex = 18;
			this->lblnumConceptual->Text = L" ";
			// 
			// lblnumEA1
			// 
			this->lblnumEA1->AutoSize = true;
			this->lblnumEA1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumEA1->Location = System::Drawing::Point(168, 287);
			this->lblnumEA1->Name = L"lblnumEA1";
			this->lblnumEA1->Size = System::Drawing::Size(13, 19);
			this->lblnumEA1->TabIndex = 17;
			this->lblnumEA1->Text = L" ";
			// 
			// lblnumEB1
			// 
			this->lblnumEB1->AutoSize = true;
			this->lblnumEB1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumEB1->Location = System::Drawing::Point(325, 287);
			this->lblnumEB1->Name = L"lblnumEB1";
			this->lblnumEB1->Size = System::Drawing::Size(13, 19);
			this->lblnumEB1->TabIndex = 20;
			this->lblnumEB1->Text = L" ";
			// 
			// lblnumDepuracion
			// 
			this->lblnumDepuracion->AutoSize = true;
			this->lblnumDepuracion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumDepuracion->Location = System::Drawing::Point(272, 287);
			this->lblnumDepuracion->Name = L"lblnumDepuracion";
			this->lblnumDepuracion->Size = System::Drawing::Size(13, 19);
			this->lblnumDepuracion->TabIndex = 19;
			this->lblnumDepuracion->Text = L" ";
			// 
			// lblnumProyecto
			// 
			this->lblnumProyecto->AutoSize = true;
			this->lblnumProyecto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumProyecto->Location = System::Drawing::Point(430, 287);
			this->lblnumProyecto->Name = L"lblnumProyecto";
			this->lblnumProyecto->Size = System::Drawing::Size(13, 19);
			this->lblnumProyecto->TabIndex = 22;
			this->lblnumProyecto->Text = L" ";
			// 
			// lblnumReto
			// 
			this->lblnumReto->AutoSize = true;
			this->lblnumReto->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumReto->Location = System::Drawing::Point(377, 287);
			this->lblnumReto->Name = L"lblnumReto";
			this->lblnumReto->Size = System::Drawing::Size(13, 19);
			this->lblnumReto->TabIndex = 21;
			this->lblnumReto->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1015, 323);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 19);
			this->label2->TabIndex = 23;
			this->label2->Text = L" ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1015, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 19);
			this->label3->TabIndex = 24;
			this->label3->Text = L" ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1015, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 19);
			this->label4->TabIndex = 25;
			this->label4->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1015, 408);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 19);
			this->label5->TabIndex = 26;
			this->label5->Text = L" ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1015, 436);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 19);
			this->label6->TabIndex = 27;
			this->label6->Text = L" ";
			// 
			// lblTercerHallazgo
			// 
			this->lblTercerHallazgo->AutoSize = true;
			this->lblTercerHallazgo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTercerHallazgo->Location = System::Drawing::Point(19, 473);
			this->lblTercerHallazgo->Name = L"lblTercerHallazgo";
			this->lblTercerHallazgo->Size = System::Drawing::Size(39, 37);
			this->lblTercerHallazgo->TabIndex = 28;
			this->lblTercerHallazgo->Text = L"R";
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblError->Location = System::Drawing::Point(4, 132);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(44, 68);
			this->lblError->TabIndex = 29;
			this->lblError->Text = L" ";
			// 
			// DashBoard1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 531);
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->lblTercerHallazgo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblnumProyecto);
			this->Controls->Add(this->lblnumReto);
			this->Controls->Add(this->lblnumEB1);
			this->Controls->Add(this->lblnumDepuracion);
			this->Controls->Add(this->lblnumConceptual);
			this->Controls->Add(this->lblnumEA1);
			this->Controls->Add(this->lblnumLB1);
			this->Controls->Add(this->lblnumtarea);
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
		Hallazgo3(e);
	}
	};
}
