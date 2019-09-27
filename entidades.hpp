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

class Carona{
private:
        CodigoCarona codigo;
        Cidade cidadeOrigem, cidadeDestino;
        Estado estadoOrigem, estadoDestino;
        Data data;
        Duracao duracao;
        Vagas vagas;
        Preco preco;
public:
        Carona(){}
        Carona(CodigoCarona, Cidade, Estado, Cidade, Estado, Data, Duracao, Vagas, Preco);
        CodigoCarona getCodigoCarona() const;
        void setCodigoCarona(const CodigoCarona&);
        Cidade getCidadeOrigem() const;
        void setCidadeOrigem(const Cidade&);
        Estado getEstadoOrigem() const;
        void setEstadoOrigem(const Estado&);
        Cidade getCidadeDestino() const;
        void setCidadeDestino(const Cidade&);
        Estado getEstadoDestino() const;
        void setEstadoDestino(const Estado&);
        Data getData() const;
        void setData(const Data&);
        Duracao getDuracao() const;
        void setDuracao(const Duracao&);
        Vagas getVagas() const;
        void setVagas(const Vagas&);
        Preco getPreco() const;
        void setPreco(const Preco&);
};


#endif // ENTIDADE_H
