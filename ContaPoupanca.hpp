/*
* Criado por Guilherme Marcos Neves para capacitação
*/

#pragma once

#include <string>
#include <iostream>
#include "Conta.hpp"

class ContaPoupanca final : public Conta {

public:
    float taxaDeSaque() const override;
    ContaPoupanca(
        std::string paramNumeroConta,
        Titular paramTitularConta
    );
};