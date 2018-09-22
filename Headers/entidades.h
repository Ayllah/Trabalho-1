#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Usuario {
private:
    Nome nomeUsuario;
    Identificador identificadorUsuario;
    Senha senhaUsuario;

public:

    void setNomeUsuario(Nome nomeUsuario){
        this->nomeUsuario = nomeUsuario;
    }

    Nome getNomeUsuario() const {
        return nomeUsuario;
    }

    void setIdentificadorUsuario(Identificador identificadorUsuario){
        this->identificadorUsuario = identificadorUsuario;
    }

    Identificador getIdentificadorUsuario() const {
        return identificadorUsuario;
    }

    void setSenhaUsuario(Senha senhaUsuario){
        this->senhaUsuario = senhaUsuario;
    }

    Senha getSenhaUsuario() const {
        return senhaUsuario;
    }
};

class Acomodacao {
private:
	Identificador identificadorAcomodacao;
	TipoDeAcomodacao acomodacaoAcomodacao;
	CapacidadeDeAcomodacao capacidadeAcomodacao;
	Data dataInicioAcomodacao;
	Data dataTerminoAcomodacao;
	Nome cidadeAcomodacao;
	Estado siglaAcomodacao;
	Diaria precoAcomodacao;

public:
	void setIdentificadorAcomodacao(Identificador identificadorAcomodacao){
        this->identificadorAcomodacao = identificadorAcomodacao;
    }

    Identificador getIdentificadorAcomodacao() const {
        return identificadorAcomodacao;
    }

    void setTipoAcomodacao(TipoDeAcomodacao acomodacaoAcomodacao){
        this->acomodacaoAcomodacao = acomodacaoAcomodacao;
    }

    TipoDeAcomodacao getTipoAcomodacao() const {
        return acomodacaoAcomodacao;
    }

    void setCapacidadeAcomodacao(CapacidadeDeAcomodacao capacidadeAcomodacao){
        this->capacidadeAcomodacao = capacidadeAcomodacao;
    }

    CapacidadeDeAcomodacao getCapacidadeAcomodacao() const {
        return capacidadeAcomodacao;
    }

    void setDataInicioAcomodacao(Data dataInicioAcomodacao){
        this->dataInicioAcomodacao = dataInicioAcomodacao;
    }

    Data getDataInicioAcomodacao() const {
        return dataInicioAcomodacao;
    }

    void setDataTerminoAcomodacao(Data dataTerminoAcomodacao){
        this->dataTerminoAcomodacao = dataTerminoAcomodacao;
    }

    Data getDataTerminoAcomodacao() const {
        return dataTerminoAcomodacao;
    }

    void setNomeAcomodacao(Nome cidadeAcomodacao){
        this->cidadeAcomodacao = cidadeAcomodacao;
    }

    Nome getNomeAcomodacao() const {
        return cidadeAcomodacao;
    }

    void setEstadoAcomodacao(Estado siglaAcomodacao){
        this->siglaAcomodacao = siglaAcomodacao;
    }

    Estado getEstadoAcomodacao() const {
        return siglaAcomodacao;
    }

    void setDiariaAcomodacao(Diaria precoAcomodacao){
        this->precoAcomodacao = precoAcomodacao;
    }

    Diaria getDiariaAcomodacao() const {
        return precoAcomodacao;
    }
};

class CartaoDeCredito {
private:
	NumeroDeCartaoDeCredito numCartaoCredito;
	DataDeValidade dataDeValidadeCartaoDeCredito;

public:

	void setNumeroCartaoCredito(NumeroDeCartaoDeCredito numCartaoCredito){
        this->numCartaoCredito = numCartaoCredito;
    }

    NumeroDeCartaoDeCredito getNumeroCartaoCredito() const {
        return numCartaoCredito;
    }

    void setDataDeValidadeCartaoDeCredito(DataDeValidade dataDeValidadeCartaoDeCredito){
        this->dataDeValidadeCartaoDeCredito = dataDeValidadeCartaoDeCredito;
    }

    DataDeValidade getDataDeValidadeCartaoDeCredito() const {
        return dataDeValidadeCartaoDeCredito;
    }
};

class ContaCorrente {
private:
	NumeroDeContaCorrente numeroContaCorrente;
	Agencia agenciaContaCorrente;
	Banco bancoContaCorrente;

public:

	void setNumeroContaCorrente(NumeroDeContaCorrente numeroContaCorrente){
        this->numeroContaCorrente = numeroContaCorrente;
    }

    NumeroDeContaCorrente getNumeroContaCorrente() const {
        return numeroContaCorrente;
    }

    void setAgenciaContaCorrente(Agencia agenciaContaCorrente){
        this->agenciaContaCorrente = agenciaContaCorrente;
    }

    Agencia getAgenciaContaCorrente() const {
        return agenciaContaCorrente;
    }

    void setBancoContaCorrente(Banco bancoContaCorrente){
        this->bancoContaCorrente = bancoContaCorrente;
    }

    Banco getBancoContaCorrente() const {
        return bancoContaCorrente;
    }
};

#endif // ENTIDADES_H_INCLUDED
