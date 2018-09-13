#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

class Agencia { //Formato XXXXX onde X é dígito (0 - 9).
private:
	string agencia;
	const static int TAMANHO = 5;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso
	
	void setAgencia(string) throw (invalid_argument);

    string getAgencia() const {
        return agencia;
    }

};

class Banco {
private:
	int banco;

	//Método responsável por validação

	void validar(int) throw (invalid_argument);

public:

	//Métodos de acesso

	void setBanco(int) throw (invalid_argument);

    int getBanco() const {
        return banco;
    }

};

class CapadicadeDeAcomodacao { //Valor de 1 a 9.
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

class Diaria { //Valor de R$ 1,00 a R$ 10.000,00.
private:
	double preco;
	const static int PRECO_MAXIMO = 10000;
	const static int PRECO_MINIMO = 1;

	//Método responsável por validação

	void validar(double) throw (invalid_argument);

public:

	//Métodos de acesso

	void setDiaria(double) throw (invalid_argument);

    double getDiaria() const {
        return preco;
    }

};

class Data { //Formato DD/MMM/AAAA. DD é número de 01 e 31. MMM é jan,
			//fev, mar, abr, mai, jun, jul, ago, set, out, nov ou dez. AAAA é número de
			//2000 a 2099. A data considera anos bissextos.
private:
	int data;

	//Método responsável por validação

	void validar(int) throw (invalid_argument);

public:

	//Métodos de acesso

	void setData(int) throw (invalid_argument);

    int getData() const {
        return data;
    }
	
};

class DataDeValidade { //Formato MM/AA. MM é número de 01 a 12. AA é número de 00 a 99.
private:
	int validade;

	//Método responsável por validação

	void validar(int) throw (invalid_argument);

public:

	//Métodos de acesso

	void setDataDeValidade(int) throw (invalid_argument);

    int getDataDeValidade() const {
        return validade;
    }
	
};

class Estado { //AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA, PB, PR, PE,
				//PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO
private:
	string sigla;
	const static int TAMANHO_VETOR = 27;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setEstado(string) throw (invalid_argument);

    string getEstado() const {
        return sigla;
    }


};

class Identificador { //Formato XXXXX onde X é letra minúscula (a - z).
private:
	string identificador;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);
	
public:

	//Métodos de acesso

	void setIdentificador(string) throw (invalid_argument);

    string getIdentificador() const {
        return identificador;
    }
	

};

class Nome { //Formato XXXXXXXXXXXXXXX . Cada X pode ser letra, espaço ou ponto.
			//Pelos menos um caracter é letra. Não há espaços seguidos. Ponto é precedido
			//por letra.
private:
	string nome;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);
	
public:

	//Métodos de acesso

	void setNome(string) throw (invalid_argument);

    string getNome() const {
        return nome;
    }
	

};

class NumeroDeCartaoDeCredito { //Formato XXXXXXXXXXXXXXXX onde X é dígito (0 – 9). Número válido
								//segundo o algoritmo de Luhn (https://en.wikipedia.org/wiki/Luhn_algorithm).
private:
	int cartaoDeCredito;

	//Método responsável por validação

	void validar(int) throw (invalid_argument);

public:

	//Métodos de acesso

	void setNumeroDeCartaoDeCredito(int) throw (invalid_argument);

    int getNumeroDeCartaoDeCredito() const {
        return cartaoDeCredito;
    }

};

class NumeroDeContaCorrente { //Formato XXXXXX onde X é dígito (0 – 9).
private:
	int contaCorrente;

	//Método responsável por validação

	void validar(int) throw (invalid_argument);

public:

	//Métodos de acesso

	void setNumeroDeContaCorrente(int) throw (invalid_argument);

    int getNumeroDeContaCorrente() const {
        return contaCorrente;
    }

};

class Senha { //Formato XXXXXXXX onde X pode ser um símbolo (! # $ % &), uma letra
				//maiúscula ou minúscula (A – Z a – z) ou um dígito (0 a 9). Não há caracters
				//repetidos. Há, pelo menos, uma letra maiúscula, uma minúscula, um dígito e
				//um símbolo.
private:
	string senha;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setSenha(string) throw (invalid_argument);

    string getSenha() const {
        return senha;
    }

};

class TipoDeAcomodacao { //Apartamento, Casa, Flat
private:
	string acomodacao;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setTipoDeAcomodacao(string) throw (invalid_argument);

    string getTipoDeAcomodacao() const {
        return acomodacao;
    }

};

#endif // DOMINIOS_H_INCLUDED