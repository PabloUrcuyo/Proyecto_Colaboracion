#include <iostream>
#include <string>
#include <vector>

class Persona {
protected:
    std::string nombres;
    std::string apellidos;
    std::string direccion;
    std::string telefono;
    std::string fecha_nacimiento;

public:
    // Constructor
    Persona(std::string _nombres, std::string _apellidos, std::string _direccion, std::string _telefono, std::string _fecha_nacimiento) {
        nombres = _nombres;
        apellidos = _apellidos;
        direccion = _direccion;
        telefono = _telefono;
        fecha_nacimiento = _fecha_nacimiento;
    }

    // Métodos get y set para los atributos
    std::string getNombres() { return nombres; }
    void setNombres(std::string _nombres) { nombres = _nombres; }

    std::string getApellidos() { return apellidos; }
    void setApellidos(std::string _apellidos) { apellidos = _apellidos; }

    std::string getDireccion() { return direccion; }
    void setDireccion(std::string _direccion) { direccion = _direccion; }

    std::string getTelefono() { return telefono; }
    void setTelefono(std::string _telefono) { telefono = _telefono; }

    std::string getFechaNacimiento() { return fecha_nacimiento; }
    void setFechaNacimiento(std::string _fecha_nacimiento) { fecha_nacimiento = _fecha_nacimiento; }
};

class Empleado : public Persona {
private:
    int codigo_empleado;
    std::string puesto;

public:
    // Constructor
    Empleado(int codigo, std::string _nombres, std::string _apellidos, std::string _direccion, std::string _telefono, std::string _fecha_nacimiento, std::string _puesto)
        : Persona(_nombres, _apellidos, _direccion, _telefono, _fecha_nacimiento) {
        codigo_empleado = codigo;
        puesto = _puesto;
    }

    // Métodos get y set para los atributos específicos de Empleado
    int getCodigoEmpleado() { return codigo_empleado; }
    void setCodigoEmpleado(int codigo) { codigo_empleado = codigo; }

    std::string getPuesto() { return puesto; }
    void setPuesto(std::string _puesto) { puesto = _puesto; }
};

class Cliente : public Persona {
private:
    std::string nit;

public:
    // Constructor
    Cliente(std::string _nit, std::string _nombres, std::string _apellidos, std::string _direccion, std::string _telefono, std::string _fecha_nacimiento)
        : Persona(_nombres, _apellidos, _direccion, _telefono, _fecha_nacimiento) {
        nit = _nit;
    }

    // Métodos get y set para el atributo específico de Cliente
    std::string getNit() { return nit; }
    void setNit(std::string _nit) { nit = _nit; }
};

int main() {
    // Ejemplo de uso de la clase Empleado
    Empleado empleado1(1001, "John", "Doe", "123 Calle Principal", "555-1234", "1990-01-01", "Gerente");
    std::cout << "Codigo del empleado: " << empleado1.getCodigoEmpleado() << std::endl;
    std::cout << "Puesto del empleado: " << empleado1.getPuesto() << std::endl;

    // Ejemplo de uso de la clase Cliente
    Cliente cliente1("123456-1", "Jane", "Smith", "456 Calle Secundaria", "555-5678", "1985-05-05");
    std::cout << "\nNit del cliente: " << cliente1.getNit() << std::endl;

    return 0;
}

