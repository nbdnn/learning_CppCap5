/*
Criado por Guilherme Neves para capacitação
*/

#ifndef CPF_HPP
#define CPF_HPP

#include <string>
#include <iostream>

class Cpf {

private:
    std::string numeroCpf;
    void verificaCpf();

public:
    Cpf(std::string paramNumeroCpf);
    std::string recuperaNumero();
};

#endif //CPF_HPP