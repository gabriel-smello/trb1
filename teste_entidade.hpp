#ifndef TESTE_ENTIDADE_H
#define TESTE_ENTIDADE_H

#include "entidades.hpp"

using namespace std;
///Teste de Unidade para as funcoes publicas da Entidade Usuario
class TUUsuario{
private:
    Nome testeNome;
    Telefone testeTelefone;
    Email testeEmail;
    Senha testeSenha;
    Cpf testeCpf;

    Usuario *entidade;

    int estado; //Estado do teste

    void setUp();
    void testes();
    void tearDown();
public:
    int run();

    const static int sucesso =  0;
    const static int falha   = -1;
};
///Teste de Unidade para as funcoes publicas da Entidade Reserva
class TUReserva{
private:
    CodigoReserva testeCodigoReserva;
    Assento testeAssento;
    Bagagem testeBagagem;

    Reserva *entidade;

    int estado; //Estado do teste

    void setUp();
    void testes();
    void tearDown();
public:
    int run();

    const static int sucesso =  0;
    const static int falha   = -1;
};
///Teste de Unidade para as funcoes publicas da Entidade Carona
class TUCarona{
private:
    CodigoCarona testeCodigoCarona;
    Cidade testeCidadeOrigem, testeCidadeDestino;
    Estado testeEstadoOrigem, testeEstadoDestino;
    Data testeData;
    Duracao testeDuracao;
    Vagas testeVagas;
    Preco testePreco;

    Carona *entidade;

    int estado; //Estado do teste

    void setUp();
    void testes();
    void tearDown();
public:
    int run();

    const static int sucesso =  0;
    const static int falha   = -1;
};
///Teste de Unidade para as funcoes publicas da Entidade Conta
class TUConta{
private:
    CodigoBanco testeBanco;
    NumeroAgencia testeAgencia;
    NumeroConta testeNumero;

    Conta *entidade;

    int estado; //Estado do teste

    void setUp();
    void testes();
    void tearDown();
public:
    int run();

    const static int sucesso =  0;
    const static int falha   = -1;
};

#endif // TESTE_ENTIDADE_H
