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

void TUData::setUp(){
    data = new Data();
    resultado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}

void TUDataDeValidade::setUp(){
    dataDeValidade = new DataDeValidade();
    resultado = SUCESSO;
}

void TUDataDeValidade::tearDown(){
    delete dataDeValidade;
}

void TUDataDeValidade::testarCenarioSucesso(){
    try{
        dataDeValidade->setDataDeValidade(VALOR_VALIDO);
        if (dataDeValidade->getDataDeValidade() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUDataDeValidade::testarCenarioFalha(){
    try{
        dataDeValidade->setDataDeValidade(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUDataDeValidade::run(){
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

void TUNome::setUp(){
    nome = new Nome();
    resultado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}

void TUNumeroDeCartaoDeCredito::setUp(){
    numCartaoDeCredito = new NumeroDeCartaoDeCredito;
    resultado = SUCESSO;
}

void TUNumeroDeCartaoDeCredito::tearDown(){
    delete numCartaoDeCredito;
}

void TUNumeroDeCartaoDeCredito::testarCenarioSucesso(){
    try{
        numCartaoDeCredito->setNumeroDeCartaoDeCredito(VALOR_VALIDO);
        if (numCartaoDeCredito->getNumeroDeCartaoDeCredito() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUNumeroDeCartaoDeCredito::testarCenarioFalha(){
    try{
        numCartaoDeCredito->setNumeroDeCartaoDeCredito(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNumeroDeCartaoDeCredito::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}

void TUNumeroDeContaCorrente::setUp(){
    contaCorrente = new NumeroDeContaCorrente();
    resultado = SUCESSO;
}

void TUNumeroDeContaCorrente::tearDown(){
    delete contaCorrente;
}

void TUNumeroDeContaCorrente::testarCenarioSucesso(){
    try{
        contaCorrente->setNumeroDeContaCorrente(VALOR_VALIDO);
        if (contaCorrente->getNumeroDeContaCorrente() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUNumeroDeContaCorrente::testarCenarioFalha(){
    try{
        contaCorrente->setNumeroDeContaCorrente(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNumeroDeContaCorrente::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}

void TUTipoDeAcomodacao::setUp(){
    acomodacao = new TipoDeAcomodacao();
    resultado = SUCESSO;
}

void TUTipoDeAcomodacao::tearDown(){
    delete acomodacao;
}

void TUTipoDeAcomodacao::testarCenarioSucesso(){
    try{
        acomodacao->setTipoDeAcomodacao(VALOR_VALIDO);
        if (acomodacao->getTipoDeAcomodacao() != VALOR_VALIDO)
            resultado = FALHA;
    }
    catch(invalid_argument excecao){
        resultado = FALHA;
    }
}

void TUTipoDeAcomodacao::testarCenarioFalha(){
    try{
        acomodacao->setTipoDeAcomodacao(VALOR_INVALIDO);
        resultado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTipoDeAcomodacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return resultado;
}
