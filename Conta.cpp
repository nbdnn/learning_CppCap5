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

std::variant<Conta::ResultadoSaque, float> Conta::sacar(float valorASacar){

    if(valorASacar < 0){
        return ValorNegativo;
    }

    float tarifaDeSaque = this->taxaDeSaque()*valorASacar;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if(valorDoSaque > this->saldo){
        return SaldoInsuficiente;
    }
    
    this->saldo -= valorDoSaque;
    return this->saldo;
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