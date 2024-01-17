/*
 * Criado por Guilherme Marcos Neves para capacitação
*/

#include "Autenticavel.hpp"

Autenticavel::Autenticavel(std::string paramSenha):senha(paramSenha) { }

bool Autenticavel::autentica(std::string paramSenha) const{
    return paramSenha == this->senha;
}