#include <iostream>
#include "dominios.hpp"
#include "teste_dominio.hpp"
using namespace std;

int main()
{
    //Aqui vai os testes de cada um dos dominios
    TUSenha TesteSenha;
    TUVagas TesteVaga;
    
    
    cout << "Senha: " << TesteSenha.run() << "\n\n";
    cout << "Vaga: " << TesteVaga.run() << "\n";
    return 0;
}
