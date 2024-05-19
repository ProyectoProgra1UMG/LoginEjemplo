#pragma once
#include "MySQLConnector.h"
//#include "Form1.h"

namespace proyecto_LOGIN_EN_C {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AggForm
	/// </summary>
	public ref class AggForm : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btt_iniciarSesion;
	private: System::Windows::Forms::Button^ btt_ver;

	public:
	private:// System::Windows::Forms::Button^ btt_creanCuenta;
		MySqlConnection^ connection;
	public:
		//MySqlConnection^ connection;
		AggForm(MySqlConnection^ _connector)
		{
			InitializeComponent();
			
			connection = _connector;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AggForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txb_usuario;
	private: System::Windows::Forms::TextBox^ txb_contraseña;
	private: System::Windows::Forms::Button^ btt_agg;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txb_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->btt_agg = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btt_iniciarSesion = (gcnew System::Windows::Forms::Button());
			this->btt_ver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(113, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// txb_usuario
			// 
			this->txb_usuario->Location = System::Drawing::Point(90, 87);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(100, 20);
			this->txb_usuario->TabIndex = 2;
			// 
			// txb_contraseña
			// 
			this->txb_contraseña->Location = System::Drawing::Point(90, 144);
			this->txb_contraseña->Name = L"txb_contraseña";
			this->txb_contraseña->Size = System::Drawing::Size(100, 20);
			this->txb_contraseña->TabIndex = 3;
			this->txb_contraseña->UseSystemPasswordChar = true;
			// 
			// btt_agg
			// 
			this->btt_agg->Location = System::Drawing::Point(61, 186);
			this->btt_agg->Name = L"btt_agg";
			this->btt_agg->Size = System::Drawing::Size(158, 23);
			this->btt_agg->TabIndex = 4;
			this->btt_agg->Text = L"Crear cuenta";
			this->btt_agg->UseVisualStyleBackColor = true;
			this->btt_agg->Click += gcnew System::EventHandler(this, &AggForm::btt_agg_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"CREA UNA CUENTA";
			// 
			// btt_iniciarSesion
			// 
			this->btt_iniciarSesion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btt_iniciarSesion->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btt_iniciarSesion->FlatAppearance->BorderSize = 0;
			this->btt_iniciarSesion->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btt_iniciarSesion->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btt_iniciarSesion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_iniciarSesion->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.75F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btt_iniciarSesion->ForeColor = System::Drawing::Color::Blue;
			this->btt_iniciarSesion->Location = System::Drawing::Point(76, 226);
			this->btt_iniciarSesion->Name = L"btt_iniciarSesion";
			this->btt_iniciarSesion->Size = System::Drawing::Size(124, 23);
			this->btt_iniciarSesion->TabIndex = 6;
			this->btt_iniciarSesion->Text = L"Iniciar sesión";
			this->btt_iniciarSesion->UseVisualStyleBackColor = true;
			this->btt_iniciarSesion->Click += gcnew System::EventHandler(this, &AggForm::btt_iniciarSesion_Click);
			// 
			// btt_ver
			// 
			this->btt_ver->Location = System::Drawing::Point(210, 144);
			this->btt_ver->Name = L"btt_ver";
			this->btt_ver->Size = System::Drawing::Size(41, 20);
			this->btt_ver->TabIndex = 7;
			this->btt_ver->Text = L"ver";
			this->btt_ver->UseVisualStyleBackColor = true;
			this->btt_ver->Click += gcnew System::EventHandler(this, &AggForm::btt_ver_Click);
			// 
			// AggForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btt_ver);
			this->Controls->Add(this->btt_iniciarSesion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btt_agg);
			this->Controls->Add(this->txb_contraseña);
			this->Controls->Add(this->txb_usuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AggForm";
			this->Text = L"AggForm";
			this->Load += gcnew System::EventHandler(this, &AggForm::AggForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btt_agg_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Obtener el usuario y la contraseña ingresados por el usuario
			String^ usuario = this->txb_usuario->Text;
			String^ contraseña = this->txb_contraseña->Text;

			// Consulta SQL para insertar los datos del usuario
			String^ query = "INSERT INTO login (usuario, contraseña) VALUES (@usuario, @contraseña)";

			// Abrir la conexión antes de ejecutar la consulta
			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@usuario", usuario);
				command->Parameters->AddWithValue("@contraseña", contraseña);

				int resultado = command->ExecuteNonQuery();
				if (resultado > 0) {
					MessageBox::Show("Cuenta Creada.");
				}
				else
				{
					MessageBox::Show("Error al crear cuenta.");
				}

				// Cerrar la conexión después de ejecutar la consulta
				connector->CloseConnection();
			}
			else {
				MessageBox::Show("Conector no ejecutado.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(" error: " + ex->Message);
			connector->CloseConnection();
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connector->CloseConnection();
			}
		}

		this->txb_usuario->Text = "";
		this->txb_contraseña->Text = "";
	}


	private: System::Void txtEntrarAlSistema_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void AggForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void btt_iniciarSesion_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void btt_ver_Click(System::Object^ sender, System::EventArgs^ e) {
		bool viendo = txb_contraseña->UseSystemPasswordChar;
		if (viendo)
		{
			txb_contraseña->UseSystemPasswordChar = false;
		}
		else
		{
			txb_contraseña->UseSystemPasswordChar = true;
		}
	}
};
}
