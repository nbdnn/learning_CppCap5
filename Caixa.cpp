/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#include "Caixa.hpp"

Caixa::Caixa(Cpf paramCpfFuncionario,
    std::string paramNomeFuncionario,
    float paramSalario,
    DiaDaSemana paramDiaDoPagamento) : 
    Funcionario(
        paramCpfFuncionario,
        paramNomeFuncionario,
        paramSalario,
        paramDiaDoPagamento
    ) { }

float Caixa::bonificacao() const {
    return 0.1f*this->recuperaSalario();
}