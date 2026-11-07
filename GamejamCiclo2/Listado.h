#pragma once

namespace GamejamCiclo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Listado
	/// </summary>
	public ref class Listado : public System::Windows::Forms::Form
	{
	public:
		Listado(void)
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
		~Listado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbHerramienta;
	protected:
	private: System::Windows::Forms::ComboBox^ cbCurso;
	private: System::Windows::Forms::ComboBox^ cbCategoria;
	private: System::Windows::Forms::Label^ lblIA;
	private: System::Windows::Forms::Label^ lblCategoria;
	private: System::Windows::Forms::Label^ lblCurso;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::Label^ lblVerificados;
	private: System::Windows::Forms::Label^ lblNoVerificados;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Curso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Herramienta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Consulta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Validado;






















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
			this->cbHerramienta = (gcnew System::Windows::Forms::ComboBox());
			this->cbCurso = (gcnew System::Windows::Forms::ComboBox());
			this->cbCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->lblIA = (gcnew System::Windows::Forms::Label());
			this->lblCategoria = (gcnew System::Windows::Forms::Label());
			this->lblCurso = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->lblVerificados = (gcnew System::Windows::Forms::Label());
			this->lblNoVerificados = (gcnew System::Windows::Forms::Label());
			this->Numero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Curso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Herramienta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Consulta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Validado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// cbHerramienta
			// 
			this->cbHerramienta->FormattingEnabled = true;
			this->cbHerramienta->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Gemini", L"Chat gpt", L"Claude", L"Copilot" });
			this->cbHerramienta->Location = System::Drawing::Point(484, 37);
			this->cbHerramienta->Name = L"cbHerramienta";
			this->cbHerramienta->Size = System::Drawing::Size(221, 24);
			this->cbHerramienta->TabIndex = 33;
			// 
			// cbCurso
			// 
			this->cbCurso->FormattingEnabled = true;
			this->cbCurso->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Cálculo I", L"Algoritmos", L"Organización y Dirección de Empresas",
					L"Aplicaciones de ingeniería de Software", L"Seminario de Investigación Académica"
			});
			this->cbCurso->Location = System::Drawing::Point(12, 37);
			this->cbCurso->Name = L"cbCurso";
			this->cbCurso->Size = System::Drawing::Size(221, 24);
			this->cbCurso->TabIndex = 32;
			// 
			// cbCategoria
			// 
			this->cbCategoria->FormattingEnabled = true;
			this->cbCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Tarea", L"Examen", L"LB1", L"EA1", L"EB1",
					L"Reto", L"Proyecto", L"Consulta Conceptual", L"Depuración de errores"
			});
			this->cbCategoria->Location = System::Drawing::Point(248, 37);
			this->cbCategoria->Name = L"cbCategoria";
			this->cbCategoria->Size = System::Drawing::Size(221, 24);
			this->cbCategoria->TabIndex = 31;
			// 
			// lblIA
			// 
			this->lblIA->AutoSize = true;
			this->lblIA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIA->Location = System::Drawing::Point(484, 12);
			this->lblIA->Name = L"lblIA";
			this->lblIA->Size = System::Drawing::Size(139, 22);
			this->lblIA->TabIndex = 30;
			this->lblIA->Text = L"Herramienta IA:";
			// 
			// lblCategoria
			// 
			this->lblCategoria->AutoSize = true;
			this->lblCategoria->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCategoria->Location = System::Drawing::Point(248, 12);
			this->lblCategoria->Name = L"lblCategoria";
			this->lblCategoria->Size = System::Drawing::Size(187, 22);
			this->lblCategoria->TabIndex = 29;
			this->lblCategoria->Text = L"Categoría de consulta:";
			// 
			// lblCurso
			// 
			this->lblCurso->AutoSize = true;
			this->lblCurso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCurso->Location = System::Drawing::Point(12, 12);
			this->lblCurso->Name = L"lblCurso";
			this->lblCurso->Size = System::Drawing::Size(63, 22);
			this->lblCurso->TabIndex = 28;
			this->lblCurso->Text = L"Curso:";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->Location = System::Drawing::Point(752, 12);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(160, 48);
			this->btnBuscar->TabIndex = 34;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->Location = System::Drawing::Point(939, 12);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(160, 48);
			this->btnLimpiar->TabIndex = 35;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Numero,
					this->Fecha, this->Curso, this->Categoría, this->Herramienta, this->Consulta, this->Validado
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 76);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(860, 72);
			this->dataGridView1->TabIndex = 36;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Listado::dataGridView1_CellContentClick);
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(12, 484);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(161, 22);
			this->lblTotal->TabIndex = 37;
			this->lblTotal->Text = L"Total de Registros:";
			// 
			// lblVerificados
			// 
			this->lblVerificados->AutoSize = true;
			this->lblVerificados->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVerificados->Location = System::Drawing::Point(248, 484);
			this->lblVerificados->Name = L"lblVerificados";
			this->lblVerificados->Size = System::Drawing::Size(107, 22);
			this->lblVerificados->TabIndex = 38;
			this->lblVerificados->Text = L"Verificados:";
			// 
			// lblNoVerificados
			// 
			this->lblNoVerificados->AutoSize = true;
			this->lblNoVerificados->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoVerificados->Location = System::Drawing::Point(484, 484);
			this->lblNoVerificados->Name = L"lblNoVerificados";
			this->lblNoVerificados->Size = System::Drawing::Size(136, 22);
			this->lblNoVerificados->TabIndex = 39;
			this->lblNoVerificados->Text = L"No Verificados:";
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
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->MinimumWidth = 6;
			this->Fecha->Name = L"Fecha";
			this->Fecha->Width = 120;
			// 
			// Curso
			// 
			this->Curso->HeaderText = L"Curso";
			this->Curso->MinimumWidth = 6;
			this->Curso->Name = L"Curso";
			this->Curso->Width = 120;
			// 
			// Categoría
			// 
			this->Categoría->HeaderText = L"Categoria";
			this->Categoría->MinimumWidth = 6;
			this->Categoría->Name = L"Categoría";
			this->Categoría->Width = 120;
			// 
			// Herramienta
			// 
			this->Herramienta->HeaderText = L"Herramienta";
			this->Herramienta->MinimumWidth = 6;
			this->Herramienta->Name = L"Herramienta";
			// 
			// Consulta
			// 
			this->Consulta->HeaderText = L"Consulta";
			this->Consulta->MinimumWidth = 6;
			this->Consulta->Name = L"Consulta";
			this->Consulta->Width = 200;
			// 
			// Validado
			// 
			this->Validado->HeaderText = L"Validado";
			this->Validado->MinimumWidth = 6;
			this->Validado->Name = L"Validado";
			this->Validado->Width = 80;
			// 
			// Listado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1170, 528);
			this->Controls->Add(this->lblNoVerificados);
			this->Controls->Add(this->lblVerificados);
			this->Controls->Add(this->lblTotal);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->cbHerramienta);
			this->Controls->Add(this->cbCurso);
			this->Controls->Add(this->cbCategoria);
			this->Controls->Add(this->lblIA);
			this->Controls->Add(this->lblCategoria);
			this->Controls->Add(this->lblCurso);
			this->Name = L"Listado";
			this->Text = L"Listado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
