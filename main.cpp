/*
Criado por Guilherme Neves para capacitação
*/

#include <iostream>
#include <string>
#include <utility>
#include <variant>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Caixa.hpp"
#include "Gerente.hpp"
#include "Autenticavel.hpp"
#include "DiaDaSemana.hpp"

using namespace std;

// void ExibeSaldo(const Conta& conta) {
//     cout << "Saldo de " << conta.recuperaNumero() << " é : " << conta.recuperaSaldo() << endl;
// }

void RealizaSaque (Conta& conta, float valorSaque) {
    auto resultado = conta.sacar(valorSaque);
    if (auto saldo = get_if<float>(&resultado)) {
        cout << "Saque realizado com sucesso" << endl;
        cout << "Novo saldo da conta: " << *saldo << endl;
        return;
    }
    if (get<Conta::ResultadoSaque>(resultado) == Conta::SaldoInsuficiente) {
        cout << "Valor insuficiente em conta para realizar o saque" << endl;
        return;
    }
    cout << "Não pode sacar valor negativo" << endl;
    return;
}

// void ExibeSaldo(const Conta& conta) {
//     cout << "Saldo é : " << conta.recuperaSaldo() << endl;
// }

void FazLogin(const Autenticavel& alguem, string senha){
    if(alguem.autentica(senha)){
        cout << "Login realizado com sucesso" << endl;
        return;
    }
    cout << "Senha inválida" << endl;
    return;
}

ostream& operator<< (ostream& cout, const Conta& conta){
    Pessoa titular = conta.titularConta;
    cout << "Saldo de " << conta.recuperaNumero() << " é : " << conta.recuperaSaldo() << endl;
    cout << "O titular da conta é: "<< titular.recuperaNome() << endl;
    return cout;
}

int main(){
    ContaCorrente umaConta = ContaCorrente(
        "123456",
        Titular(
            string("123.456.789-10"),
            "Vinicius",
            "umaSenha"));
    
    umaConta.depositar(500);
    RealizaSaque(umaConta, 200);

    ContaPoupanca umaOutraConta = ContaPoupanca(
        "654321",
        Titular(
            string("019.876.543-21"),
            "Dias Cardoso",
            "umaSenha"));

    umaOutraConta += 500;

    ContaCorrente maisUmaConta = ContaCorrente(
        "112358",
        Titular(
            string("019.876.543-21"),
            "Gabriel",
            "umaSenha"));

    maisUmaConta.depositar(1000);
    RealizaSaque(maisUmaConta, 500);
    maisUmaConta += umaConta;

    cout << umaConta;
    cout << umaOutraConta;
    cout << maisUmaConta;

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Caixa funcionarioCaixa = Caixa(
        Cpf("123.456.789-10"), "Dias Vinicius", 1000, DiaDaSemana::Terca
    );
    
    Gerente gerenteBanco = Gerente(
        Cpf("123.456.789-10"), "Dias Vinicius", 1000, "senhaForte", DiaDaSemana::Sexta
    );

    cout << "Nome do funcionário do caixa: " << funcionarioCaixa.recuperaNome() << endl;
    // cout << "Realizando login para gerente...\nInsira a senha: ";
    // string senhaRecebida;
    // cin >> senhaRecebida;
    // FazLogin(gerenteBanco, senhaRecebida);

    return 0;
} 
