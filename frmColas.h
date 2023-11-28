#pragma once

namespace TIENDA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Resumen de frmColas
	/// </summary>
	public ref class frmColas : public System::Windows::Forms::Form
	{
	public:
		frmColas(void)
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
		~frmColas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtCodigo;
	private: System::Windows::Forms::TextBox^  txtProducto;
	private: System::Windows::Forms::TextBox^  txtCantidad;
	private: System::Windows::Forms::ComboBox^  cmbVendedor;




	private: System::Windows::Forms::TextBox^  txtPrecio;
	private: System::Windows::Forms::DateTimePicker^  dtpFecVenc;
	private: System::Windows::Forms::DataGridView^  dgvLista;
	private: System::Windows::Forms::Button^  btnInsertar;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmColas::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->txtProducto = (gcnew System::Windows::Forms::TextBox());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->cmbVendedor = (gcnew System::Windows::Forms::ComboBox());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->dtpFecVenc = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(40, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(40, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Producto:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(40, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cantidad:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(283, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Vended@r:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(283, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Fecha:";
			// 
			// txtCodigo
			// 
			this->txtCodigo->Location = System::Drawing::Point(109, 27);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(115, 20);
			this->txtCodigo->TabIndex = 6;
			//this->txtCodigo->TextChanged += gcnew System::EventHandler(this, &frmColas::txtCodigo_TextChanged);
			this->txtCodigo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmColas::txtCodigo_KeyPress);
			// 
			// txtProducto
			// 
			this->txtProducto->Location = System::Drawing::Point(109, 59);
			this->txtProducto->Name = L"txtProducto";
			this->txtProducto->Size = System::Drawing::Size(115, 20);
			this->txtProducto->TabIndex = 7;
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(109, 93);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(59, 20);
			this->txtCantidad->TabIndex = 8;
			// 
			// cmbVendedor
			// 
			this->cmbVendedor->FormattingEnabled = true;
			this->cmbVendedor->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Lizet Muñoz Montenegro", L"Jose Suarez Valvoa",
					L"Diana Carolina Vilela", L"Gustavo Zaldivar", L"Kevin Miranda"
			});
			this->cmbVendedor->Location = System::Drawing::Point(350, 59);
			this->cmbVendedor->Name = L"cmbVendedor";
			this->cmbVendedor->Size = System::Drawing::Size(139, 21);
			this->cmbVendedor->TabIndex = 9;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(350, 28);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(100, 20);
			this->txtPrecio->TabIndex = 10;
			// 
			// dtpFecVenc
			// 
			this->dtpFecVenc->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFecVenc->Location = System::Drawing::Point(350, 92);
			this->dtpFecVenc->Name = L"dtpFecVenc";
			this->dtpFecVenc->Size = System::Drawing::Size(87, 20);
			this->dtpFecVenc->TabIndex = 11;
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1, this->Column6,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dgvLista->Location = System::Drawing::Point(22, 143);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(619, 208);
			this->dgvLista->TabIndex = 12;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Producto";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cantidad";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Vendedor";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"fecha";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(59, 369);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(84, 31);
			this->btnInsertar->TabIndex = 13;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &frmColas::btnInsertar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(286, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Precio:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 31);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmColas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(510, 369);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 31);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmColas::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(510, 32);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// frmColas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Purple;
			this->ClientSize = System::Drawing::Size(663, 434);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnInsertar);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->dtpFecVenc);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->cmbVendedor);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->txtProducto);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmColas";
			this->Text = L"frmColas";
			this->Load += gcnew System::EventHandler(this, &frmColas::frmColas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void imprimir(){
		dgvLista->Rows->Clear();

		boletas *ia=new boletas, *fa;
			fa = new boletas;
		ia = fa = NULL; 
		int ta = 0;
		while (!estaVacia(topC))
		{
			imprime dato = DesenColar(topC, InC, FiC);
			dgvLista->Rows->Add(gcnew String(dato.produc.codigo)
				, gcnew String(dato.produc.nombreP)
				, gcnew String(dato.produc.cantidad + "")
				, gcnew String(dato.produc.precio + "")
				, gcnew String(dato.ven.nombreV )
				, gcnew String(dato.fecVencimiento.d + "/" + dato.fecVencimiento.m + "/" + dato.fecVencimiento.a)
				);
			Encolar(ta, lim, dato, ia, fa);
		}
		while (!estaVacia(ta))
		{
			imprime dato = DesenColar(ta, ia, fa);
			Encolar(topC, lim, dato, InC, FiC);
		}
		}

	private: System::Void frmColas_Load(System::Object^  sender, System::EventArgs^  e) {
				 imprimir();
	}
	private: System::Void btnInsertar_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^m; IntPtr ptr; char *copia;
			 imprime p;
			 m = txtCodigo->Text;
			 ptr = Marshal::StringToHGlobalAnsi(m);
			 copia = static_cast<char*>(ptr.ToPointer());
			 strcpy_s(p.produc.codigo, copia);

			 m = txtProducto->Text;
			 ptr = Marshal::StringToHGlobalAnsi(m);
			 copia = static_cast<char*>(ptr.ToPointer());
			 strcpy_s(p.produc.nombreP, copia);

			 m = cmbVendedor->Text;
			 ptr = Marshal::StringToHGlobalAnsi(m);
			 copia = static_cast<char*>(ptr.ToPointer());
			 strcpy_s(p.ven.nombreV, copia);

			 /*p.ven.nombreV = Convert:ToInt(cmbVendedor->; */
			 p.produc.precio = Convert::ToDouble(txtPrecio->Text);
			 p.produc.cantidad = Convert::ToDouble(txtCantidad->Text);
			 p.fecVencimiento.a = Convert::ToInt32(dtpFecVenc->Value.Year);
			 p.fecVencimiento.m = Convert::ToInt32(dtpFecVenc->Value.Month);
			 p.fecVencimiento.d = Convert::ToInt32(dtpFecVenc->Value.Day);
			 //insertarNodo(Ini, Fin, p);
			 Encolar(topC, lim, p, InC, FiC);
			 imprimir();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	
			 DesenColar(topC, InC, FiC);
			 imprimir();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}

private: System::Void txtCodigo_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e.KeyChar >= 32 && e.KeyChar <= 47) || (e.keyChar >= 58 && e.KeyChar <= 255)){
				 MessageBox.Show("solo numeros mayores a 0", "advertencia", MessageBoxButtons.ok, MessageBoxIcon.Exclamation);
				 e.Handled = true;
				 return;
		}
}
};
}
