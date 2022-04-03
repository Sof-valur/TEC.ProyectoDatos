#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		int filas = 4;
		int columnas = 4;
		private: System::Windows::Forms::Button^ button1; 
	public:
		Form1(void)
		{
			InitializeComponent();
			int columnasAncho = 1 * columnas / 100;
			int filasAncho = 1 * filas / 100;
			this->tablero = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tablero->ColumnCount = columnas;
			this->tablero->RowCount = filas; 
			this->tablero->Location = System::Drawing::Point(13, 13);
			this->tablero->Name = L"tablero";
			this->tablero->Size = System::Drawing::Size(516, 342);
			this->tablero->TabIndex = 0;
			for (int i = 0; i < columnas; i++)
			{
				this->tablero->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, columnasAncho)));
			}

			for (int i = 0; i < filas; i++)
			{
				this->tablero->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, filasAncho)));
			}

			for (int col = 0; col < columnas; col++)
			{
				for (int fil = 0; fil < filas; fil++)
				{ 
					this->tablero->Controls->Add(createButton(col, fil), col, fil);
				}
			}

			this->Controls->Add(this->tablero);
			this->tablero->ResumeLayout(false);
			this->tablero->BringToFront();

		}

	private: System::Windows::Forms::Button^ createButton(int columna, int fila) {
		System::Windows::Forms::Button^ result  = (gcnew System::Windows::Forms::Button());
		result->Location = System::Drawing::Point(261, 3);
		result->Name = columna + L"x" + fila;
		result->Size = System::Drawing::Size(50, 50);
		result->TabIndex = 0;
		result->Text = columna + L"x" + fila;
		result->UseVisualStyleBackColor = true;
		return result;
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tablero;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tablero = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tablero->SuspendLayout();
			this->SuspendLayout();
			// 
			// tablero
			// 
			/*this->tablero->ColumnCount = 2;
			this->tablero->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tablero->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tablero->Controls->Add(this->button1, 1, 0);
			this->tablero->Location = System::Drawing::Point(13, 13);
			this->tablero->Name = L"tablero";
			this->tablero->RowCount = 2;
			this->tablero->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tablero->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tablero->Size = System::Drawing::Size(516, 342);
			this->tablero->TabIndex = 0;*/
			// 
			// button1
			// 
			/*this->button1->Location = System::Drawing::Point(261, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(252, 165);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;*/
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 446);
			this->Controls->Add(this->tablero);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tablero->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}


