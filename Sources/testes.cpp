#include "testes.h"

// Definições de métodos.

void TUAgencia::setUp(){
    agencia = new Agencia();
    resultado = SUCESSO;
}

void TUAgencia::tearDown(){
    delete agencia;
}

void TUAgencia::testarCenarioSucesso(){
    try{
        agencia->setAgencia(VALOR_VALIDO);
        if (agencia->getAgencia() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUAgencia::testarCenarioFalha(){
    try{
        agencia->setAgencia(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}

void TUBanco::setUp(){
    banco = new Banco();
    resultado = SUCESSO;
}

void TUBanco::tearDown(){
    delete banco;
}

void TUBanco::testarCenarioSucesso(){
    try{
        banco->setBanco(VALOR_VALIDO);
        if(banco->getBanco() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUBanco::testarCenarioFalha(){
    try{
        banco->setBanco(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}

void TUCapadicadeDeAcomodacao::setUp(){
    capacidade = new CapadicadeDeAcomodacao();
    resultado = SUCESSO;
}

void TUCapadicadeDeAcomodacao::tearDown(){
    delete capacidade;
}

void TUCapadicadeDeAcomodacao::testarCenarioSucesso(){
    try{
        capacidade->setCapacidade(VALOR_VALIDO);
        if (capacidade->getCapacidade() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUCapadicadeDeAcomodacao::testarCenarioFalha(){
    try{
        capacidade->setCapacidade(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCapadicadeDeAcomodacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}


void TUDiaria::setUp(){
    preco = new Diaria();
    resultado = SUCESSO;
}

void TUDiaria::tearDown(){
    delete preco;
}

void TUDiaria::testarCenarioSucesso(){
    try{
        preco->setDiaria(VALOR_VALIDO);
        if (preco->getDiaria() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUDiaria::testarCenarioFalha(){
    try{
        preco->setDiaria(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUDiaria::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}


void TUEstado::setUp(){
    sigla = new Estado();
    resultado = SUCESSO;
}

void TUEstado::tearDown(){
    delete sigla;
}

void TUEstado::testarCenarioSucesso(){
    try{
        sigla->setEstado(VALOR_VALIDO);
        if (sigla->getEstado() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUEstado::testarCenarioFalha(){
    try{
        sigla->setEstado(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEstado::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}

void TUIdentificador::setUp(){
    identificador = new Identificador();
    resultado = SUCESSO;
}

void TUIdentificador::tearDown(){
    delete identificador;
}

void TUIdentificador::testarCenarioSucesso(){
    try{
        identificador->setIdentificador(VALOR_VALIDO);
        if (identificador->getIdentificador() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUIdentificador::testarCenarioFalha(){
    try{
        identificador->setIdentificador(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUIdentificador::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}