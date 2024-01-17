/*
Criado por Guilherme Neves para capacitação
*/

#include "Cpf.hpp"

void Cpf::verificaCpf() {
    if (numeroCpf.size() != 14) {
        std::cout << "CPF inválido" << std::endl;
        exit(1);
    }

    if (!(numeroCpf[3] == '.' &&
    numeroCpf[7] == '.' &&
    numeroCpf[11] == '-')) {
        std::cout << "CPF inválido" << std::endl;
        exit(1);
    }
}

Cpf::Cpf(
    std::string paramNumeroCpf):numeroCpf(paramNumeroCpf) {
        
        verificaCpf();
}

std::string Cpf::recuperaNumero(){
    return numeroCpf;
}