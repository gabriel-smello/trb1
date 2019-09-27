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
    int getBagagem();

    void setBagagem(int codigo);
};

class CodigoBanco{
private:
    string codigo;

    void validar(string codigo) throw(invalid_argument);
public:
    string getCodigoBanco();

    void setCodigoBanco(string codigo);
};

class CodigoCarona{
private:
    string codigo;

    void validar(string codigo) throw(invalid_argument);
public:
    string getCodigoCarona();

    void setCodigoCarona(string codigo);
};

class CodigoReserva{
private:
    string codigo;

    void validar(string codigo) throw(invalid_argument);
public:
    string getCodigoReserva();

    void setCodigoReserva(string codigo);
};

class Cidade{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    string getCidade();
    void setCidade(string codigo);
};

class Cpf{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    string getCpf();
    void setCpf(string codigo);
};

class Data{
private:
    string codigo;
    const static int maxAno = 2099;
    void validar(string codigo) throw(invalid_argument);
public:
    string getData();
    void setData(string codigo);
};

class Duracao{
private:
    int codigo;
    const static int horaMin = 1;
    const static int horaMax = 48;
    void validar(int codigo) throw(invalid_argument);
public:
    int getDuracao();
    void setDuracao(int codigo);
};

class Estado{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    string getEstado();
    void setEstado(string codigo);
};

class Email{
private:
    string codigo;
    const static int numMaxLocal = 20;
    const static int numMaxDominio = 20;

    void validar(string codigo) throw(invalid_argument);
public:
    string getEmail();

    void setEmail(string codigo);
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
    const static float minPreco = 1.00;
    const static float maxPreco = 5000.00;
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
    void validar(int numVagas) throw(invalid_argument);
public:
    void setVagas(int numVagas);
    int getVagas();
};

#endif //DOMINIO_H
