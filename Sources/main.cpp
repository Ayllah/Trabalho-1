#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testesDominios.h"
#include "testesEntidades.h"

using namespace std;

int main()
{
    TUAgencia testeAgencia;
    TUBanco testeBanco;
    TUCapacidadeDeAcomodacao testeCapacidade;
    TUDiaria testeDiaria;
    TUData testeData;
    TUDataDeValidade testeDataDeValidade;
    TUEstado testeEstado;
    TUIdentificador testeIdentificador;
    TUNome testeNome;
    TUNumeroDeCartaoDeCredito testeNumeroDeCartaoDeCredito;
    TUNumeroDeContaCorrente testeContaCorrente;
    TUSenha testeSenha;
    TUTipoDeAcomodacao testeTipoAcomodacao;
    TUUsuario testeUsuario;
    TUAcomodacao testeAcomodacao;
    TUCartaoDeCredito testeCartao;
    TUContaCorrente testeConta;


    switch(testeAgencia.run()){
        case TUAgencia::SUCESSO: cout << "TUAgencia : SUCESSO" << endl;
                                 break;
        case TUAgencia::FALHA  : cout << "TUAgencia : FALHA" << endl;
                                 break;
    }
    
    switch(testeBanco.run()){
        case TUBanco::SUCESSO: cout << "TUBanco : SUCESSO" << endl;
                               break;
        case TUBanco::FALHA  : cout << "TUBanco : FALHA" << endl;
                               break;
    }

    switch(testeCapacidade.run()){
        case TUCapacidadeDeAcomodacao::SUCESSO: cout << "TUCapacidadeDeAcomodacao : SUCESSO" << endl;
                                				break;
        case TUCapacidadeDeAcomodacao::FALHA  : cout << "TUCapacidadeDeAcomodacao : FALHA" << endl;
                                				break;
    }

    switch(testeDiaria.run()){
        case TUDiaria::SUCESSO: cout << "TUDiaria : SUCESSO" << endl;
                                break;
        case TUDiaria::FALHA  : cout << "TUDiaria : FALHA" << endl;
                                break;
    }

    switch(testeData.run()){
        case TUAgencia::SUCESSO: cout << "TUAgencia : SUCESSO" << endl;
                                 break;
        case TUAgencia::FALHA  : cout << "TUAgencia : FALHA" << endl;
                                 break;
    }

    switch(testeDataDeValidade.run()){
        case TUDataDeValidade::SUCESSO: cout << "TUDataDeValidade : SUCESSO" << endl;
                                        break;
        case TUDataDeValidade::FALHA  : cout << "TUDataDeValidade : FALHA" << endl;
                                        break;
    }

    switch(testeEstado.run()){
        case TUEstado::SUCESSO: cout << "TUEstado : SUCESSO" << endl;
                                break;
        case TUEstado::FALHA  : cout << "TUEstado : FALHA" << endl;
                                break;
    }

    switch(testeIdentificador.run()){
        case TUIdentificador::SUCESSO: cout << "TUIdentificador : SUCESSO" << endl;
                                       break;
        case TUIdentificador::FALHA  : cout << "TUIdentificador : FALHA" << endl;
                                       break;
    }

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "TUNome : SUCESSO" << endl;
                              break;
        case TUNome::FALHA  : cout << "TUNome : FALHA" << endl;
                              break;
    }

    switch(testeNumeroDeCartaoDeCredito.run()){
        case TUNumeroDeCartaoDeCredito::SUCESSO: cout << "TUNumeroDeCartaoDeCredito : SUCESSO" << endl;
                                                 break;
        case TUNumeroDeCartaoDeCredito::FALHA  : cout << "TUNumeroDeCartaoDeCredito : FALHA" << endl;
                                                 break;
    }

    switch(testeContaCorrente.run()){
        case TUNumeroDeContaCorrente::SUCESSO: cout << "TUNumeroDeContaCorrente : SUCESSO" << endl;
                                               break;
        case TUNumeroDeContaCorrente::FALHA  : cout << "TUNumeroDeContaCorrente : FALHA" << endl;
                                               break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "TUSenha : SUCESSO" << endl;
                               break;
        case TUSenha::FALHA  : cout << "TUSenha : FALHA" << endl;
                               break;
    }

    switch(testeTipoAcomodacao.run()){
        case TUTipoDeAcomodacao::SUCESSO: cout << "TUTipoDeAcomodacao : SUCESSO" << endl;
                                          break;
        case TUTipoDeAcomodacao::FALHA  : cout << "TUTipoDeAcomodacao : FALHA" << endl;
                                          break;
    }

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "TUUsuario : SUCESSO" << endl;
                                 break;
    }

    switch(testeAcomodacao.run()){
        case TUAcomodacao::SUCESSO: cout << "TUAcomodacao : SUCESSO" << endl;
                                    break;
    }

    switch(testeCartao.run()){
        case TUCartaoDeCredito::SUCESSO: cout << "TUCartaoDeCredito : SUCESSO" << endl;
                                         break;
    }

    switch(testeConta.run()){
        case TUContaCorrente::SUCESSO: cout << "TUContaCorrente : SUCESSO" << endl;
                                       break;
    }
    

    return 0;
}
