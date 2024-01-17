/*
* Criado por Guilherme Marcos Neves para Capacitação
*/

#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(
    std::string paramNumeroConta,
    Titular paramTitularConta):

    Conta(paramNumeroConta, paramTitularConta) { }

float ContaCorrente::taxaDeSaque() const{
    return 0.05f;
}

void ContaCorrente::transferePara(
    Conta& contaDestino,
    float valorATransferir
) {
this->sacar(valorATransferir);
contaDestino.depositar(valorATransferir);
}