/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#include "Gerente.hpp"

Gerente::Gerente(Cpf paramCpf,
        std::string paramNome,
        float paramSalario,
        std::string paramSenha) :
        Funcionario(
            paramCpf,
            paramNome,
            paramSalario),
        Autenticavel(paramSenha) { }

float Gerente::bonificacao() const {
    return 0.5f*this->recuperaSalario();
}