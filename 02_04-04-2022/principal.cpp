#include<iostream>
#include "usuario.h"
#include "operacao.h"

int main()
{
    system("clear");
    Usuario us;
    Operacao op;
    us.nome = "Lucas";
    us.email = "lucas@gmail.com";
    us.senha = "lucas123";
    us.nivel = "Admin";
    op.cadastro(us.nome,us.email,us.senha,us.nivel);

    return 0;
}