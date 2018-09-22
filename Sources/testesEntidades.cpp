#include "testesEntidades.h"

// Definições de métodos.

void TUUsuario::setUp(){
    usuario = new Usuario();
    resultado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
        Nome *nome;
        Identificador *identificador;
        Senha *senha;

        nome = new Nome();
        identificador = new Identificador();
        senha = new Senha();

        nome->setNome(VALOR_VALIDO_NOME);
        identificador->setIdentificador(VALOR_VALIDO_IDENTIFICADOR);
        senha->setSenha(VALOR_VALIDO_SENHA);

        usuario->setNomeUsuario(*nome);
        usuario->setIdentificadorUsuario(*identificador);
        usuario->setSenhaUsuario(*senha);

        Nome auxiliarNome = usuario->getNomeUsuario();
        Identificador auxiliarIdentificador = usuario->getIdentificadorUsuario();
        Senha auxiliarSenha = usuario->getSenhaUsuario();

        if(auxiliarNome.getNome() == VALOR_VALIDO_NOME){
            resultado = SUCESSO;
        }

        if(auxiliarIdentificador.getIdentificador() == VALOR_VALIDO_IDENTIFICADOR){
            resultado = SUCESSO;
        }

        if(auxiliarSenha.getSenha() == VALOR_VALIDO_SENHA){
            resultado = SUCESSO;
        }
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}


void TUAcomodacao::setUp(){
    acomodacao = new Acomodacao();
    resultado = SUCESSO;

}

void TUAcomodacao::tearDown(){
    delete acomodacao;

}

void TUAcomodacao::testarCenarioSucesso(){
    Identificador *identificador;
    TipoDeAcomodacao *tipoAcomodacao;
    CapacidadeDeAcomodacao *capacidade;
    Data *dataInicio;
    Data *dataTermino;
    Nome *cidade;
    Estado *sigla;
    Diaria *preco;

    identificador = new Identificador();
    tipoAcomodacao = new TipoDeAcomodacao();
    capacidade = new CapacidadeDeAcomodacao();
    dataInicio = new Data();
    dataTermino = new Data();
    cidade = new Nome();
    sigla = new Estado();
    preco = new Diaria();

    identificador->setIdentificador(VALOR_VALIDO_IDENTIFICADOR);
    tipoAcomodacao->setTipoDeAcomodacao(VALOR_VALIDO_ACOMODACAO);
    capacidade->setCapacidade(VALOR_VALIDO_CAPACIDADE);
    dataInicio->setData(VALOR_VALIDO_INICIO);
    dataTermino->setData(VALOR_VALIDO_TERMINO);
    cidade->setNome(VALOR_VALIDO_CIDADE);
    sigla->setEstado(VALOR_VALIDO_SIGLA);
    preco->setDiaria(VALOR_VALIDO_PRECO);

    acomodacao->setIdentificadorAcomodacao(*identificador);
    acomodacao->setTipoAcomodacao(*tipoAcomodacao);
    acomodacao->setCapacidadeAcomodacao(*capacidade);
    acomodacao->setDataInicioAcomodacao(*dataInicio);
    acomodacao->setDataTerminoAcomodacao(*dataTermino);
    acomodacao->setNomeAcomodacao(*cidade);
    acomodacao->setEstadoAcomodacao(*sigla);
    acomodacao->setDiariaAcomodacao(*preco);

    Identificador auxiliarIdentificador = acomodacao->getIdentificadorAcomodacao();
    TipoDeAcomodacao auxiliarAcomodacao = acomodacao->getTipoAcomodacao();
    CapacidadeDeAcomodacao auxiliarCapacidade = acomodacao->getCapacidadeAcomodacao();
    Data auxiliarDataInicio = acomodacao->getDataInicioAcomodacao();
    Data auxiliarDataTermino = acomodacao->getDataTerminoAcomodacao();
    Nome auxiliarNome = acomodacao->getNomeAcomodacao();
    Estado auxiliarEstado = acomodacao->getEstadoAcomodacao();
    Diaria auxiliarDiaria = acomodacao->getDiariaAcomodacao();

    if(auxiliarIdentificador.getIdentificador() == VALOR_VALIDO_IDENTIFICADOR){
        resultado = SUCESSO;
    }

    if(auxiliarAcomodacao.getTipoDeAcomodacao() == VALOR_VALIDO_ACOMODACAO){
        resultado = SUCESSO;
    }

    if(auxiliarCapacidade.getCapacidade() == VALOR_VALIDO_CAPACIDADE){
        resultado = SUCESSO;
    }

    if(auxiliarDataInicio.getData() == VALOR_VALIDO_INICIO){
        resultado = SUCESSO;
    }

    if(auxiliarDataTermino.getData() == VALOR_VALIDO_TERMINO){
        resultado = SUCESSO;
    }

    if(auxiliarNome.getNome() == VALOR_VALIDO_CIDADE){
        resultado = SUCESSO;
    }

    if(auxiliarEstado.getEstado() == VALOR_VALIDO_SIGLA){
        resultado = SUCESSO;
    }

    if(auxiliarDiaria.getDiaria() == VALOR_VALIDO_PRECO){
        resultado = SUCESSO;
    }

}

int TUAcomodacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}

void TUCartaoDeCredito::setUp(){
    cartaoDeCredito = new CartaoDeCredito();
    resultado = SUCESSO;
}

void TUCartaoDeCredito::tearDown(){
    delete cartaoDeCredito;
}

void TUCartaoDeCredito::testarCenarioSucesso(){
    NumeroDeCartaoDeCredito *numeroDeCartaoDeCredito;
    DataDeValidade *dataDeValidade;

    numeroDeCartaoDeCredito = new NumeroDeCartaoDeCredito();
    dataDeValidade = new DataDeValidade();

    numeroDeCartaoDeCredito->setNumeroDeCartaoDeCredito(VALOR_VALIDO_CARTAO);
    dataDeValidade->setDataDeValidade(VALOR_VALIDO_VALIDADE);

    cartaoDeCredito->setNumeroCartaoCredito(*numeroDeCartaoDeCredito);
    cartaoDeCredito->setDataDeValidadeCartaoDeCredito(*dataDeValidade);

    NumeroDeCartaoDeCredito auxiliarNumeroDeCartaoDeCredito = cartaoDeCredito->getNumeroCartaoCredito();
    DataDeValidade auxiliarDataDeValidade = cartaoDeCredito->getDataDeValidadeCartaoDeCredito();

    if(auxiliarNumeroDeCartaoDeCredito.getNumeroDeCartaoDeCredito() == VALOR_VALIDO_CARTAO){
        resultado = SUCESSO;
    }

    if(auxiliarDataDeValidade.getDataDeValidade() == VALOR_VALIDO_VALIDADE){
        resultado = SUCESSO;
    }

}

int TUCartaoDeCredito::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}

void TUContaCorrente::setUp(){
    contaCorrente = new ContaCorrente();
    resultado = SUCESSO;
}

void TUContaCorrente::tearDown(){
    delete contaCorrente;
}

void TUContaCorrente::testarCenarioSucesso(){
    NumeroDeContaCorrente *numeroConta;
    Agencia *agencia;
    Banco *banco;

    numeroConta = new NumeroDeContaCorrente();
    agencia = new Agencia();
    banco = new Banco();

    numeroConta->setNumeroDeContaCorrente(VALOR_VALIDO_CONTA);
    agencia->setAgencia(VALOR_VALIDO_AGENCIA);
    banco->setBanco(VALOR_VALIDO_BANCO);

    contaCorrente->setNumeroContaCorrente(*numeroConta);
    contaCorrente->setAgenciaContaCorrente(*agencia);
    contaCorrente->setBancoContaCorrente(*banco);

    NumeroDeContaCorrente auxiliarContaCorrente = contaCorrente->getNumeroContaCorrente();
    Agencia auxiliarAgencia = contaCorrente->getAgenciaContaCorrente();
    Banco auxiliarBanco = contaCorrente->getBancoContaCorrente();

    if(auxiliarContaCorrente.getNumeroDeContaCorrente() == VALOR_VALIDO_CONTA){
        resultado = SUCESSO;
    }

    if(auxiliarAgencia.getAgencia() == VALOR_VALIDO_AGENCIA){
        resultado = SUCESSO;
    }

    if(auxiliarBanco.getBanco() == VALOR_VALIDO_BANCO){
        resultado = SUCESSO;
    }
    
}

int TUContaCorrente::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}
