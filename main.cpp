#include <iostream>
#include "dominios.hpp"
#include "teste_dominio.hpp"

using namespace std;

int main()
{
    cout << "Testando..." << endl;
    cout << "0 = SUCESSO   ;   -1 = FALHA \n" << endl;

    TUAssento       TesteAssento;
    TUBagagem       TesteBagagem;
    TUCodigoBanco   TesteCodigoBanco;
    TUCodigoCarona  TesteCodigoCarona;
    TUCodigoReserva TesteCodigoReserva;
    TUCidade        TesteCidade;
    TUCpf           TesteCpf;
    TUData          TesteData;
    TUDuracao       TesteDuracao;
    TUEstado        TesteEstado;
    TUEmail         TesteEmail;
    TUNome          TesteNome;
    TUNumeroAgencia TesteNumeroAgencia;
    TUNumeroConta   TesteNumeroConta;
    TUPreco         TestePreco;
    TUTelefone      TesteTelefone;
    TUSenha         TesteSenha;
    TUVagas         TesteVaga;

    cout << "Assento: " << TesteAssento.run() << "\n";
    cout << "Bagagem: " << TesteBagagem.run() << "\n";
    cout << "CodigoBanco: " << TesteCodigoBanco.run() << "\n";
    cout << "CodigoCarona: " << TesteCodigoCarona.run() << "\n";
    cout << "CodigoReserva: " << TesteCodigoReserva.run() << "\n";
    cout << "Cidade: " << TesteCidade.run() << "\n";
    cout << "Cpf: " << TesteCpf.run() << "\n";
    cout << "Data: " << TesteData.run() << "\n";
    cout << "Duracao: " << TesteDuracao.run() << "\n";
    cout << "Estado: " << TesteEstado.run() << "\n";
    cout << "Email: " << TesteEmail.run() << "\n";
    cout << "Nome: " << TesteNome.run() << "\n";
    cout << "NumeroAgencia: " << TesteNumeroAgencia.run() << "\n";
    cout << "NumeroConta: " << TesteNumeroConta.run() << "\n";
    cout << "Preco: " << TestePreco.run() << "\n";
    cout << "Telefone: " << TesteTelefone.run() << "\n";
    cout << "Senha: " << TesteSenha.run() << "\n";
    cout << "Vaga: " << TesteVaga.run() << "\n";

    cout << "Fim do teste." << endl;
    return 0;
}
