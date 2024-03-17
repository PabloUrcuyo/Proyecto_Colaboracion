#include <iostream>
#include <string>

class Cliente {
private:
    std::string nit;

public:
    // Constructor
    Cliente(std::string nit) {
        this->nit = nit;
    }

    // Método get para el atributo 'nit'
    std::string getNit() {
        return nit;
    }

    // Método set para el atributo 'nit'
    void setNit(std::string nit) {
        this->nit = nit;
    }
};

int main() {
    // Ejemplo de uso
    Cliente cliente1("123456-1");
    std::cout << "Nit del cliente: " << cliente1.getNit() << std::endl;
    
    return 0;
}
