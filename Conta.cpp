/*
Criado por Guilherme Neves para capacitação
*/

#include "Conta.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(
    std::string paramNumeroConta,
    Titular paramTitularConta):

    numeroConta(paramNumeroConta),
    titularConta(paramTitularConta),
    saldo(0) {

    numeroDeContas++;
}

Conta::~Conta() {
    numeroDeContas--;
}

int Conta::recuperaNumeroDeContas() {
    return numeroDeContas;
}

void Conta::sacar(float valorASacar){

    if(valorASacar < 0){
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    float tarifaDeSaque = this->taxaDeSaque()*valorASacar;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if(valorDoSaque > this->saldo){
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    
    this->saldo -= valorDoSaque;
}

void Conta::depositar(float valorADepositar){

    if(valorADepositar < 0){
        std::cout << "Não pode depositar valor negativo" << std::endl;
        return;
    }
    
    this->saldo += valorADepositar;
}

void Conta::operator+=(float valorADepositar){
    this->depositar(valorADepositar);
}

std::string Conta::recuperaNumero() const {
    return this->numeroConta;
}

float Conta::recuperaSaldo() const {
    return this->saldo;
}

Titular Conta::recuperaTitular() const {
    return this->titularConta;
}