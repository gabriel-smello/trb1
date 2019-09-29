#ifndef DOMINIO_H
#define DOMINIO_H
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
///Classe usada para guardar o tipo de assento solicitado.
class Assento {
private:
    char codigo;
    void validar(char codigo) throw(invalid_argument);
public:
    void setAssento(char codigo);
    char getAssento();
};
///Classe usada para guardar o numero de bagagens solicitada.
class Bagagem {
private:
    int codigo;

    const static int maxBagagem = 4;
    void validar(int codigo) throw(invalid_argument);
public:
    int getBagagem();

    void setBagagem(int codigo);
};
///Classe usada para guardar o numero da conta informada.
class CodigoBanco{
private:
    string codigo;

    void validar(string codigo) throw(invalid_argument);
public:
    string getCodigoBanco();

    void setCodigoBanco(string codigo);
};
///Classe usada para guardar o codigo da carona informada.
class CodigoCarona{
private:
    string codigo;

    void validar(string codigo) throw(invalid_argument);
public:
    string getCodigoCarona();

    void setCodigoCarona(string codigo);
};
///Classe usada para guardar o codigo da reserva da carona.
class CodigoReserva{
private:
    string codigo;

    void validar(string codigo) throw(invalid_argument);
public:
    string getCodigoReserva();

    void setCodigoReserva(string codigo);
};
///classe usada para guardar informacao de cidade (origem/destino).
class Cidade{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    string getCidade();
    void setCidade(string codigo);
};
///Classe usada para guardar o CPF do usuario
class Cpf{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    string getCpf();
    void setCpf(string codigo);
};
///Classe usada para guardar a data da carona.
class Data{
private:
    string codigo;
    const static int maxAno = 2099;
    void validar(string codigo) throw(invalid_argument);
public:
    string getData();
    void setData(string codigo);
};
///Classe usada para guardar a Duracao da carona informada.
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
///Classe usada para guardar informacao de estado (origem/destino).
class Estado{
private:
    string codigo;
    void validar(string codigo) throw(invalid_argument);
public:
    string getEstado();
    void setEstado(string codigo);
};
///Classe usada para guardar o EMAIL do usuario.
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
///Classe usada para guardar o nome do usuario.
class Nome{
private:
    string codigo;
    const static int maxNome = 20;
    void validar(string codigo) throw(invalid_argument);
public:
    void setNome(string codigo);
    string getNome();
};
///Classe usada para guardar o numero de agencia informada.
class NumeroAgencia{
private:
    int numeroAgencia;
    void validar(int numeroAgencia) throw(invalid_argument);
public:
    void setNumeroAgencia(int numeroAgencia);
    int getNumeroAgencia();
};
///Classe usada para guardar o numero de conta informada.
class NumeroConta{
private:
    int numeroConta;
    void validar(int numeroConta) throw(invalid_argument);
public:
    void setNumeroConta(int numeroConta);
    int getNumeroConta();
};
///Classe usada para guardar o preco da carona.
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
///Classe usada para guardar o numero de telefone informado.
class Telefone{
private:
    string numTelefone;
    void validar(string numTelefone) throw(invalid_argument);
public:
    void setTelefone(string numTelefone);
    string getTelefone();
};
///Classe usada para guardar a senha do usuario.
class Senha{
private:
    static const int tamanhoSenha = 5;
    string senha;
    void validar(string senha) throw(invalid_argument);
public:
    void setSenha(string senha);
    string getSenha();
};
///Classe usada para guardar a informacao de numero de vagas usadas/disponiveis.
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
