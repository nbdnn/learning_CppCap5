/*
Criado por Guilherme Neves para capacitação
*/

#ifndef CONTA_HPP
#define CONTA_HPP

#include <string>
#include <iostream>
#include <utility>
#include <variant>
#include <format>
#include "Titular.hpp"

class Conta {
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numeroConta;
    Titular titularConta;

protected:
    float saldo;

public:
    enum ResultadoSaque {
        ValorNegativo,SaldoInsuficiente
    };
    std::variant<ResultadoSaque, float> sacar(float valorASacar);
    void depositar(float valorADepositar);
    void operator+=(float valorADepositar);
    bool operator< (const Conta& outraConta);
    virtual float taxaDeSaque() const = 0;

    std::string recuperaNumero() const;
    Titular recuperaTitular() const;
    float recuperaSaldo() const;
    friend std::ostream& operator<< (std::ostream& cout, const Conta& conta);

    Conta(
        std::string paramNumeroConta,
        Titular paramTitularConta);
    virtual ~Conta();
};

#endif //CONTA_HPP
