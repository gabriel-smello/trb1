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

//Implementaçao para a classe Bagagem
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
        throw invalid_argument("Código de banco invalido.");
    }
    while(i < codigo.length()){
        if(!isdigit(codigo[i])){
            throw invalid_argument("Código de banco invalido.");
        }
        i++;
    }
}

//Implementaçao para a classe codigoCarona
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
        throw invalid_argument("Código de carona invalido.");
    }
    while(i < codigo.length()){
        if(!isdigit(codigo[i])){
            throw invalid_argument("Código de carona invalido.");
        }
        i++;
    }
}

//Implementação para a classe codigoReserva
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
        throw invalid_argument("Código de reserva invalido.");
    }
    while(i < codigo.length()){
        if(!isdigit(codigo[i])){
            throw invalid_argument("Código de reserva invalido.");
        }
        i++;
    }
}

//Implementaçao para a classe Cidade
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
        throw invalid_argument("É necessario pelo menos uma letra em Cidade.");
    }
}

//Implementaçao para a classe Cpf
void Cpf::setCpf(string codigo){
    this->codigo = codigo;
}

Cpf::Cpf(string codigo){
    setCpf(codigo);
}

string Cpf::getCpf(){
    return codigo;
}

//Implementaçao para a classe Data
void Data::setData(string codigo){
    this->codigo = codigo;
}

Data::Data(string codigo){
    setData(codigo);
}

string Data::getData(){
    return codigo;
}

//implementaçao para a classe Duracao
void Duracao::setDuracao(int codigo){
    this->codigo = codigo;
}

Duracao::Duracao(int codigo){
    setDuracao(codigo);
}

int Duracao::getDuracao(){
    return codigo;
}

//Implementaçao para a classe Estado
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

// Metodos classe dominio Preço
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
        validar(senha);
        this->senha = senha;
    }

        void Senha::validar(string senha) throw(invalid_argument){
        int i, j;

        if(senha.length() != tamanhoSenha){
            throw invalid_argument("Argumento de tamanho invalido");
        }
        for(i = 0; i < tamanhoSenha; i++){
            if(senha[i] < 35 || (senha[i]>38 && senha[i]<48) || (senha[i]>57 && senha[i]<65) || (senha[i]>90 && senha[i]<97) || senha[i]>122){
               //Intervalos de caracteres da tabela ascii nao permitidos.
                throw invalid_argument("Caracter nao permitido");
            }
            for(j = i+1; j < tamanhoSenha; j++){
                if(senha[i] == senha[j]){ //verificando se os proximos caracteres sao iguais ao atual
                    throw invalid_argument("Caracter repetido");
                }
            }
        }
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
