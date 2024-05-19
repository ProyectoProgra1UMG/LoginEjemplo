#pragma once
#include "Form1.h"
#include "MySQLConnector.h"
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
		//MySQLConnector^ connector = gcnew MySQLConnector();
	private:// System::Windows::Forms::Button^ btt_creanCuenta;
		//MySqlConnection^ connector;
	public:
		//MySqlConnection^ connection;
		AggForm()
		{
			InitializeComponent();
			
			//connector = _connector;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ txb_contrase�a;
	private: System::Windows::Forms::Button^ btt_agg;
	private: System::Windows::Forms::Button^ btt_volver;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txb_contrase�a = (gcnew System::Windows::Forms::TextBox());
			this->btt_agg = (gcnew System::Windows::Forms::Button());
			this->btt_volver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(113, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(104, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contrase�a";
			// 
			// txb_usuario
			// 
			this->txb_usuario->Location = System::Drawing::Point(86, 59);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(100, 20);
			this->txb_usuario->TabIndex = 2;
			// 
			// txb_contrase�a
			// 
			this->txb_contrase�a->Location = System::Drawing::Point(86, 137);
			this->txb_contrase�a->Name = L"txb_contrase�a";
			this->txb_contrase�a->Size = System::Drawing::Size(100, 20);
			this->txb_contrase�a->TabIndex = 3;
			// 
			// btt_agg
			// 
			this->btt_agg->Location = System::Drawing::Point(59, 175);
			this->btt_agg->Name = L"btt_agg";
			this->btt_agg->Size = System::Drawing::Size(158, 23);
			this->btt_agg->TabIndex = 4;
			this->btt_agg->Text = L"Agregar Datos";
			this->btt_agg->UseVisualStyleBackColor = true;
			this->btt_agg->Click += gcnew System::EventHandler(this, &AggForm::btt_agg_Click);
			// 
			// btt_volver
			// 
			this->btt_volver->Location = System::Drawing::Point(90, 226);
			this->btt_volver->Name = L"btt_volver";
			this->btt_volver->Size = System::Drawing::Size(96, 23);
			this->btt_volver->TabIndex = 5;
			this->btt_volver->Text = L"Inciar Sesion";
			this->btt_volver->UseVisualStyleBackColor = true;
			this->btt_volver->Click += gcnew System::EventHandler(this, &AggForm::btt_volver_Click);
			// 
			// AggForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btt_volver);
			this->Controls->Add(this->btt_agg);
			this->Controls->Add(this->txb_contrase�a);
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
	private: System::Void btt_volver_Click(System::Object^ sender, System::EventArgs^ e) {
		//CppCLRWinFormsProject::Form1^ primerForm = gcnew CppCLRWinFormsProject::Form1();
		//primerForm->Show();
	}

	private: System::Void btt_agg_Click(System::Object^ sender, System::EventArgs^ e) {
		/*CppCLRWinFormsProject::Form1^ primerForm = gcnew CppCLRWinFormsProject::Form1();
		primerForm->Show();
	}


	private: System::Void txtEntrarAlSistema_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Obtener el usuario y la contrase�a ingresados por el usuario
			String^ usuario = txtUsuario->Text;
			String^ contrase�a = txtContrase�a->Text;

			// Consulta SQL para verificar si el usuario y la contrase�a son v�lidos
			String^ query = "INSERT into login(usuario, contrase�a) VALUES (@usuario, @contrase�a)";

			// Abrir la conexi�n antes de ejecutar la consulta
			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				int count = Convert::ToInt32(command->ExecuteScalar());

				// Cerrar la conexi�n despu�s de ejecutar la consulta
				connector->CloseConnection();

				command->Parameters->AddWithValue("@usuario", usuario);
				command->Parameters->AddWithValue("@contrase�a", contrase�a);

				int resultado = command->ExecuteNonQuery();
				if (resultado > 0) {
					MessageBox::Show("Usuario Insertado.");
				}
				else
				{
					MessageBox::Show("Error al Insertado.");
				}
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
		}*/
	}


	private: System::Void AggForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
