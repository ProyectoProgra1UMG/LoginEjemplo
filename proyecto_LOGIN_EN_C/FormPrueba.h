#pragma once
#include "MySQLConnector.h"
namespace proyecto_LOGIN_EN_C {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormPrueba
	/// </summary>
	public ref class FormPrueba : public System::Windows::Forms::Form
	{
	public:
		FormPrueba(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~FormPrueba()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// FormPrueba
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"FormPrueba";
			this->Text = L"FormPrueba";
			this->Load += gcnew System::EventHandler(this, &FormPrueba::FormPrueba_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormPrueba_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
