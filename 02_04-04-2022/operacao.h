#include<iostream>
#include<string>
using std::string;
using namespace std;

class Operacao
{
    public:
        void cadastro(string nome, string senha, string email, string nivel)
        {
            cout<<"cadastro de usuário realizado com sucesso!\n";
        }
        string login(string  nome, string senha)
        {
            return "Seja bem vindo!\n";
        }
        string trocarSenha(string nome, string senha)
        {
            return "\nSenha alterada\n";
        }      
};