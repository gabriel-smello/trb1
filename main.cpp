#include <iostream>
//#include "dominios.hpp"
#include "teste_dominio.hpp"
//#include "entidades.hpp"
#include "teste_entidade.hpp"

using namespace std;

int main()
{
    cout << "Testando..." << endl;
    cout << "0 = SUCESSO   ;   -1 = FALHA \n" << endl;

    //Objetos de teste de dominio
    TUAssento       testeAssento;
    TUBagagem       testeBagagem;
    TUCodigoBanco   testeCodigoBanco;
    TUCodigoCarona  testeCodigoCarona;
    TUCodigoReserva testeCodigoReserva;
    TUCidade        testeCidade;
    TUCpf           testeCpf;
    TUData          testeData;
    TUDuracao       testeDuracao;
    TUEstado        testeEstado;
    TUEmail         testeEmail;
    TUNome          testeNome;
    TUNumeroAgencia testeNumeroAgencia;
    TUNumeroConta   testeNumeroConta;
    TUPreco         testePreco;
    TUTelefone      testeTelefone;
    TUSenha         testeSenha;
    TUVagas         testeVaga;

    cout << "-Dominios" << endl;
    cout << "Assento: " << testeAssento.run() << "\n";
    cout << "Bagagem: " << testeBagagem.run() << "\n";
    cout << "CodigoBanco: " << testeCodigoBanco.run() << "\n";
    cout << "CodigoCarona: " << testeCodigoCarona.run() << "\n";
    cout << "CodigoReserva: " << testeCodigoReserva.run() << "\n";
    cout << "Cidade: " << testeCidade.run() << "\n";
    cout << "Cpf: " << testeCpf.run() << "\n";
    cout << "Data: " << testeData.run() << "\n";
    cout << "Duracao: " << testeDuracao.run() << "\n";
    cout << "Estado: " << testeEstado.run() << "\n";
    cout << "Email: " << testeEmail.run() << "\n";
    cout << "Nome: " << testeNome.run() << "\n";
    cout << "NumeroAgencia: " << testeNumeroAgencia.run() << "\n";
    cout << "NumeroConta: " << testeNumeroConta.run() << "\n";
    cout << "Preco: " << testePreco.run() << "\n";
    cout << "Telefone: " << testeTelefone.run() << "\n";
    cout << "Senha: " << testeSenha.run() << "\n";
    cout << "Vaga: " << testeVaga.run() << "\n\n";

    //Objetos de teste de entidade
    TUUsuario testeUsuario;
    TUReserva testeReserva;
    TUCarona testeCarona;
    TUConta testeConta;

    cout << "-Entidades" << endl;
    cout << "Usuario: " << testeUsuario.run() << endl;
    cout << "Reserva: " << testeReserva.run() << endl;
    cout << "Carona: " << testeCarona.run() << endl;
    cout << "Conta: " << testeConta.run() << "\n\n";

    cout << "Fim do teste." << endl;
    return 0;
}

