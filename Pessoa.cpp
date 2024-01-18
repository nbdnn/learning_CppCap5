/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#include "Pessoa.hpp"

Pessoa::Pessoa(
    Cpf paramCpfPessoa,
    std::string paramNomePessoa):

    cpfPessoa(paramCpfPessoa),
    nomePessoa(paramNomePessoa) {

    verificaTamanhoDoNome();
}

void Pessoa::verificaTamanhoDoNome() {
    if (nomePessoa.size() < 5) {
        std::cout << nomePessoa << " -> Nome muito curto" << std::endl;
        exit(1);
    }
}

Cpf Pessoa::recuperaCpf() const {
    return this->cpfPessoa;
}

std::string Pessoa::recuperaNome() const{
  return this->nomePessoa;
}
