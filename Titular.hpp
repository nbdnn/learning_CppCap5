/*
Criado por Guilherme Neves para capacitação
*/

#ifndef TITULAR_HPP
#define TITULAR_HPP

#include <string>
#include <iostream>
#include "Pessoa.hpp"
#include "Autenticavel.hpp"

class Titular final: public Pessoa<Cpf>, public Autenticavel {
public:
    Titular(
        Cpf paramCpf,
        std::string paramNome,
        std::string paramSenha);
};

#endif //TITULAR_HPP