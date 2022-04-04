/*Programa para trabalhar com orientação a objeto Usando classes e objetos*/

#include<iostream>

/*chamada da biblioteca std*/
//using namespace std;
using std::cout;
using std::cin;

class textos
{
    public:
    void mensagem1()
    {
        cout<<"\nOlá!\n";
    }
    void mensagem2()
    {
        cout<<"\nBom dia!\n";
    }
};

int main()
{
    textos palavrinhas;
    palavrinhas.mensagem1();
    palavrinhas.mensagem2();

    return 0;
}