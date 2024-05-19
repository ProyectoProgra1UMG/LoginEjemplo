
#include <iostream>


using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System::Data;

public ref class MySQLConnector {
private:
    MySqlConnection^ connection;

public:
    String^ connectionString;
    String^ host = "127.0.0.1";
    String^ usuario = "root";
    String^ contraseña = "";
    String^ database = "bd_registo_personas";

    MySQLConnector() : connection(nullptr) 
    {
        connectionString = "datasource=127.0.0.1; username=root; password=""; database=bd_registro_persona";
        //connectionString = "Server=" + host + ";Uid=" + usuario + ";Pwd=" + contraseña + ";Database=" + database + ";";
        connection = gcnew MySqlConnection(connectionString);
    }

    bool OpenConnection() {
        try {
            connection->Open();
            return true;
        }
        catch (Exception^ ex) {
           
            return false;
        }
    }

    void CloseConnection() {
        if (connection != nullptr && connection->State == ConnectionState::Open) {
            connection->Close();
           
        }
    }

    MySqlConnection^ getConnection() {
        return connection;
    }

    ~MySQLConnector() {
        CloseConnection();
    }
};

//int main() {
//    
//
//    MySQLConnector^ connector = gcnew MySQLConnector();
//
//    if (connector->OpenConnection()) {
//        // Realiza operaciones con la base de datos...
//        // Por ejemplo, consultas, inserciones, actualizaciones, etc.
//
//        connector->CloseConnection(); // Cierra la conexión cuando hayas terminado de usarla
//    }
//
//    return 0;
//}
