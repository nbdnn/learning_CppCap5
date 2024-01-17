/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#pragma once
#include "Funcionario.hpp"

class Caixa final: public Funcionario {
private:
    /* data */
public:
    Caixa(Cpf paramCpfFuncionario,
    std::string paramNomeFuncionario,
    float paramSalario);
    float bonificacao() const;
};