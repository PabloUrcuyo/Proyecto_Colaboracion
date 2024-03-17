#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Persona {
private:
    string nombres;
    string apellidos;
    string direccion;
    string telefono;
    string fecha_nacimiento;

public:
    // Constructor
    Persona(string _nombres, string _apellidos, string _direccion, string _telefono, string _fecha_nacimiento) {
        nombres = _nombres;
        apellidos = _apellidos;
        direccion = _direccion;
        telefono = _telefono;
        fecha_nacimiento = _fecha_nacimiento;
    }

    // M�todos CRUD

    // Create: Agregar una nueva persona
    static void agregarPersona(vector<Persona>& personas) {
        string _nombres, _apellidos, _direccion, _telefono, _fecha_nacimiento;

        cout << "Ingrese nombres: ";
        getline(cin, _nombres);

        cout << "Ingrese apellidos: ";
        getline(cin, _apellidos);

        cout << "Ingrese direcci�n: ";
        getline(cin, _direccion);

        cout << "Ingrese tel�fono: ";
        getline(cin, _telefono);

        cout << "Ingrese fecha de nacimiento (YYYY-MM-DD): ";
        getline(cin, _fecha_nacimiento);

        personas.push_back(Persona(_nombres, _apellidos, _direccion, _telefono, _fecha_nacimiento));
        cout << "Persona agregada correctamente." << endl;
    }

    // Read: Obtener informaci�n de una persona por �ndice
    static void obtenerPersona(const vector<Persona>& personas, int indice) {
        if (indice >= 0 && indice < personas.size()) {
            const Persona& persona = personas[indice];
            cout << "Nombres: " << persona.nombres << endl;
            cout << "Apellidos: " << persona.apellidos << endl;
            cout << "Direcci�n: " << persona.direccion << endl;
            cout << "Tel�fono: " << persona.telefono << endl;
            cout << "Fecha de nacimiento: " << persona.fecha_nacimiento << endl;
        } else {
            cout << "�ndice fuera de rango." << endl;
        }
    }

    // Update: Modificar informaci�n de una persona por �ndice
    static void actualizarPersona(vector<Persona>& personas, int indice) {
        if (indice >= 0 && indice < personas.size()) {
            string _nombres, _apellidos, _direccion, _telefono, _fecha_nacimiento;

            cout << "Ingrese nuevos nombres: ";
            getline(cin, _nombres);

            cout << "Ingrese nuevos apellidos: ";
            getline(cin, _apellidos);

            cout << "Ingrese nueva direcci�n: ";
            getline(cin, _direccion);

            cout << "Ingrese nuevo tel�fono: ";
            getline(cin, _telefono);

            cout << "Ingrese nueva fecha de nacimiento (YYYY-MM-DD): ";
            getline(cin, _fecha_nacimiento);

            personas[indice].nombres = _nombres;
            personas[indice].apellidos = _apellidos;
            personas[indice].direccion = _direccion;
            personas[indice].telefono = _telefono;
            personas[indice].fecha_nacimiento = _fecha_nacimiento;

            cout << "Persona actualizada correctamente." << endl;
        } else {
            cout << "�ndice fuera de rango." << endl;
        }
    }

    // Delete: Eliminar una persona por �ndice
    static void eliminarPersona(vector<Persona>& personas, int indice) {
        if (indice >= 0 && indice < personas.size()) {
            personas.erase(personas.begin() + indice);
            cout << "Persona eliminada correctamente." << endl;
        } else {
            cout << "�ndice fuera de rango." << endl;
        }
    }
};

int main() {
    vector<Persona> personas;
    int opcion;
    int indice;

    while (true) {
        cout << "\nMen�:\n";
        cout << "1. Agregar persona\n";
        cout << "2. Mostrar persona\n";
        cout << "3. Actualizar persona\n";
        cout << "4. Eliminar persona\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opci�n: ";
        cin >> opcion;
        cin.ignore();  // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                Persona::agregarPersona(personas);
                break;
            case 2:
                cout << "Ingrese el �ndice de la persona a mostrar: ";
                cin >> indice;
                Persona::obtenerPersona(personas, indice);
                break;
            case 3:
                cout << "Ingrese el �ndice de la persona a actualizar: ";
                cin >> indice;
                cin.ignore();  // Limpiar el buffer de entrada
                Persona::actualizarPersona(personas, indice);
                break;
            case 4:
                cout << "Ingrese el �ndice de la persona a eliminar: ";
                cin >> indice;
                Persona::eliminarPersona(personas, indice);
                break;
            case 5:
                cout << "Saliendo del programa.\n";
                return 0;
            default:
                cout << "Opci�n no v�lida.\n";
        }
    }

    return 0;
}
