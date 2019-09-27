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
public:
    void setAssento(char codigo);
    char getAssento();
};

class Bagagem {
private:
    int codigo;
    const static int maxBagagem = 4;
    void validar(int codigo) throw(invalid_argument);
public:
    void setBagagem(int codigo);
    int getBagagem();
};

class CodigoBanco{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    void setCodigoBanco(string codigo);
    string getCodigoBanco();
};

class CodigoCarona{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    void setCodigoCarona(string codigo);
    string getCodigoCarona();
};

class CodigoReserva{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    void setCodigoReserva(string codigo);
    string getCodigoReserva();
};

class Cidade{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    void setCidade(string codigo);
    string getCidade();
};

class Cpf{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    void setCpf(string codigo);
    string getCpf();
};

class Data{
private:
    string codigo;
    const static int maxAno = 2099;
    void validar(string codigo) throw(invalid_argument);
public:
    void setData(string codigo);
    string getData();
};

class Duracao{
private:
    int codigo;
    const static int horaMin = 1;
    const static int horaMax = 48;
    void validar(int codigo) throw(invalid_argument);
public:
    void setDuracao(int codigo);
    int getDuracao();
};

class Estado{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    void setEstado(string codigo);
    string getEstado();
};

class Email{
private:
    string codigo;
    const static int numMaxLocal = 20;
    const static int numMaxDominio = 20;

    void validar(string codigo) throw(invalid_argument);
public:
    void setEmail(string codigo);
    string getEmail();
};

class Nome{
private:
    string codigo;
    const static int maxNome = 20;
    void validar(string codigo) throw(invalid_argument);
public:
    void setNome(string codigo);
    string getNome();
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
