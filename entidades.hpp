#ifndef ENTIDADE_H
#define ENTIDADE_H

#include "dominios.hpp"
#include <string>

using namespace std;

//Declaracao das classes entidade
/**
* Classe entidade que usa os atributos:
* Nome, Telefone, Email, Senha e CPF
*/
///Classe de entidade composta por outras classes, salva para Usuario.
class Usuario{
private:
    Nome nome;
    Telefone telefone;
    Email email;
    Senha senha;
    Cpf cpf;
public:
    Usuario(){};
    ///Construtor com os objetos Nome, Telefone, Email, Senha e Cpf definidos
    Usuario(Nome, Telefone, Email, Senha, Cpf);
    
    ///Metodo que retorna o objeto Nome
    Nome getNome() const;
    ///Metodo que define o objeto Nome
    void setNome(const Nome&);
    ///Metodo que retorna o objeto Telefone
    Telefone getTelefone() const;
    ///Metodo que define o objeto Telefone
    void setTelefone(const Telefone&);
    ///Metodo que retorna o objeto Email
    Email getEmail() const;
    ///Metodo que define o objeto Email
    void setEmail(const Email&);
    ///Metodo que retorna o objeto Senha
    Senha getSenha() const;
    ///Metodo que define o objeto Senha
    void setSenha(const Senha&);
    ///Metodo que retorna o objeto Cpf 
    Cpf getCpf() const;
    ///Metodo que define o objeto Cpf
    void setCpf(const Cpf&);
};
/**
* Classe entidade que usa os atributos:
* CodigoReserva, Assento e Bagagem
*/
///Classe de entidade composta por outras classes, salva para Reserva.
class Reserva {
private:
        CodigoReserva codigo;
        Assento assento;
        Bagagem bagagem;
public:
        Reserva(){}
        ///Construtor com os objetos CodigoReserva, Assento, Bagagem definidos
        Reserva(CodigoReserva, Assento, Bagagem);
        
        ///Metodo que retorna o objeto CodigoReserva
        CodigoReserva getCodigoReserva() const;
        ///Metodo que define o objeto CodigoReserva
        void setCodigoReserva(const CodigoReserva&);
        ///Metodo que retorna o objeto Assento
        Assento getAssento() const;
        ///Metodo que define o objeto Assento
        void setAssento(const Assento&);
        ///Metodo que retorna o objeto Bagagem
        Bagagem getBagagem() const;
        ///Metodo que define o objeto Bagagem
        void setBagagem(const Bagagem&);
};
/**
* Classe entidade que usa os atributos:
* CodigoCarona, Cidade, Estado, Data, Duracao, Vagas e Preco
*/
///Classe de entidade composta por outras classes, salva para Carona.
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
        ///Metodo que retorna o objeto CodigoCarona
        CodigoCarona getCodigoCarona() const;
        ///Metodo que define o objeto CodigoCarona
        void setCodigoCarona(const CodigoCarona&);
        ///Metodo que retorna o objeto CidadeOrigem
        Cidade getCidadeOrigem() const;
        ///Metodo que define o objeto CidadeOrigem
        void setCidadeOrigem(const Cidade&);
        ///Metodo que retorna o objeto EstadoOrigem
        Estado getEstadoOrigem() const;
        ///Metodo que define o objeto EstadoOrigem
        void setEstadoOrigem(const Estado&);
        ///Metodo que retorna o objeto CidadeDestino
        Cidade getCidadeDestino() const;
        ///Metodo que define o objeto CidadeDestino
        void setCidadeDestino(const Cidade&);
        ///Metodo que retorna o objeto EstadoDestino
        Estado getEstadoDestino() const;
        ///Metodo que define o objeto EstadoDestino
        void setEstadoDestino(const Estado&);
        ///Metodo que retorna o objeto de Data
        Data getData() const;
        ///Metodo que define o objeto de Data
        void setData(const Data&);
        ///Metodo que retorna o objeto de Duracao
        Duracao getDuracao() const;
        ///Metodo que define o objeto de Duracao
        void setDuracao(const Duracao&);
        ///Metodo que retorna o objeto de Vagas
        Vagas getVagas() const;
        ///Metodo que define o objeto de Vagas
        void setVagas(const Vagas&);
        ///Metodo que retorna o objeto de Preco
        Preco getPreco() const;
        ///Metodo que define o objeto de Preco
        void setPreco(const Preco&);
};
/**
* Classe entidade que usa os atributos:
* CodigoBanco, NumeroAgencia e NumeroConta
*/
///Classe de entidade composta por outras classes, salva para Conta.
class Conta {
private:
    CodigoBanco banco;
    NumeroAgencia agencia;
    NumeroConta numero;
public:
    Conta(){}
    Conta(CodigoBanco, NumeroAgencia, NumeroConta);
    ///Metodo que retorna o objeto de CodigoBanco
    CodigoBanco getCodigoBanco() const;
    ///Metodo que define o objeto de CodigoBanco
    void setCodigoBanco(const CodigoBanco&);
    ///Metodo que retorna o objeto de NumeroAgencia
    NumeroAgencia getNumeroAgencia() const;
    ///Metodo que define o objeto de NumeroAgencia
    void setNumeroAgencia(const NumeroAgencia&);
    ///Metodo que retorna o objeto de NumeroConta
    NumeroConta getNumeroConta() const;
    ///Metodo que define o objeto de NumeroConta
    void setNumeroConta(const NumeroConta&);
};



#endif // ENTIDADE_H

        Data getData() const;
        void setData(const Data&);
        Duracao getDuracao() const;
        void setDuracao(const Duracao&);
        Vagas getVagas() const;
        void setVagas(const Vagas&);
        Preco getPreco() const;
        void setPreco(const Preco&);
};
/**
* Classe entidade que usa os atributos:
* CodigoBanco, NumeroAgencia e NumeroConta
*/
///Classe de entidade composta por outras classes, salva para Conta.
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
