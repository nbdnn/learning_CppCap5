/*
Criado por Guilherme Neves para capacitação
*/

#include "Titular.hpp"

Titular::Titular(
    Cpf paramCpf,
    std::string paramNome,
    std::string paramSenha):
    
    Pessoa(paramCpf, paramNome),
    Autenticavel(paramSenha) { }