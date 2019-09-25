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

class Cpf{
private:
    string codigo;
    void validar(string codigo);
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
    void validar(int codigo);
    void setDuracao(int codigo);
public:
    int getDuracao();
    Duracao(int codigo);
};

class Estado{
private:
    string codigo;
    void Validar(string codigo);
    void setEstado(string codigo);
public:
    string getEstado();
    Estado(string codigo);
};

class Email{
private:
    string codigo;
    void validar(string codigo);
    void setEmail(string codigo);
public:
    string getEmail();
    Email(string codigo);
};

class Nome{
private:
    string codigo;
    void validar(string codigo);
    void setNome(string codigo);
public:
    string getNome();
    Nome(string codigo);
};

class NumeroAgencia{
private:
    int numeroAgencia;
public:
    void setNumeroAgencia(int numeroAgencia);
    int getNumeroAgencia();
};

class NumeroConta{
private:
    int numeroConta;
public:
    void setNumeroConta(int numeroConta);
    int getNumeroConta();
};

class Preco{
private:
    int preco;
public:
    void setPreco(int preco);
    int getPreco();
};

class Telefone{
private:
    string numTelefone;
public:
    void setTelefone(string numTelefone);
    string getTelefone();
};

class Senha{
private:
    string senha;
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
