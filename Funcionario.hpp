/*
* Criado por Guilherme Marcos Neves para capacitação
*/
#pragma once

#include "Pessoa.hpp"
#include "DiaDaSemana.hpp"

class Funcionario : public Pessoa<Cpf> {

private:
    float salario;
    DiaDaSemana diaDoPagamento;

public:
    std::string recuperaNome() const;
    virtual float bonificacao() const = 0;
    float recuperaSalario() const;
    Funcionario(
        Cpf paramCpfFuncionario,
        std::string paramNomeFuncionario,
        float paramSalario,
        DiaDaSemana paramDiaDoPagamento
    );
};