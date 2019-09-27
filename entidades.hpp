#ifndef ENTIDADE_H
#define ENTIDADE_H

#include "dominios.hpp"
#include <string>

using namespace std;

//Declaracao das classes entidade

class Usuario{
private:
    Nome nome;
    Telefone telefone;
    Email email;
    Senha senha;
    Cpf cpf;
public:
    Usuario(){};
    Usuario(Nome, Telefone, Email, Senha, Cpf);

    Nome getNome() const;
    void setNome(const Nome&);
    Telefone getTelefone() const;
    void setTelefone(const Telefone&);
    Email getEmail() const;
    void setEmail(const Email&);
    Senha getSenha() const;
    void setSenha(const Senha&);
    Cpf getCpf() const;
    void setCpf(const Cpf&);
};

class Reserva {
private:
        CodigoReserva codigo;
        Assento assento;
        Bagagem bagagem;
public:
        Reserva(){}
        Reserva(CodigoReserva, Assento, Bagagem);

        CodigoReserva getCodigoReserva() const;
        void setCodigoReserva(const CodigoReserva&);
        Assento getAssento() const;
        void setAssento(const Assento&);
        Bagagem getBagagem() const;
        void setBagagem(const Bagagem&);
};

class Conta {
private:
    CodigoBanco banco;
    NumeroAgencia agencia;
    NumeroConta numero;
public:
    Conta(){}
    Conta(CodigoBanco, NumeroAgencia, NumeroConta);

    CodigoBanco getCodigoBanco() const;
    void setCodigoBanco(const CodigoBanco&);
    NumeroAgencia getNumeroAgencia() const;
    void setNumeroAgencia(const NumeroAgencia&);
    NumeroConta getNumeroConta() const;
    void setNumeroConta(const NumeroConta&);
};


#endif // ENTIDADE_H
