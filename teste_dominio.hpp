#ifndef TESTE_DOMINIO_H
#define TESTE_DOMINIO_H
#include "dominios.hpp"

using namespace std;

class TUAssento {
private:
    const char VALOR_VALIDO   = 'D';
    const char VALOR_INVALIDO = 'b';

    Assento *codigo;         // Referência para o objeto a ser testado.

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

class TUBagagem {
private:
    const int VALOR_VALIDO   = 3;
    const int VALOR_INVALIDO = 7;

    Bagagem *codigo;         // Referência para o objeto a ser testado.

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

class TUCodigoBanco {
private:
    const string VALOR_VALIDO   = "876";
    const string VALOR_INVALIDO = "-83";

    CodigoBanco *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUCodigoCarona {
private:
    const string VALOR_VALIDO   = "8762";
    const string VALOR_INVALIDO = "10000";

    CodigoCarona *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUCodigoReserva {
private:
    const string VALOR_VALIDO   = "00000";
    const string VALOR_INVALIDO = "30813299";

    CodigoReserva *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUCidade {
private:
    const string VALOR_VALIDO   = "Brasilia.";
    const string VALOR_INVALIDO = "76354";

    Cidade *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUCpf {
private:
    const string VALOR_VALIDO   = "03399105185";
    const string VALOR_INVALIDO = "22212342224";

    Cpf *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUData {
private:
    const string VALOR_VALIDO   = "01/10/2019";
    const string VALOR_INVALIDO = "29/02/2019";

    Data *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUDuracao {
private:
    const int VALOR_VALIDO   = 12;
    const int VALOR_INVALIDO = 88;

    Duracao *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUEstado {
private:
    const string VALOR_VALIDO   = "ba";
    const string VALOR_INVALIDO = "fg";

    Estado *codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUEmail {
private:
    const string VALOR_VALIDO   = "Julinho.2012@hotmail.com";
    const string VALOR_INVALIDO = "Case#ior.@gmail.com";

    Email *codigo;         // Referência para o objeto a ser testado.

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
    const static int VALOR_INVALIDO = -3;

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
