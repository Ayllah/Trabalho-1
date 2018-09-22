#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

class Agencia {
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

class CapacidadeDeAcomodacao {
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

class Data {
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

class DataDeValidade {
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

class Estado {
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

class Identificador {
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

class Nome {
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

class NumeroDeCartaoDeCredito {
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

class NumeroDeContaCorrente {
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

class Senha {
private:
	string senha;
	const static int TAMANHO = 8;
	const static int TAMANHO_SIMBOLOS = 5;
	const static int QUANTIDADE_CARACTERES = 256;
	//Método responsável por validação
	bool verificaCaracteresObrigatorios(string senha) throw (invalid_argument);
	bool verificaRepeticao(string senha) throw (invalid_argument);
	void validar(string) throw (invalid_argument);

public:

	//Métodos de acesso

	void setSenha(string) throw (invalid_argument);

    string getSenha() const {
        return senha;
    }

};

class TipoDeAcomodacao {
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
