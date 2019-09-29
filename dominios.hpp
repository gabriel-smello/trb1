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
    ///Metodo de validacao do codigo seguindo as especificacoes da classe
    void validar(char codigo) throw(invalid_argument);
public:
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe Assento
    void setAssento(char codigo);
    ///Metodo que retorna a variavel codigo da classe Assento
    char getAssento();
};
///Classe usada para guardar o numero de bagagens solicitada.
class Bagagem {
private:
    int codigo;
    const static int maxBagagem = 4;
    ///Metodo de validacao seguindo as especificacoes da classe
    void validar(int codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe Bagagem
    int getBagagem();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe Bagagem
    void setBagagem(int codigo);
};
///Classe usada para guardar o numero da conta informada.
class CodigoBanco{
private:
    string codigo;
    ///Metodo de validacao seguindo as especificacoes da classe
    void validar(string codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe CodigoBanco
    string getCodigoBanco();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe CodigoBanco
    void setCodigoBanco(string codigo);
};
///Classe usada para guardar o codigo da carona informada.
class CodigoCarona{
private:
    string codigo;
    ///Metodo de validacao seguindo as especificacoes da classe
    void validar(string codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe CodigoCarona
    string getCodigoCarona();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe CodigoCarona
    void setCodigoCarona(string codigo);
};
///Classe usada para guardar o codigo da reserva da carona.
class CodigoReserva{
private:
    string codigo;
    ///Metodo de validacao seguindo as especificacoes da classe
    void validar(string codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe CodigoReserva
    string getCodigoReserva();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe CodigoReserva
    void setCodigoReserva(string codigo);
};
///Classe usada para guardar informacao de cidade (origem/destino).
class Cidade{
private:
    string codigo;
    ///Metodo de validacao seguindo as especificacoes da classe
    void validar(string codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe Cidade
    string getCidade();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe Cidade
    void setCidade(string codigo);
};
///Classe usada para guardar o CPF do usuario
class Cpf{
private:
    string codigo;
    ///Metodo de validacao seguindo as especificacoes da classe
    void validar(string codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe Cpf
    string getCpf();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe Cpf
    void setCpf(string codigo);
};
///Classe usada para guardar a data da carona.
class Data{
private:
    string codigo;
    const static int maxAno = 2099; //Ano maximo permitido pela validacao
    ///Metodo de validacao seguindo as especificacoes da variavel
    void validar(string codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe Data
    string getData();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe Data
    void setData(string codigo);
};
///Classe usada para guardar a Duracao da carona informada.
class Duracao{
private:
    int codigo;
    const static int horaMin = 1;
    const static int horaMax = 48;
    ///Metodo de validacao seguindo as especificacoes da variavel
    void validar(int codigo) throw(invalid_argument);
public:
    ///Metodo que retorna a variavel codigo da classe Duracao
    int getDuracao();
    ///Metodo que permite a insercao ou alteracoes da variavel codigo na classe Duracao
    void setDuracao(int codigo);
};
///Classe usada para guardar informacao de estado (origem/destino).
class Estado{
private:
    string codigo;
    ///Metodo de validacao seguindo as especificacoes da variavel
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
    ///Metodo de validacao seguindo as especificacoes da classe
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
    ///Metodo de validacao seguindo as especificacoes da variavel
    void validar(string codigo) throw(invalid_argument);
public:
    void setNome(string codigo);
    string getNome();
};
///Classe usada para guardar o numero de agencia informada.
class NumeroAgencia{
private:
    int numeroAgencia;
    ///Metodo de validacao seguindo as especificacoes da variavel
    void validar(int numeroAgencia) throw(invalid_argument);
public:
    void setNumeroAgencia(int numeroAgencia);
    int getNumeroAgencia();
};
///Classe usada para guardar o numero de conta informada.
class NumeroConta{
private:
    int numeroConta;
    ///Metodo de validacao seguindo as especificacoes da variavel
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
    ///Metodo de validacao seguindo as especificacoes da variavel
    void validar(float preco) throw(invalid_argument);
public:
    void setPreco(float preco);
    float getPreco();
};
///Classe usada para guardar o numero de telefone informado.
class Telefone{
private:
    string numTelefone;
    ///Metodo de validacao seguindo as especificacoes da variavel
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
    ///Metodo de validacao seguindo as especificacoes da variavel
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
    ///Metodo de validacao seguindo as especificacoes da variavel numVagas
    void validar(int numVagas) throw(invalid_argument);
public:
    void setVagas(int numVagas);
    int getVagas();
};

#endif //DOMINIO_H
