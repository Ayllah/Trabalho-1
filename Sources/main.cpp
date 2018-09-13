#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{
	TUAgencia testeAgencia;
    TUCapadicadeDeAcomodacao testeCapacidade;
	TUDiaria testeDiaria;
	TUEstado testeEstado;

    switch(testeAgencia.run()){
        case TUAgencia::SUCESSO: cout << "SUCESSO" << endl;
                                                break;
        case TUAgencia::FALHA: cout << "FALHA" << endl;
                                                break;
    }
    
    switch(testeCapacidade.run()){
        case TUCapadicadeDeAcomodacao::SUCESSO: cout << "SUCESSO" << endl;
                                				break;
        case TUCapadicadeDeAcomodacao::FALHA  : cout << "FALHA" << endl;
                                				break;
    }

    switch(testeDiaria.run()){
        case TUDiaria::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUDiaria::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    switch(testeEstado.run()){
        case TUEstado::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUEstado::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    return 0;
}
