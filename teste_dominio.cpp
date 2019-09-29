#include "teste_dominio.hpp"

// Definições de métodos da classe TUAssento
void TUAssento::setUp(){
    codigo = new Assento();
    estado = sucesso;
}

void TUAssento::tearDown(){
    delete codigo;
}

void TUAssento::testarCenarioSucesso(){
    try{
        codigo->setAssento(valorValido);
        if (codigo->getAssento() != valorValido){
            cout << "Falha no valor valido de Assento no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Assento no set" << endl;
        estado = falha;
    }
}

void TUAssento::testarCenarioFalha(){
    try{
        codigo->setAssento(valorInvalido);
        cout << "Falha no valor invalido de Assento" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUAssento::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUBagagem
void TUBagagem::setUp(){
    codigo = new Bagagem();
    estado = sucesso;
}

void TUBagagem::tearDown(){
    delete codigo;
}

void TUBagagem::testarCenarioSucesso(){
    try{
        codigo->setBagagem(valorValido);
        if (codigo->getBagagem() != valorValido){
            cout << "Falha no valor valido de Bagagem no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Bagagem no set" << endl;
        estado = falha;
    }
}

void TUBagagem::testarCenarioFalha(){
    try{
        codigo->setBagagem(valorInvalido);
        cout << "Falha no valor invalido de Bagagem" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUBagagem::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUCodigoBanco
void TUCodigoBanco::setUp(){
    codigo = new CodigoBanco();
    estado = sucesso;
}

void TUCodigoBanco::tearDown(){
    delete codigo;
}

void TUCodigoBanco::testarCenarioSucesso(){
    try{
        codigo->setCodigoBanco(valorValido);
        if (codigo->getCodigoBanco() != valorValido){
            cout << "Falha no valor valido de CodigoBanco no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de CodigoBanco no set" << endl;
        estado = falha;
    }
}

void TUCodigoBanco::testarCenarioFalha(){
    try{
        codigo->setCodigoBanco(valorInvalido);
        cout << "Falha no valor invalido de CodigoBanco" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUCodigoBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUCodigoCarona
void TUCodigoCarona::setUp(){
    codigo = new CodigoCarona();
    estado = sucesso;
}

void TUCodigoCarona::tearDown(){
    delete codigo;
}

void TUCodigoCarona::testarCenarioSucesso(){
    try{
        codigo->setCodigoCarona(valorValido);
        if (codigo->getCodigoCarona() != valorValido){
            cout << "Falha no valor valido de CodigoCarona no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de CodigoCarona no set" << endl;
        estado = falha;
    }
}

void TUCodigoCarona::testarCenarioFalha(){
    try{
        codigo->setCodigoCarona(valorInvalido);
        cout << "Falha no valor invalido de CodigoCarona" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUCodigoCarona::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUCodigoReserva
void TUCodigoReserva::setUp(){
    codigo = new CodigoReserva();
    estado = sucesso;
}

void TUCodigoReserva::tearDown(){
    delete codigo;
}

void TUCodigoReserva::testarCenarioSucesso(){
    try{
        codigo->setCodigoReserva(valorValido);
        if (codigo->getCodigoReserva() != valorValido){
            cout << "Falha no valor valido de CodigoReserva no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de CodigoReserva no set" << endl;
        estado = falha;
    }
}

void TUCodigoReserva::testarCenarioFalha(){
    try{
        codigo->setCodigoReserva(valorInvalido);
        cout << "Falha no valor invalido de CodigoReserva" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUCodigoReserva::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUCidade
void TUCidade::setUp(){
    codigo = new Cidade();
    estado = sucesso;
}

void TUCidade::tearDown(){
    delete codigo;
}

void TUCidade::testarCenarioSucesso(){
    try{
        codigo->setCidade(valorValido);
        if (codigo->getCidade() != valorValido){
            cout << "Falha no valor valido de Cidade no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Cidade no set" << endl;
        estado = falha;
    }
}

void TUCidade::testarCenarioFalha(){
    try{
        codigo->setCidade(valorInvalido);
        cout << "Falha no valor invalido de Cidade" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUCpf
void TUCpf::setUp(){
    codigo = new Cpf();
    estado = sucesso;
}

void TUCpf::tearDown(){
    delete codigo;
}

void TUCpf::testarCenarioSucesso(){
    try{
        codigo->setCpf(valorValido);
        if (codigo->getCpf() != valorValido){
            cout << "Falha no valor valido de Cpf no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Cpf no set" << endl;
        estado = falha;
    }
}

void TUCpf::testarCenarioFalha(){
    try{
        codigo->setCpf(valorInvalido);
        cout << "Falha no valor invalido de Cpf" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUCpf::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUData
void TUData::setUp(){
    codigo = new Data();
    estado = sucesso;
}

void TUData::tearDown(){
    delete codigo;
}

void TUData::testarCenarioSucesso(){
    try{
        codigo->setData(valorValido);
        if (codigo->getData() != valorValido){
            cout << "Falha no valor valido de Data no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Data no set" << endl;
        estado = falha;
    }
}

void TUData::testarCenarioFalha(){
    try{
        codigo->setData(valorInvalido);
        cout << "Falha no valor invalido de Data" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUDuracao
void TUDuracao::setUp(){
    codigo = new Duracao();
    estado = sucesso;
}

void TUDuracao::tearDown(){
    delete codigo;
}

void TUDuracao::testarCenarioSucesso(){
    try{
        codigo->setDuracao(valorValido);
        if (codigo->getDuracao() != valorValido){
            cout << "Falha no valor valido de Duracao no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Duracao no set" << endl;
        estado = falha;
    }
}

void TUDuracao::testarCenarioFalha(){
    try{
        codigo->setDuracao(valorInvalido);
        cout << "Falha no valor invalido de Duracao" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUDuracao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUDuracao
void TUEstado::setUp(){
    codigo = new Estado();
    estado = sucesso;
}

void TUEstado::tearDown(){
    delete codigo;
}

void TUEstado::testarCenarioSucesso(){
    try{
        codigo->setEstado(valorValido);
        if (codigo->getEstado() != valorValido){
            cout << "Falha no valor valido de Estado no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Estado no set" << endl;
        estado = falha;
    }
}

void TUEstado::testarCenarioFalha(){
    try{
        codigo->setEstado(valorInvalido);
        cout << "Falha no valor invalido de Estado" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUEstado::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUEmail
void TUEmail::setUp(){
    codigo = new Email();
    estado = sucesso;
}

void TUEmail::tearDown(){
    delete codigo;
}

void TUEmail::testarCenarioSucesso(){
    try{
        codigo->setEmail(valorValido);
        if (codigo->getEmail() != valorValido){
            cout << "Falha no valor valido de Email no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Email no set" << endl;
        estado = falha;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        codigo->setEmail(valorInvalido);
        cout << "Falha no valor invalido de Email" << endl;
        estado = falha;
    }
    catch(invalid_argument){
        return;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Definições de métodos da classe TUNome
void TUNome::setUp(){
    codigo = new Nome();
    estado = sucesso;
}

void TUNome::tearDown(){
    delete codigo;
}

void TUNome::testarCenarioSucesso(){
    try{
        codigo->setNome(valorValido);
        if (codigo->getNome() != valorValido){
            cout << "Falha no valor valido de Nome no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Nome no set" << endl;
        estado = falha;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        codigo->setNome(valorInvalido);
        cout << "Falha no valor invalido de Nome" << endl;
        estado = falha;
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
    estado = sucesso;
}

void TUNumeroAgencia::tearDown(){
    delete codigo;
}

void TUNumeroAgencia::testarCenarioSucesso(){
    try{
        codigo->setNumeroAgencia(valorValido);
        if (codigo->getNumeroAgencia() != valorValido){
            cout << "Falha no valor valido de NumeroAgencia no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de NumeroAgencia no set" << endl;
        estado = falha;
    }
}

void TUNumeroAgencia::testarCenarioFalha(){
    try{
        codigo->setNumeroAgencia(valorInvalido);
        cout << "Falha no valor invalido de NumeroAgencia" << endl;
        estado = falha;
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
    estado = sucesso;
}

void TUNumeroConta::tearDown(){
    delete codigo;
}

void TUNumeroConta::testarCenarioSucesso(){
    try{
        codigo->setNumeroConta(valorValido);
        if (codigo->getNumeroConta() != valorInvalido){
            cout << "Falha no valor valido de NumeroConta no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de NumeroConta no set" << endl;
        estado = falha;
    }
}

void TUNumeroConta::testarCenarioFalha(){
    try{
        codigo->setNumeroConta(valorInvalido);
        cout << "Falha no valor invalido de NumeroConta" << endl;
        estado = falha;
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
    estado = sucesso;
}

void TUPreco::tearDown(){
    delete codigo;
}

void TUPreco::testarCenarioSucesso(){
    try{
        codigo->setPreco(valorValido);
        if (codigo->getPreco() != valorValido){
            cout << "Falha no valor valido de Preco no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Preco no set" << endl;
        estado = falha;
    }
}

void TUPreco::testarCenarioFalha(){
    try{
        codigo->setPreco(valorInvalido);
        cout << "Falha no valor invalido de Preco" << endl;
        estado = falha;
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
    estado = sucesso;
}

void TUTelefone::tearDown(){
    delete codigo;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        codigo->setTelefone(valorValido);
        if (codigo->getTelefone() != valorValido){
            cout << "Falha no valor valido de Telefone no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Telefone no set" << endl;
        estado = falha;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        codigo->setTelefone(valorInvalido);
        cout << "Falha no valor invalido de Telefone" << endl;
        estado = falha;
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
    estado = sucesso;
}

void TUSenha::tearDown(){
    delete codigo;
}

void TUSenha::testarCenarioSucesso(){
    try{
        codigo->setSenha(valorValido);
        if (codigo->getSenha() != valorValido){
            cout << "Falha no valor valido de Senha no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument){
        cout << "Falha no valor valido de Senha no set" << endl;
        estado = falha;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        codigo->setSenha(valorInvalido);
        cout << "Falha no valor invalido de Senha" << endl;
        estado = falha;
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
    estado = sucesso;
}

void TUVagas::tearDown(){
    delete codigo;
}

void TUVagas::testarCenarioSucesso(){
    try{
        codigo->setVagas(valorValido);
        if (codigo->getVagas() != valorValido){
            cout << "Falha no valor valido de vagas no get" << endl;
            estado = falha;
        }
    }
    catch(invalid_argument (excecao)){
        cout << "Falha no valor valido de vagas no set" << endl;
        estado = falha;
    }
}

void TUVagas::testarCenarioFalha(){
    try{
        codigo->setVagas(valorInvalido);
        cout << "Falha no valor invalido de vagas" << endl;
        estado = falha;
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
