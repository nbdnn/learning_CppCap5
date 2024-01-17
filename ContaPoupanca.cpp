/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(
    std::string paramNumeroConta,
    Titular paramTitularConta):

    Conta(paramNumeroConta, paramTitularConta) { }

float ContaPoupanca::taxaDeSaque() const{
    return 0.03f;
}