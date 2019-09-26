#ifndef TESTE_DOMINIO_H
#define TESTE_DOMINIO_H
#include "dominios.hpp"

using namespace std;

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
