/*
/ Criado por Guilherme Marcos Neves para capacitação
*/

#include "Funcionario.hpp"

Funcionario::Funcionario(
    Cpf paramCpfFuncionario,
    std::string paramNomeFuncionario,
    float paramSalario):

    Pessoa(paramCpfFuncionario, paramNomeFuncionario),
    salario(paramSalario) { }

std::string Funcionario::recuperaNome() const {
    return this->nomePessoa;
}

float Funcionario::recuperaSalario() const {
    return this->salario;
}