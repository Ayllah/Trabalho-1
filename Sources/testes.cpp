#include "testes.h"

// Definições de métodos.

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
