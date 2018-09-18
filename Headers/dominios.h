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
	string banco;
	const static int TAMANHO = 3;
	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setBanco(string) throw (invalid_argument);

    string getBanco() const {
        return banco;
    }

};

class CapacidadeDeAcomodacao { //Valor de 1 a 9.
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
	string data;
	const static int TAMANHO = 11;
	const static int TAMANHO_PADRAO_DIA = 2;
	const static int TAMANHO_PADRAO_MES = 3;
	const static int TAMANHO_PADRAO_ANO = 4;
	const static int POSICAO_DIA = 0;
	const static int POSICAO_SEPARADOR_DIA_MES = 2;
	const static int POSICAO_SEPARADOR_MES_ANO = 6;
	const static int DIA_MINIMO = 1;
	const static int DIA_MAXIMO = 31;
	const static int NUMERO_MESES = 12;
	const static int ANO_MINIMO = 2000;
	const static int ANO_MAXIMO = 2099;
	//Método responsável por validação

	bool isMonth(string nomeMes, string *meses);
	bool isBissextile(int) throw (invalid_argument);
	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setData(string) throw (invalid_argument);

    string getData() const {
        return data;
    }
	
};

class DataDeValidade { //Formato MM/AA. MM é número de 01 a 12. AA é número de 00 a 99.
private:
	string validade;
	const static int TAMANHO = 5;
	const static int TAMANHO_PADRAO_MES = 2;
	const static int TAMANHO_PADRAO_ANO = 2;
	const static int POSICAO_INICIAL_MES = 0;
	const static int POSICAO_FINAL_MES = 1;//Pq 2?
	const static int POSICAO_INICIAL_ANO = 3;
	const static int POSICAO_FINAL_ANO = 4;
	const static int POSICAO_SEPARADOR = 2;

	const static int MES_MINIMO = 1;
	const static int MES_MAXIMO = 12;
	const static int ANO_MINIMO = 0;
	const static int ANO_MAXIMO = 99;
	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setDataDeValidade(string) throw (invalid_argument);

    string getDataDeValidade() const {
        return validade;
    }
	
};

class Estado { //AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA, PB, PR, PE,
				//PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO
private:
	string sigla;
	const static int TAMANHO_PADRAO_UF = 2;
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
	const static int TAMANHO = 5;
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
	const static int TAMANHO_MAXIMO = 15;
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
	string numCartaoDeCredito;
	const static int TAMANHO = 16;
	//Método responsável por validação

	void validar(string) throw (invalid_argument);
	bool checkLuhn(string) throw (invalid_argument);
public:

	//Métodos de acesso

	void setNumeroDeCartaoDeCredito(string) throw (invalid_argument);

    string getNumeroDeCartaoDeCredito() const {
        return numCartaoDeCredito;
    }

};

class NumeroDeContaCorrente { //Formato XXXXXX onde X é dígito (0 – 9).
private:
	string contaCorrente;
	const static int TAMANHO_MAXIMO = 6;

	//Método responsável por validação

	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setNumeroDeContaCorrente(string) throw (invalid_argument);

    string getNumeroDeContaCorrente() const {
        return contaCorrente;
    }

};

class Senha { //Formato XXXXXXXX onde X pode ser um símbolo (! # $ % &), uma letra
				//maiúscula ou minúscula (A – Z a – z) ou um dígito (0 a 9). Não há caracters
				//repetidos. Há, pelo menos, uma letra maiúscula, uma minúscula, um dígito e
				//um símbolo.
private:
	string senha;
	const static int TAMANHO = 8;
	const static int TAMANHO_SIMBOLOS = 5;
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
	const static int TAMANHO_VETOR = 3; 

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
