#include "dominios.hpp"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//Implementacao para a classe Assento
void Assento::setAssento(char codigo){
    this->codigo = codigo;
}

Assento::Assento(char codigo){
        setAssento(codigo);
}

char Assento::getAssento(){
    return codigo;
}

void Assento::validar(char CodigoBanco) throw(invalid_argument){
    codigo = toupper(codigo);
    if(codigo != 'D' || codigo != 'T'){
        throw invalid_argument("Tipo de assento invalido.");
    }
}

//Implementa�ao para a classe Bagagem
void Bagagem::setBagagem(int codigo){
    this->codigo = codigo;
}

Bagagem::Bagagem(int codigo){
    setBagagem(codigo);
}

int Bagagem::getBagagem(){
    return codigo;
}

void Bagagem::validar(int codigo) throw(invalid_argument){
    if(codigo < 0 || codigo > maxBagagem){
        throw invalid_argument("Numero de bagagens nao permitido.");
    }
}

//Implementacao para a classe codigoBanco
void CodigoBanco::setCodigoBanco(string codigo){
    this->codigo = codigo;
}

CodigoBanco::CodigoBanco(string codigo){
    setCodigoBanco(codigo);
}

string CodigoBanco::getCodigoBanco(){
    return codigo;
}

void CodigoBanco::validar(string codigo) throw(invalid_argument){
    int i = 0;
    if(codigo.length() != 3){
        throw invalid_argument("C�digo de banco invalido.");
    }
    while(i < codigo.length()){
        if(!isdigit(codigo[i])){
            throw invalid_argument("C�digo de banco invalido.");
        }
        i++;
    }
}

//Implementa�ao para a classe codigoCarona
void CodigoCarona::setCodigoCarona(string codigo){
    this->codigo = codigo;
}

CodigoCarona::CodigoCarona(string codigo){
    setCodigoCarona(codigo);
}

string CodigoCarona::getCodigoCarona(){
    return codigo;
}

void CodigoCarona::validar(string codigo) throw(invalid_argument){
    int i = 0;
    if(codigo.length() != 4){
        throw invalid_argument("C�digo de carona invalido.");
    }
    while(i < codigo.length()){
        if(!isdigit(codigo[i])){
            throw invalid_argument("C�digo de carona invalido.");
        }
        i++;
    }
}

//Implementa��o para a classe codigoReserva
void CodigoReserva::setCodigoReserva(string codigo){
    this->codigo = codigo;
}

CodigoReserva::CodigoReserva(string codigo){
    setCodigoReserva(codigo);
}

string CodigoReserva::getCodigoReserva(){
    return codigo;
}

void CodigoReserva::validar(string codigo) throw(invalid_argument){
    int i = 0;
    if(codigo.length() != 5){
        throw invalid_argument("C�digo de reserva invalido.");
    }
    while(i < codigo.length()){
        if(!isdigit(codigo[i])){
            throw invalid_argument("C�digo de reserva invalido.");
        }
        i++;
    }
}

//Implementa�ao para a classe Cidade
void Cidade::setCidade(string codigo){
    this->codigo = codigo;
}

Cidade::Cidade(string codigo){
    setCidade(codigo);
}

string Cidade::getCidade(){
    return codigo;
}

void Cidade::validar(string codigo) throw(invalid_argument){
    int i =0, contaLetra = 0;
    if(codigo.length() < 1 || codigo.length() > 10){
        throw invalid_argument("Cidade informada nao existente.");
 }
    while(i < codigo.length()){
        if(isalpha(codigo[i])){
            contaLetra++;
        }
        if(!isalpha(codigo[i]) || codigo[i] != '.' || codigo[i] != ' '){
            throw invalid_argument("Uso de caractere nao permitido em Cidade.");
        }else if(codigo [i] == '.' && !isalpha(codigo[i-1])){
                throw invalid_argument("Sequencia de digitos de cidade nao permitida.");
        }else if(codigo[i] == ' ' && codigo[i+1] == ' '){
                throw invalid_argument("Sequencia de digitos de cidade nao permitida.");
        }
        i++;
    }
    if(contaLetra == 0){
        throw invalid_argument("� necessario pelo menos uma letra em Cidade.");
    }
}

//Implementa�ao para a classe Cpf
void Cpf::setCpf(string codigo){
    this->codigo = codigo;
}

Cpf::Cpf(string codigo){
    setCpf(codigo);
}

string Cpf::getCpf(){
    return codigo;
}

//Implementa�ao para a classe Data
void Data::setData(string codigo){
    this->codigo = codigo;
}

Data::Data(string codigo){
    setData(codigo);
}

string Data::getData(){
    return codigo;
}

//implementa�ao para a classe Duracao
void Duracao::setDuracao(int codigo){
    this->codigo = codigo;
}

Duracao::Duracao(int codigo){
    setDuracao(codigo);
}

int Duracao::getDuracao(){
    return codigo;
}

//Implementa�ao para a classe Estado
void Estado::setEstado(string codigo){
    this->codigo = codigo;
}

Estado::Estado(string codigo){
    setEstado(codigo);
}

string Estado::getEstado(){
    return codigo;
}

//Implementacao para a classe Email
void Email::setEmail(string codigo){
    this->codigo = codigo;
}

Email::Email(string codigo){
    setEmail(codigo);
}

string Email::getEmail(){
    return codigo;
}

//Implementacao para a classe Nome
void Nome::setNome(string codigo){
    this->codigo = codigo;
}

Nome::Nome(string codigo){
    setNome(codigo);
}

string Nome::getNome(){
    return codigo;
}

// Metodos classe dominio NumeroAgencia
    int NumeroAgencia::getNumeroAgencia(){
        return numeroAgencia;
    }

    void NumeroAgencia::setNumeroAgencia(int numeroAgencia){
        this->numeroAgencia = numeroAgencia;
    }

// Metodos classe dominio NumeroConta
    int NumeroConta::getNumeroConta(){
        return numeroConta;
    }

    void NumeroConta::setNumeroConta(int numeroConta){
        this->numeroConta = numeroConta;
    }

// Metodos classe dominio Pre�o
    int Preco::getPreco(){
        return preco;
    }

    void Preco::setPreco(int preco){
        this->preco = preco;
    }

// Metodos classe dominio Telefone
    string Telefone::getTelefone(){
        return numTelefone;
    }

    void Telefone::setTelefone(string numTelefone){
        this->numTelefone = numTelefone;
    }

// Metodos classe dominio Senha
    string Senha::getSenha(){
        return senha;
    }

    void Senha::setSenha(string senha){
        this->senha = senha;
    }

// Metodos classe dominio Vagas
    int Vagas::getVagas(){
        return numVagas;
    }

    void Vagas::setVagas(int numVagas){
        this->numVagas = numVagas;
    }

    void Vagas::validar(int numVagas) throw(invalid_argument){
        if(numVagas < 0 || numVagas > maxVagas){
            throw invalid_argument("Numero de vagas invalido.");
        }
    }
