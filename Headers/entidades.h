#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Usuario {

private:
    Nome nome;
    Identificador identificador;
    Senha senha;

public:

    void setNome(Nome nome){
        this->nome = nome;
    }

    Nome getNome() const {
        return nome;
    }

    void setIdentificador(Identificador identificador){
        this->identificador = identificador;
    }

    Identificador getIdentificador() const {
        return identificador;
    }

    void setSenha(Senha senha){
        this->senha = senha;
    }

    Senha getSenha() const {
        return senha;
    }
};

class Acomodacao {
private:
	Identificador identificador;
	TipoDeAcomodacao acomodacao;
	CapadicadeDeAcomodacao capacidade;
	Data dataInicio;
	Data dataTermino;
	Nome cidade;
	Estado sigla;
	Diaria preco;

public:
	void setIdentificador(Identificador identificador){
        this->identificador = identificador;
    }

    Identificador getIdentificador() const {
        return identificador;
    }

    void setTipoDeAcomodacao(TipoDeAcomodacao acomodacao){
        this->acomodacao = acomodacao;
    }

    TipoDeAcomodacao getTipoDeAcomodacao() const {
        return acomodacao;
    }

    void setCapacidadeDeAcomodacao(CapacidadeDeAcomodacao capacidade){
        this->capacidade = capacidade;
    }

    CapacidadeDeAcomodacao getCapacidadeDeAcomodacao() const {
        return capacidade;
    }

    void setData(Data dataInicio){
        this->dataInicio = dataInicio;
    }

    Data getData() const {
        return dataInicio;
    }

    void setData(Data dataTermino){
        this->dataTermino = dataTermino;
    }

    Data getData() const {
        return dataTermino;
    }

    void setNome(Nome cidade){
        this->cidade = cidade;
    }

    Nome getNome() const {
        return cidade;
    }

    void setEstado(Estado sigla){
        this->sigla = sigla;
    }

    Estado getEstado() const {
        return sigla;
    }

    void setDiaria(Diaria preco){
        this->preco = preco;
    }

    Diaria getDiaria() const {
        return preco;
    }
};

class CartaoDeCredito {
private:
	NumeroDeCartaoDeCredito numCartaoDeCredito;
	DataDeValidade validade;

public:

	void setNumeroDeCartaoDeCredito(NumeroDeCartaoDeCredito numCartaoDeCredito){
        this->numCartaoDeCredito = numCartaoDeCredito;
    }

    NumeroDeCartaoDeCredito getNumeroDeCartaoDeCredito() const {
        return numCartaoDeCredito;
    }

    void setDataDeValidade(DataDeValidade validade){
        this->validade = validade;
    }

    DataDeValidade getDataDeValidade() const {
        return validade;
    }
};

class ContaCorrente {
private:
	NumeroDeContaCorrente contaCorrente;
	Agencia agencia;
	Banco banco;

public:

	void setNumeroDeContaCorrente(NumeroDeContaCorrente contaCorrente){
        this->contaCorrente = contaCorrente;
    }

    NumeroDeContaCorrente getNumeroDeContaCorrente() const {
        return contaCorrente;
    }

    void setAgencia(Agencia agencia){
        this->agencia = agencia;
    }

    Agencia getAgencia() const {
        return agencia;
    }

    void setBanco(Banco banco){
        this->banco = banco;
    }

    Banco getBanco() const {
        return banco;
    }
};


#endif // ENTIDADES_H_INCLUDED
