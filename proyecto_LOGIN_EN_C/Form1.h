#pragma once
// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used
#include "AggForm.h"
#include "Header1.h"
#include "Header2.h"
#include "MySQLConnector.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
      MySQLConnector^ connector = gcnew MySQLConnector();
  private: System::Windows::Forms::Button^ btt_creanCuenta;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Button^ btt_ver;
  public:
      MySqlConnection^ connection;
    Form1(void)
    {
      InitializeComponent();
    

      connection = gcnew MySqlConnection(connector->connectionString);
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::TextBox^ txtUsuario;
  private: System::Windows::Forms::TextBox^ txtContraseña;
  protected:

  protected:

  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Button^ txtEntrarAlSistema;





  protected:

  private:
      System::ComponentModel::Container^ components;
     





#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
        this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->txtEntrarAlSistema = (gcnew System::Windows::Forms::Button());
        this->btt_creanCuenta = (gcnew System::Windows::Forms::Button());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->btt_ver = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // txtUsuario
        // 
        this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
        this->txtUsuario->Location = System::Drawing::Point(84, 102);
        this->txtUsuario->Name = L"txtUsuario";
        this->txtUsuario->Size = System::Drawing::Size(275, 35);
        this->txtUsuario->TabIndex = 0;
        // 
        // txtContraseña
        // 
        this->txtContraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
        this->txtContraseña->Location = System::Drawing::Point(81, 190);
        this->txtContraseña->Name = L"txtContraseña";
        this->txtContraseña->Size = System::Drawing::Size(275, 35);
        this->txtContraseña->TabIndex = 1;
        this->txtContraseña->UseSystemPasswordChar = true;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
        this->label1->Location = System::Drawing::Point(76, 65);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(133, 29);
        this->label1->TabIndex = 2;
        this->label1->Text = L"USUARIO:";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
        this->label2->Location = System::Drawing::Point(79, 158);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(194, 29);
        this->label2->TabIndex = 3;
        this->label2->Text = L"CONTRASEÑA:";
        // 
        // txtEntrarAlSistema
        // 
        this->txtEntrarAlSistema->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
        this->txtEntrarAlSistema->Location = System::Drawing::Point(96, 251);
        this->txtEntrarAlSistema->Name = L"txtEntrarAlSistema";
        this->txtEntrarAlSistema->Size = System::Drawing::Size(244, 45);
        this->txtEntrarAlSistema->TabIndex = 4;
        this->txtEntrarAlSistema->Text = L"Entrar al sistema";
        this->txtEntrarAlSistema->UseVisualStyleBackColor = true;
        this->txtEntrarAlSistema->Click += gcnew System::EventHandler(this, &Form1::txtEntrarAlSistema_Click);
        // 
        // btt_creanCuenta
        // 
        this->btt_creanCuenta->Location = System::Drawing::Point(162, 313);
        this->btt_creanCuenta->Name = L"btt_creanCuenta";
        this->btt_creanCuenta->Size = System::Drawing::Size(111, 23);
        this->btt_creanCuenta->TabIndex = 5;
        this->btt_creanCuenta->Text = L"No tengo cuenta";
        this->btt_creanCuenta->UseVisualStyleBackColor = true;
        this->btt_creanCuenta->Click += gcnew System::EventHandler(this, &Form1::btt_creanCuenta_Click);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->Location = System::Drawing::Point(106, 9);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(234, 39);
        this->label3->TabIndex = 6;
        this->label3->Text = L"INICIAR SECIÓN";
        // 
        // btt_ver
        // 
        this->btt_ver->Location = System::Drawing::Point(377, 190);
        this->btt_ver->Name = L"btt_ver";
        this->btt_ver->Size = System::Drawing::Size(36, 34);
        this->btt_ver->TabIndex = 7;
        this->btt_ver->Text = L"Ver";
        this->btt_ver->UseVisualStyleBackColor = true;
        this->btt_ver->Click += gcnew System::EventHandler(this, &Form1::btt_ver_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(442, 364);
        this->Controls->Add(this->btt_ver);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->btt_creanCuenta);
        this->Controls->Add(this->txtEntrarAlSistema);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->txtContraseña);
        this->Controls->Add(this->txtUsuario);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.



  private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
      
      
      
  }
private: System::Void txtEntrarAlSistema_Click(System::Object^ sender, System::EventArgs^ e) {
    try         
{

       
            // Obtener el usuario y la contraseña ingresados por el usuario
            String^ usuario = txtUsuario->Text;
            String^ contraseña = txtContraseña->Text;

            // Consulta SQL para verificar si el usuario y la contraseña son válidos
            String ^ query = "SELECT COUNT(*) FROM login WHERE usuario = '" + usuario + "' AND contraseña = '" + contraseña + "'";

            // Abrir la conexión antes de ejecutar la consulta
            if (connector->OpenConnection()) {
                MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
                int count = Convert::ToInt32(command->ExecuteScalar());

                // Cerrar la conexión después de ejecutar la consulta
                connector->CloseConnection();

                // Verificar si se encontró una coincidencia en la base de datos
                if (count > 0) {
                    MessageBox::Show("Inicio de sesión exitoso. Bienvenido, " + usuario + "!");
                    connector->CloseConnection();
                }
                else {
                    MessageBox::Show("Usuario o contraseña incorrectos. Por favor, inténtelo de nuevo.");
                    connector->CloseConnection();
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
    }
    

    this->txtUsuario->Text = "";
    this->txtContraseña->Text = "";

}
    private: System::Void btt_creanCuenta_Click(System::Object^ sender, System::EventArgs^ e) {

        proyecto_LOGIN_EN_C::AggForm^ segundoForm = gcnew proyecto_LOGIN_EN_C::AggForm(connection);
        segundoForm->Show();
    }


    private: System::Void btt_ver_Click(System::Object^ sender, System::EventArgs^ e) {
        bool viendo = txtContraseña->UseSystemPasswordChar;
        if (viendo)
        {
            txtContraseña->UseSystemPasswordChar = false;
        }
        else
        {
            txtContraseña->UseSystemPasswordChar = true;
        }
    }
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

