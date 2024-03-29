#include "dominios.hpp"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//Implementacao para a classe Assento
void Assento::setAssento(char codigo){
    validar(codigo);
    this->codigo = codigo;
}

char Assento::getAssento(){
    return codigo;
}

void Assento::validar(char codigo) throw(invalid_argument){
    codigo = toupper(codigo);
    if(codigo != 'D' && codigo != 'T'){
        throw invalid_argument("Tipo de assento invalido.");
    }
}

//Implementaçao para a classe Bagagem
void Bagagem::setBagagem(int codigo){
    validar(codigo);
    this->codigo = codigo;
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
    validar(codigo);
    this->codigo = codigo;
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
    validar(codigo);
    this->codigo = codigo;
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
    validar(codigo);
    this->codigo = codigo;
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
    validar(codigo);
    this->codigo = codigo;
}

string Cidade::getCidade(){
    return codigo;
}

void Cidade::validar(string codigo) throw(invalid_argument){
    int i = 0, contaLetra = 0;
    if(codigo.length() < 1 || codigo.length() > 10){
        throw invalid_argument("Quantidade de caracteres invalida.");
 }
    while(i < codigo.length()){
        if(isalpha(codigo[i])){
            contaLetra++;
        }
        if(!(isalpha(codigo[i]) || codigo[i] == '.' || codigo[i] == ' ')){
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
    validar(codigo);
    this->codigo = codigo;
}

string Cpf::getCpf(){
    return codigo;
}

void Cpf::validar(string codigo) throw(invalid_argument){
    int i = 0, digito1 = 0, digito2 = 0, j;

    if(codigo.length() != 11){
        throw invalid_argument("O CPF deve conter 11 digitos.");
    }
    while(i < 11){
        if(!isdigit(codigo[i])){
            throw invalid_argument("O CPF deve conter apenas numeros.");
        }
        i++;
    }
    j = 10;
    i = 0;
    while(i < 9){
        digito1 = digito1 + ((codigo[i] - 48) * j);
        j--;
        i++;
    }
    digito1 = (digito1 * 10) % 11;
    if(digito1 == 10){
        digito1 = 0;
    }
    j = 11;
    i = 0;
    while(i < 10){
        digito2 = digito2 + ((codigo[i]-48) * j);
        j--;
        i++;
    }
    digito2 = (digito2 * 10) % 11;
    if(digito2 == 10){
        digito2 = 0;
    }
    if(digito1 != (codigo[9]-48)|| digito2 != (codigo[10]-48) ){
        throw invalid_argument("CPF invalido.");
    }
}

//Implementaçao para a classe Data
void Data::setData(string codigo){
    validar(codigo);
    this->codigo = codigo;
}

string Data::getData(){
    return codigo;
}

void Data::validar(string codigo) throw(invalid_argument){
    string dia = "00", mes = "00", ano = "0000";
    int numDia, numMes, numAno;
    if(codigo.length() != 10){
        throw invalid_argument("Tamanho de data invalido.");
    }
    if(codigo[2] != '/' || codigo[5] != '/'){
        throw invalid_argument("Formato de data invalido.");
    }
    dia[0] = codigo[0];
    dia[1] = codigo[1];

    mes[0] = codigo[3];
    mes[1] = codigo[4];

    ano[0] = codigo[6];
    ano[1] = codigo[7];
    ano[2] = codigo[8];
    ano[3] = codigo[9];

    numDia = (dia[0] - 48)*10 + (dia[1] - 48); //transformando char em int
    numMes = (mes[0] - 48)*10 + (mes[1] - 48); //transformando char em int
    numAno = (ano[0] - 48)*1000 + (ano[1] - 48)*100 + (ano[2] - 48)*10 + (ano[3] - 48);

    if(numDia > 31 || numDia < 1){
        throw invalid_argument("Dia invalido");
    }
    if(numMes > 12 || numDia < 1){
        throw invalid_argument("Mes invalido");
    }
    if(numAno > maxAno || numAno < 2000){
        throw invalid_argument("Ano invalido");
    }
    //verificacao fevereiro em ano bissexto
    if(numMes == 2 && numAno%4 == 0){
        if(numDia > 29){
            throw invalid_argument("Dia invalido.");
        }
    }
    if(numMes == 2 && numAno%4 != 0){
        if(numDia > 28){
            throw invalid_argument("Dia invalido.");
        }
    }
}

//implementaçao para a classe Duracao
void Duracao::setDuracao(int codigo){
    validar(codigo);
    this->codigo = codigo;
}

int Duracao::getDuracao(){
    return codigo;
}

void Duracao::validar(int codigo) throw(invalid_argument){
    if(codigo < horaMin || codigo > horaMax){
        throw invalid_argument("Hora nao permitida.");
    }
}

//Implementaçao para a classe Estado
void Estado::setEstado(string codigo){
    validar(codigo);
    this->codigo = codigo;
}

string Estado::getEstado(){
    return codigo;
}

void Estado::validar(string codigo) throw(invalid_argument){
    string UF = "00";
    if(codigo.length() != 2){
        throw invalid_argument("UF de tamanho invalido.");
    }
    UF[0] = toupper(codigo[0]);
    UF[1] = toupper(codigo[1]);
    if(!(   UF == "AC" || UF == "AL" || UF == "AP" || UF == "AM" || UF == "BA" || UF == "CE" || UF == "DF" || UF == "ES" ||
            UF == "GO" || UF == "MA" || UF == "MT" || UF == "MS" || UF == "NG" || UF == "PA" || UF == "PB" || UF == "PR" ||
            UF == "PE" || UF == "PI" || UF == "RJ" || UF == "RN" || UF == "RS" || UF == "RO" || UF == "RR" || UF == "SC" ||
            UF == "SP" || UF == "SE" || UF == "TO" ) ){
        throw invalid_argument("UF nao reconhecida.");
    }
}


//Implementacao para a classe Email
void Email::setEmail(string codigo){
    validar(codigo);
    this->codigo = codigo;
}

string Email::getEmail(){
    return codigo;
}

void Email::validar(string codigo) throw(invalid_argument){
    int i, contChar = 0, contArroba = 0; //contadores
    int arroba; //marcadores

    if(codigo.length() > numMaxLocal+numMaxDominio+1  ||  codigo.length() < 3){
        throw invalid_argument("Quantidade invalida de caracteres.");
    }

    for(i=0 ; i<codigo.length() ; i++){
        if(codigo[i] == '@'){
            arroba = i;
            contArroba++;
        }
    }

    if(contArroba != 1 ){
        throw invalid_argument("Quantidade invalida de @.");
    }

    if(codigo[0] == '.' || codigo[arroba-1] == '.' || codigo[arroba+1] == '.'){
        throw invalid_argument("Ponto em local invalido.");
    }

    for(i=0 ; i<codigo.length() ; i++){
        if(codigo[i] == '.' && codigo[i+1] == '.'){
            throw invalid_argument("Pontos em sequencia.");
        }
        if( isalpha(codigo[i]) || codigo[i] == '.' || isdigit(codigo[i])){
            if(isdigit(codigo[i]) && i > arroba){
                throw invalid_argument("O dominio nao pode conter numeros.");
            }
            contChar++;
        } else {
            if(codigo[i] == '@'){
                if(contChar > numMaxLocal){
                    throw invalid_argument("Quantidade invalida Local.");
                }
                contChar = 0;
            }else{
                throw invalid_argument ("Caracter invalido.");
            }
        }
    }
    if(contChar > numMaxDominio){
        throw invalid_argument("Quantidade invalida Dominio.");
    }
}


//Implementacao para a classe Nome
    void Nome::setNome(string codigo){
        validar(codigo);
        this->codigo = codigo;
    }

    string Nome::getNome(){
        return codigo;
    }

    void Nome::validar(string codigo) throw(invalid_argument){
        int i;
        if(codigo.length() < 1 || codigo.length() > maxNome){
            throw invalid_argument("Tamanho de argumento invalido.");
        }
        for(i=0 ; i<codigo.length() ; i++){
            if(!(codigo[i] == 32 || codigo[i] == 46 || isalpha(codigo[i]) ) ){
                throw invalid_argument("Caracter invalido.");
            }
            if(codigo[i] == ' ' && codigo[i+1] == ' '){
                throw invalid_argument("Espacamento duplo.");
            }
        }
    }

// Metodos classe dominio NumeroAgencia
    int NumeroAgencia::getNumeroAgencia(){
        return numeroAgencia;
    }

    void NumeroAgencia::setNumeroAgencia(int numeroAgencia){
        validar(numeroAgencia);
        this->numeroAgencia = numeroAgencia;
    }

    void NumeroAgencia::validar(int numeroAgencia) throw(invalid_argument){
        int number = numeroAgencia;
        int vetorNum[5]; //vetor que ira conter cada digito do numeroAgencia em ordem.
        int soma = 0;
        int i;

         if(numeroAgencia > 99999){
            throw invalid_argument("Quantidade invalida de digitos.");
        }

        for (int i = 4; i >= 0; i--) {
            vetorNum[i] = number%10;
            number /= 10;
        }

        //Utilizando o algoritimo de luhn para verificar o numeroAgencia
        for(i=0; i<4; i=i+2){
            soma += (vetorNum[i]*2)%10 + (vetorNum[i]*2)/10;
        }
        for(i=1; i<4; i=i+2){
            soma += vetorNum[i];
        }
        if(soma%10 == 0){
            if(vetorNum[4] != 0){
                throw invalid_argument("Digito verificador nao corresponde");
            }
        }
        else{
            if(10 - soma%10 != vetorNum[4]){
                throw invalid_argument("Digito verificador nao corresponde");
            }
        }
    }


// Metodos classe dominio NumeroConta
    int NumeroConta::getNumeroConta(){
        return numeroConta;
    }

    void NumeroConta::setNumeroConta(int numeroConta){
        validar(numeroConta);
        this->numeroConta = numeroConta;
    }

    void NumeroConta::validar(int numeroConta) throw(invalid_argument){
        int number = numeroConta;
        int vetorNum[7]; //vetor que ira conter cada digito do numeroConta em ordem.
        int soma = 0;
        int i;

        if(numeroConta > 9999999){
            throw invalid_argument("Quantidade invalida de digitos.");
        }

        for (int i = 6; i >= 0; i--) {
            vetorNum[i] = number%10;
            number /= 10;
        }

        //Utilizando o algoritimo de luhn para verificar o numeroConta
        for(i=0; i<6; i=i+2){
            soma += (vetorNum[i]*2)%10 + (vetorNum[i]*2)/10;
        }
        for(i=1; i<6; i=i+2){
            soma += vetorNum[i];
        }
        if(soma%10 == 0){
            if(vetorNum[6] != 0){
                throw invalid_argument("Digito verificador nao corresponde");
            }
        }
        else{
            if(10 - soma%10 != vetorNum[6]){
                throw invalid_argument("Digito verificador nao corresponde");
            }
        }
    }

// Metodos classe dominio Preço
    float Preco::getPreco(){
        return preco;
    }

    void Preco::setPreco(float preco){
        validar(preco);
        this->preco = preco;
    }

    void Preco::validar(float preco) throw(invalid_argument){
        if(preco < minPreco || preco > maxPreco){
            throw invalid_argument("Preco invalido");
        }
    }


// Metodos classe dominio Telefone
    string Telefone::getTelefone(){
        return numTelefone;
    }

    void Telefone::setTelefone(string numTelefone){
        validar(numTelefone);
        this->numTelefone = numTelefone;
    }

    void Telefone::validar(string numTelefone) throw(invalid_argument){
        int i;
        if(numTelefone.length() != 13){
            throw invalid_argument("Argumento de tamanho invalido.");
        }
        for(i = 0; i < 13; i++){
            if(numTelefone[i] < 48 || numTelefone[i] > 57){ //verificando se o caracter é um numero(0-9).
                throw invalid_argument("Caracter invalido");
            }
        }
        if(numTelefone[0] == '0' && numTelefone[1] == '0'){
            throw invalid_argument("Codigo invalido");
        }
        if(numTelefone[2] == '0' && numTelefone[3] == '0'){
            throw invalid_argument("Codigo invalido");
        }
        for(i=4; numTelefone[i] == '0'; i++){
            if(i == 12){ //Ao chegar no final do numero de telefone e todos caracteres = 0
                throw invalid_argument("Telefone invalido");
            }
        }
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
        validar(numVagas);
        this->numVagas = numVagas;
    }

    void Vagas::validar(int numVagas) throw(invalid_argument){
        if(numVagas < 0 || numVagas > maxVagas){
            throw invalid_argument("Numero de vagas invalido.");
        }
    }
