/*
 * Criado por Guilherme Marcos Neves para capacitação
*/
#pragma once
#include "Funcionario.hpp"
#include "Autenticavel.hpp"

class Gerente final: public Funcionario, public Autenticavel {
public:
    Gerente(
        Cpf paramCpf,
        std::string paramNome,
        float paramSalario,
        std::string paramSenha);
    float bonificacao() const;
};