/*
 * Criado por Guilherme Marcos Neves para capacitação
*/

#pragma once
#include <string>

class Autenticavel {
private:
    std::string senha;
public:
    Autenticavel(std::string paramSenha);
    bool autentica(std::string paramSenha) const;
};