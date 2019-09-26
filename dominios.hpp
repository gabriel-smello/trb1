#ifndef DOMINIO_H
#define DOMINIO_H
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Assento {
private:
    char codigo;
    void validar(char codigo) throw(invalid_argument);
    void setAssento(char codigo);
public:
    char getAssento();
    Assento(char codigo);
};

class Bagagem {
private:
    int codigo;
    const static int maxBagagem = 4;
    void validar(int codigo) throw(invalid_argument);
    void setBagagem(int codigo);
public:
    int getBagagem();
    Bagagem(int Ccdigo);
};

class CodigoBanco{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
    void setCodigoBanco(string codigo);
public:
    string getCodigoBanco();
    CodigoBanco(string codigo);

};

class CodigoCarona{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
    void setCodigoCarona(string codigo);
public:
    string getCodigoCarona();
    CodigoCarona(string codigo);
};

class CodigoReserva{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
    void setCodigoReserva(string codigo);
public:
    string getCodigoReserva();
    CodigoReserva(string codigo);
};

class Cidade{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
    void setCidade(string codigo);
public:
    string getCidade();
    Cidade(string codigo);
};

lass Cpf{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
    void setCpf(string codigo);
public:
    string getCpf();
    Cpf(string codigo);
};

class Data{
private:
    string codigo;
    void validar(string codigo);
    void setData(string codigo);
public:
    string getData();
    Data(string codigo);
};

class Duracao{
private:
    int codigo;
    const static int horaMin = 1;
    const static int horaMax = 48;
    void validar(int codigo) throw(invalid_argument);
    void setDuracao(int codigo);
public:
    int getDuracao();
    Duracao(int codigo);
};

class Estado{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
    void setEstado(string codigo);
public:
    string getEstado();
    Estado(string codigo);
};

class Email{
private:
    string codigo;
    const static int numMaxLocal = 20;
    const static int numMaxDominio = 20;

    void validar(string codigo) throw(invalid_argument);
    void setEmail(string codigo);
public:
    string getEmail();
    Email(string codigo);
};

class Nome{
private:
    string codigo;
    const static int maxNome = 20;
    void validar(string codigo) throw(invalid_argument);
    void setNome(string codigo);
public:
    string getNome();
    Nome(string codigo);
};

class NumeroAgencia{
private:
    int numeroAgencia;
    void validar(int numeroAgencia) throw(invalid_argument);
public:
    void setNumeroAgencia(int numeroAgencia);
    int getNumeroAgencia();
};

class NumeroConta{
private:
    int numeroConta;
    void validar(int numeroConta) throw(invalid_argument);
public:
    void setNumeroConta(int numeroConta);
    int getNumeroConta();
};

class Preco{
private:
    float minPreco = 1.00;
    float maxPreco = 5000.00;
    float preco;
    void validar(float preco) throw(invalid_argument);
public:
    void setPreco(float preco);
    float getPreco();
};

class Telefone{
private:
    string numTelefone;
    void validar(string numTelefone) throw(invalid_argument);
public:
    void setTelefone(string numTelefone);
    string getTelefone();
};

class Senha{
private:
    static const int tamanhoSenha = 5;
    string senha;
    void validar(string senha) throw(invalid_argument);
public:
    void setSenha(string senha);
    string getSenha();
};

class Vagas{
private:
    const static int maxVagas = 4;
    int numVagas;
    void validar(int) throw(invalid_argument);
public:
    void setVagas(int numVagas);
    int getVagas();
};

#endif //DOMINIO_H
