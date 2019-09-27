#ifndef TESTE_DOMINIO_H
#define TESTE_DOMINIO_H
#include "dominios.hpp"

using namespace std;

class TUNome {
private:
    const string VALOR_VALIDO   = "Igor Laranja.";
    const string VALOR_INVALIDO = "J0rge  Silv4";

    Nome *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNumeroAgencia {
private:
    const int VALOR_VALIDO   = 37622;
    const int VALOR_INVALIDO = 98324;

    NumeroAgencia *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNumeroConta {
private:
    const int VALOR_VALIDO   = 1111111;
    const int VALOR_INVALIDO = 9832832;

    NumeroConta *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUPreco {
private:
    const int VALOR_VALIDO   = 1677;
    const int VALOR_INVALIDO = 93321;

    Preco *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUTelefone {
private:
    const string VALOR_VALIDO   = "5511986756327";
    const string VALOR_INVALIDO = "9300873178231";

    Telefone *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUSenha {
private:
    const string VALOR_VALIDO   = "$Enh4";
    const string VALOR_INVALIDO = "agora";

    Senha *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUVagas {
private:
    const static int VALOR_VALIDO   = 0;
    const static int VALOR_INVALIDO = 5;

    Vagas *codigo;         // Referência para o objeto a ser testado.

    int estado;             // Estado do teste.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};


#endif //TESTE_DOMINIO_H
