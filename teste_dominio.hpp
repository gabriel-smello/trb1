#ifndef TESTE_DOMINIO_H
#define TESTE_DOMINIO_H
#include "dominios.hpp"

using namespace std;
///Teste de Unidade para as funcoes publicas da Classe Assento
class TUAssento {
private:
    const char valorValido   = 'D';
    const char valorInvalido = 'b';

    Assento *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Bagagem
class TUBagagem {
private:
    const int valorValido   = 3;
    const int valorInvalido = 7;

    Bagagem *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe CodigoBanco
class TUCodigoBanco {
private:
    const string valorValido   = "876";
    const string valorInvalido = "-83";

    CodigoBanco *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe CodigoCarona
class TUCodigoCarona {
private:
    const string valorValido   = "8762";
    const string valorInvalido = "10000";

    CodigoCarona *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe CodigoReserva
class TUCodigoReserva {
private:
    const string valorValido   = "00000";
    const string valorInvalido = "30813299";

    CodigoReserva *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Cidade
class TUCidade {
private:
    const string valorValido   = "Brasilia.";
    const string valorInvalido = "76354";

    Cidade *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Cpf
class TUCpf {
private:
    const string valorValido   = "03399105185";
    const string valorInvalido = "22212342224";

    Cpf *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Data
class TUData {
private:
    const string valorValido   = "01/10/2019";
    const string valorInvalido = "29/02/2019";

    Data *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Duracao
class TUDuracao {
private:
    const int valorValido   = 12;
    const int valorInvalido = 88;

    Duracao *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Estado
class TUEstado {
private:
    const string valorValido   = "ba";
    const string valorInvalido = "fg";

    Estado *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Email
class TUEmail {
private:
    const string valorValido   = "Julinho.2012@hotmail.com";
    const string valorInvalido = "Case#ior.@gmail.com";

    Email *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Nome
class TUNome {
private:
    const string valorValido   = "Igor Laranja.";
    const string valorInvalido = "J0rge  Silv4";

    Nome *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe NumeroAgencia
class TUNumeroAgencia {
private:
    const int valorValido   = 37622;
    const int valorInvalido = 98324;

    NumeroAgencia *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe NumeroConta
class TUNumeroConta {
private:
    const int valorValido   = 1111111;
    const int valorInvalido = 9832832;

    NumeroConta *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Preco
class TUPreco {
private:
    const int valorValido   = 1677;
    const int valorInvalido = 93321;

    Preco *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Telefone
class TUTelefone {
private:
    const string valorValido   = "5511986756327";
    const string valorInvalido = "9300873178231";

    Telefone *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Senha
class TUSenha {
private:
    const string valorValido   = "$Enh4";
    const string valorInvalido = "agora";

    Senha *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};
///Teste de Unidade para as funcoes publicas da Classe Vagas
class TUVagas {
private:
    const static int valorValido   = 0;
    const static int valorInvalido = -3;

    Vagas *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int sucesso =  0;
    const static int falha   = -1;

    int run();
};

#endif //TESTE_DOMINIO_H
