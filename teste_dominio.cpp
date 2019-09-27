#include "teste_dominio.hpp"

// Definições de métodos da classe TUNome
void TUNome::setUp(){
    codigo = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete codigo;
}

void TUNome::testarCenarioSucesso(){
    try{
        codigo->setNome(VALOR_VALIDO);
        if (codigo->getNome() != VALOR_VALIDO){
            cout << "Falha no valor valido de Nome no get" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Nome no set" << endl;
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        codigo->setNome(VALOR_INVALIDO);
        cout << "Falha no valor invalido de Nome" << endl;
        estado = FALHA;
    }
    catch(invalid_argument){
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUNumeroAgencia
void TUNumeroAgencia::setUp(){
    codigo = new NumeroAgencia();
    estado = SUCESSO;
}

void TUNumeroAgencia::tearDown(){
    delete codigo;
}

void TUNumeroAgencia::testarCenarioSucesso(){
    try{
        codigo->setNumeroAgencia(VALOR_VALIDO);
        if (codigo->getNumeroAgencia() != VALOR_VALIDO){
            cout << "Falha no valor valido de NumeroAgencia no get" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de NumeroAgencia no set" << endl;
        estado = FALHA;
    }
}

void TUNumeroAgencia::testarCenarioFalha(){
    try{
        codigo->setNumeroAgencia(VALOR_INVALIDO);
        cout << "Falha no valor invalido de NumeroAgencia" << endl;
        estado = FALHA;
    }
    catch(invalid_argument){
        return;
    }
}

int TUNumeroAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUNumeroConta
void TUNumeroConta::setUp(){
    codigo = new NumeroConta();
    estado = SUCESSO;
}

void TUNumeroConta::tearDown(){
    delete codigo;
}

void TUNumeroConta::testarCenarioSucesso(){
    try{
        codigo->setNumeroConta(VALOR_VALIDO);
        if (codigo->getNumeroConta() != VALOR_VALIDO){
            cout << "Falha no valor valido de NumeroConta no get" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de NumeroConta no set" << endl;
        estado = FALHA;
    }
}

void TUNumeroConta::testarCenarioFalha(){
    try{
        codigo->setNumeroConta(VALOR_INVALIDO);
        cout << "Falha no valor invalido de NumeroConta" << endl;
        estado = FALHA;
    }
    catch(invalid_argument){
        return;
    }
}

int TUNumeroConta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUPreco
void TUPreco::setUp(){
    codigo = new Preco();
    estado = SUCESSO;
}

void TUPreco::tearDown(){
    delete codigo;
}

void TUPreco::testarCenarioSucesso(){
    try{
        codigo->setPreco(VALOR_VALIDO);
        if (codigo->getPreco() != VALOR_VALIDO){
            cout << "Falha no valor valido de Preco no get" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Preco no set" << endl;
        estado = FALHA;
    }
}

void TUPreco::testarCenarioFalha(){
    try{
        codigo->setPreco(VALOR_INVALIDO);
        cout << "Falha no valor invalido de Preco" << endl;
        estado = FALHA;
    }
    catch(invalid_argument){
        return;
    }
}

int TUPreco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUTelefone
void TUTelefone::setUp(){
    codigo = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete codigo;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        codigo->setTelefone(VALOR_VALIDO);
        if (codigo->getTelefone() != VALOR_VALIDO){
            cout << "Falha no valor valido de Telefone no get" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Telefone no set" << endl;
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        codigo->setTelefone(VALOR_INVALIDO);
        cout << "Falha no valor invalido de Telefone" << endl;
        estado = FALHA;
    }
    catch(invalid_argument){
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUSenha
void TUSenha::setUp(){
    codigo = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete codigo;
}

void TUSenha::testarCenarioSucesso(){
    try{
        codigo->setSenha(VALOR_VALIDO);
        if (codigo->getSenha() != VALOR_VALIDO){
            cout << "Falha no valor valido de Senha no get" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Senha no set" << endl;
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        codigo->setSenha(VALOR_INVALIDO);
        cout << "Falha no valor invalido de Senha" << endl;
        estado = FALHA;
    }
    catch(invalid_argument){
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUVagas
void TUVagas::setUp(){
    codigo = new Vagas();
    estado = SUCESSO;
}

void TUVagas::tearDown(){
    delete codigo;
}

void TUVagas::testarCenarioSucesso(){
    try{
        codigo->setVagas(VALOR_VALIDO);
        if (codigo->getVagas() != VALOR_VALIDO){
            cout << "Falha no valor valido de vagas no get" << endl;
            estado = FALHA;
        }
    }
    catch(invalid_argument (excecao)){
        cout << "Falha no valor valido de vagas no set" << endl;
        estado = FALHA;
    }
}

void TUVagas::testarCenarioFalha(){
    try{
        codigo->setVagas(VALOR_INVALIDO);
        cout << "Falha no valor invalido de vagas" << endl;
        estado = FALHA;
    }
    catch(invalid_argument){
        return;
    }
}

int TUVagas::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
