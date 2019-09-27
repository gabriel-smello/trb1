#include "entidades.hpp"

using namespace std;

//Metodos classe Usuario
Usuario::Usuario(Nome nome, Telefone telefone, Email email, Senha senha, Cpf cpf):
                nome(nome), telefone(telefone), email(email), senha(senha), cpf(cpf){
}

void Usuario::setNome(const Nome& nome) {
        this->nome = nome;
}

Nome Usuario::getNome() const {
        return nome;
}

void Usuario::setTelefone(const Telefone& telefone) {
        this->telefone = telefone;
}

Telefone Usuario::getTelefone() const {
        return telefone;
}

void Usuario::setEmail(const Email& email) {
        this->email = email;
}

Email Usuario::getEmail() const {
        return email;
}

void Usuario::setSenha(const Senha& senha) {
        this->senha = senha;
}

Senha Usuario::getSenha() const {
        return senha;
}

void Usuario::setCpf(const Cpf& cpf) {
        this->cpf = cpf;
}

Cpf Usuario::getCpf() const {
        return cpf;
}

//Metodos Classe Reserva
Reserva::Reserva(CodigoReserva codigo, Assento assento, Bagagem bagagem):
                codigo(codigo), assento(assento), bagagem(bagagem){
}

void Reserva::setCodigoReserva(const CodigoReserva& codigo) {
        this->codigo = codigo;
}

CodigoReserva Reserva::getCodigoReserva() const {
        return codigo;
}

void Reserva::setAssento(const Assento& assento) {
        this->assento = assento;
}

Assento Reserva::getAssento() const {
        return assento;
}

void Reserva::setBagagem(const Bagagem& bagagem) {
        this->bagagem = bagagem;
}

Bagagem Reserva::getBagagem() const {
        return bagagem;
}

//Metodos Classe Conta
Conta::Conta(CodigoBanco banco, NumeroAgencia agencia, NumeroConta numero):
                banco(banco), agencia(agencia), numero(numero){
}

void Conta::setCodigoBanco(const CodigoBanco& banco){
    this->banco = banco;
}

CodigoBanco Conta::getCodigoBanco() const {
        return banco;
}

void Conta::setNumeroAgencia(const NumeroAgencia& agencia){
    this->agencia = agencia;
}

NumeroAgencia Conta::getNumeroAgencia() const {
        return agencia;
}

void Conta::setNumeroConta(const NumeroConta& numero){
    this->numero = numero;
}

NumeroConta Conta::getNumeroConta() const {
        return numero;
}

