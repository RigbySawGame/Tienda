#pragma once

namespace TIENDA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmTambo
	/// </summary>
	public ref class frmTambo : public System::Windows::Forms::Form
	{
	public:
		frmTambo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~frmTambo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  listasEnlazadasToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  compraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  modaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  sALIRToolStripMenuItem;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->listasEnlazadasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->sALIRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->listasEnlazadasToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(700, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// listasEnlazadasToolStripMenuItem
			// 
			this->listasEnlazadasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->compraToolStripMenuItem,
					this->modaToolStripMenuItem, this->toolStripMenuItem1, this->sALIRToolStripMenuItem
			});
			this->listasEnlazadasToolStripMenuItem->Name = L"listasEnlazadasToolStripMenuItem";
			this->listasEnlazadasToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->listasEnlazadasToolStripMenuItem->Text = L"Tambo";
			// 
			// compraToolStripMenuItem
			// 
			this->compraToolStripMenuItem->Name = L"compraToolStripMenuItem";
			this->compraToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->compraToolStripMenuItem->Text = L"Compra";
			this->compraToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmTambo::compraToolStripMenuItem_Click);
			// 
			// modaToolStripMenuItem
			// 
			this->modaToolStripMenuItem->Name = L"modaToolStripMenuItem";
			this->modaToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->modaToolStripMenuItem->Text = L"Moda";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(114, 6);
			// 
			// sALIRToolStripMenuItem
			// 
			this->sALIRToolStripMenuItem->Name = L"sALIRToolStripMenuItem";
			this->sALIRToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->sALIRToolStripMenuItem->Text = L"SALIR";
			this->sALIRToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmTambo::sALIRToolStripMenuItem_Click);
			// 
			// frmTambo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 472);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmTambo";
			this->Text = L"frmTambo";
			this->Load += gcnew System::EventHandler(this, &frmTambo::frmTambo_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmTambo_Load(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void compraToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmColas ^x = gcnew frmColas;
				 x->MdiParent = this;
				 x->Show();
	}
	private: System::Void sALIRToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
	}
};
}
