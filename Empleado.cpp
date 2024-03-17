//Samuel Argueta
#include <iostream>
#include <string>

class Empleado {
private:
    int codigo_empleado;
    std::string puesto;

public:
    // Constructor
    Empleado(int codigo, std::string puesto) {
        this->codigo_empleado = codigo;
        this->puesto = puesto;
    }

    // Método get para el atributo 'codigo_empleado'
    int getCodigoEmpleado() {
        return codigo_empleado;
    }

    // Método set para el atributo 'codigo_empleado'
    void setCodigoEmpleado(int codigo) {
        this->codigo_empleado = codigo;
    }

    // Método get para el atributo 'puesto'
    std::string getPuesto() {
        return puesto;
    }

    // Método set para el atributo 'puesto'
    void setPuesto(std::string puesto) {
        this->puesto = puesto;
    }
};

int main() {
    // Ejemplo de uso
    Empleado empleado1(1001, "Gerente");
    std::cout << "Codigo del empleado: " << empleado1.getCodigoEmpleado() << std::endl;
    std::cout << "Puesto del empleado: " << empleado1.getPuesto() << std::endl;

    empleado1.setCodigoEmpleado(1002);
    empleado1.setPuesto("Asistente");
    std::cout << "\nDespues de actualizar:" << std::endl;
    std::cout << "Nuevo codigo del empleado: " << empleado1.getCodigoEmpleado() << std::endl;
    std::cout << "Nuevo puesto del empleado: " << empleado1.getPuesto() << std::endl;

    return 0;
}

