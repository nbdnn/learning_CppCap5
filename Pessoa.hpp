/*
* Criado por Guilherme Marcos Neves para capacitação
*/
#pragma once

#include <string>
#include <iostream>
#include "Cpf.hpp"

class Pessoa {
    
protected:
    Cpf cpfPessoa;
    std::string nomePessoa;    

private:
    void verificaTamanhoDoNome();
public:
    Cpf recuperaCpf() const;
    std::string recuperaNome() const;
    
    Pessoa(
        Cpf paramCpfPessoa,
        std::string paramNomePessoa);
};
