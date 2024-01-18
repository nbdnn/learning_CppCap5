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
    auto resultado = this->sacar(valorATransferir);
    if (resultado.index()){
        contaDestino.depositar(valorATransferir);
        std::cout << "Transferência realizada com sucesso" << std::endl;
        return;
    }
    if (std::get<Conta::ResultadoSaque>(resultado) == SaldoInsuficiente){
        std::cout << "Saldo insuficiente para a transferência" << std::endl;
        return;
    }
    std::cout << "Valor negativo recebido para a transferência" << std::endl;
    return;
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem){
    contaOrigem.transferePara(*this, contaOrigem.recuperaSaldo()/2);
}