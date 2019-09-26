#include "teste_dominio.hpp"

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
