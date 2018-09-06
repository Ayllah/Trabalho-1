#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

//class Agencia{}
//class Banco{}

class CapadicadeDeAcomodacao {
private:
	int capacidade;
	const static int CAPACIDADE_MAXIMA = 9;
	const static int CAPACIDADE_MINIMA = 1;

	//Método responsável por validação

	void validar(int) throw (invalid_argument);

public:

 	//Métodos de acesso

	void setCapacidade(int) throw (invalid_argument);

    int getCapacidade() const {
        return capacidade;
    }
};

class Diaria {
private:
	double preco;
	const static double PRECO_MAXIMO = 10000.00;
	const static double PRECO_MINIMO = 1.00;

	//Método responsável por validação

	void validar(double) throw (invalid_argument);

public:

	//Métodos de acesso

	void setDiaria(double) throw (invalid_argument);

    double getDiaria() const {
        return preco;
    }

};

//class Data{}
//class DataDeValidade{}
class Estado{
private:
	string sigla;
	const static int TAMANHO_MAXIMO = 2;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setEstado(string) throw (invalid_argument);

    string getEstado() const {
        return sigla;
    }


};
//class Identificador{}
//class Nome{}
//class NumeroDeCartaoDeCredito{}
//class NumeroDeContaCorrente{}
//class Senha{}
//class TipoDeAcomodacao{}

#endif // DOMINIOS_H_INCLUDED