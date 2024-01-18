/*
* Criado por Guilherme Marcos Neves para capacitação
*/
#pragma once

#include <string>
#include <iostream>
#include "Cpf.hpp"

template<typename Documento>


class Pessoa {
    
protected:
    Documento documentoPessoa;
    std::string nomePessoa;    

private:
    void verificaTamanhoDoNome(){
        if (nomePessoa.size() < 5) {
            std::cout << nomePessoa << " -> Nome muito curto" << std::endl;
            exit(1);
        }
    }
public:
    Documento recuperaDocumento() const{
        return this->documentoPessoa;
    }
    std::string recuperaNome() const{
        return this->nomePessoa;
    }    
    // Pessoa(
    //     Cpf paramCpfPessoa,
    //     std::string paramNomePessoa);

    Pessoa(
        Documento paramDocumentoPessoa,
        std::string paramNomePessoa):

        documentoPessoa(paramDocumentoPessoa),
        nomePessoa(paramNomePessoa) {

        verificaTamanhoDoNome();
}
};
