#include "teste_entidade.hpp"

//Metodos TUUsuario
void TUUsuario::setUp(){
    entidade = new Usuario();
    estado = sucesso;
}

void TUUsuario::testes(){
    entidade->setNome(testeNome);
    if(entidade->getNome().getNome() != testeNome.getNome()){
        estado = falha;
    }

    entidade->setTelefone(testeTelefone);
    if(entidade->getTelefone().getTelefone() != testeTelefone.getTelefone()){
        estado = falha;
    }

    entidade->setEmail(testeEmail);
    if(entidade->getEmail().getEmail() != testeEmail.getEmail()){
        estado = falha;
    }

    entidade->setSenha(testeSenha);
    if(entidade->getSenha().getSenha() != testeSenha.getSenha()){
        estado = falha;
    }

    entidade->setCpf(testeCpf);
    if(entidade->getCpf().getCpf() != testeCpf.getCpf()){
        estado = falha;
    }
}

void TUUsuario::tearDown(){
    delete entidade;
}

int TUUsuario::run(){
    setUp();
    testes();
    tearDown();
    return estado;
}

//Metodos TUReserva
void TUReserva::setUp(){
    entidade = new Reserva();
    estado = sucesso;
}

void TUReserva::testes(){
    entidade->setCodigoReserva(testeCodigoReserva);
    if(entidade->getCodigoReserva().getCodigoReserva() != testeCodigoReserva.getCodigoReserva()){
        estado = falha;
    }

    entidade->setAssento(testeAssento);
    if(entidade->getAssento().getAssento() != testeAssento.getAssento()){
        estado = falha;
    }

    entidade->setBagagem(testeBagagem);
    if(entidade->getBagagem().getBagagem() != testeBagagem.getBagagem()){
        estado = falha;
    }
}

void TUReserva::tearDown(){
    delete entidade;
}

int TUReserva::run(){
    setUp();
    testes();
    tearDown();
    return estado;
}

//Metodos TUCarona
void TUCarona::setUp(){
    entidade = new Carona();
    estado = sucesso;
}

void TUCarona::testes(){
    entidade->setCodigoCarona(testeCodigoCarona);
    if(entidade->getCodigoCarona().getCodigoCarona() != testeCodigoCarona.getCodigoCarona()){
        estado = falha;
    }

    entidade->setCidadeOrigem(testeCidadeOrigem);
    if(entidade->getCidadeOrigem().getCidade() != testeCidadeOrigem.getCidade()){
        estado = falha;
    }

    entidade->setCidadeDestino(testeCidadeDestino);
    if(entidade->getCidadeDestino().getCidade() != testeCidadeDestino.getCidade()){
        estado = falha;
    }

    entidade->setEstadoOrigem(testeEstadoOrigem);
    if(entidade->getEstadoOrigem().getEstado() != testeEstadoOrigem.getEstado()){
        estado = falha;
    }

    entidade->setEstadoDestino(testeEstadoDestino);
    if(entidade->getEstadoDestino().getEstado() != testeEstadoDestino.getEstado()){
        estado = falha;
    }

    entidade->setData(testeData);
    if(entidade->getData().getData() != testeData.getData()){
        estado = falha;
    }

    entidade->setDuracao(testeDuracao);
    if(entidade->getDuracao().getDuracao() != testeDuracao.getDuracao()){
        estado = falha;
    }

    entidade->setVagas(testeVagas);
    if(entidade->getVagas().getVagas() != testeVagas.getVagas()){
        estado = falha;
    }

    entidade->setPreco(testePreco);
    if(entidade->getPreco().getPreco() != testePreco.getPreco()){
        estado = falha;
    }
}

void TUCarona::tearDown(){
    delete entidade;
}

int TUCarona::run(){
    setUp();
    testes();
    tearDown();
    return estado;
}


//Metodos TUConta
void TUConta::setUp(){
    entidade = new Conta();
    estado = sucesso;
}

void TUConta::testes(){
    entidade->setCodigoBanco(testeBanco);
    if(entidade->getCodigoBanco().getCodigoBanco() != testeBanco.getCodigoBanco()){
        estado = falha;
    }

    entidade->setNumeroAgencia(testeAgencia);
    if(entidade->getNumeroAgencia().getNumeroAgencia() != testeAgencia.getNumeroAgencia()){
        estado = falha;
    }

    entidade->setNumeroConta(testeNumero);
    if(entidade->getNumeroConta().getNumeroConta() != testeNumero.getNumeroConta()){
        estado = falha;
    }
}

void TUConta::tearDown(){
    delete entidade;
}

int TUConta::run(){
    setUp();
    testes();
    tearDown();
    return estado;
}
