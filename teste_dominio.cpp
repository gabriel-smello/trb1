#include "teste_dominio.hpp"

//Definições de constantes.

const int TUVagas::SUCESSO;
const int TUVagas::FALHA;
const int TUVagas::VALOR_VALIDO;
const int TUVagas::VALOR_INVALIDO;

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
        if (codigo->getVagas() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument){
        estado = FALHA;
    }
}

void TUVagas::testarCenarioFalha(){
    try{
        codigo->setVagas(VALOR_INVALIDO);
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
