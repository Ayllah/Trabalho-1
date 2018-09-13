#include "dominios.h"

#include <string>
#include <cstring>
#include <vector>
#include <locale>

using namespace std;

void Agencia::validar(string agencia) throw (invalid_argument){
	int verificador_tamanho;
	int i;
	//Lança exceção se o tamanho da string agencia for diferente do tamanho esperado
	// ou se algum caracter da string apresentar valor diferente de 0-9

	verificador_tamanho = agencia.size();

	if(verificador_tamanho != TAMANHO){
		throw invalid_argument("Argumento invalido.");
	}
	else{//testar a validade de cada digito
		for (i = 0; i < TAMANHO; ++i)
			if(!isdigit(agencia[i]))
				throw invalid_argument("Argumento invalido.");
	}
}

void Agencia::setAgencia(string agencia) throw (invalid_argument){
	validar(agencia);
	this->agencia = agencia;
}

void CapadicadeDeAcomodacao::validar(int capacidade) throw (invalid_argument){

 	//Lança exceção se o valor for maior ou menor que os limites definidos

    if (capacidade > CAPACIDADE_MAXIMA || capacidade < CAPACIDADE_MINIMA){
        throw invalid_argument("Argumento invalido.");
    }
}

void CapadicadeDeAcomodacao::setCapacidade(int capacidade) throw (invalid_argument){
    validar(capacidade);
    this->capacidade = capacidade;
}


void Diaria::validar(double preco) throw (invalid_argument){

 	//Lança exceção se o valor for maior ou menor que os limites definidos

    if (preco > PRECO_MAXIMO || preco < PRECO_MINIMO){
        throw invalid_argument("Argumento invalido.");
    }
}

void Diaria::setDiaria(double preco) throw (invalid_argument){
    validar(preco);
    this->preco = preco;
}


void Estado::validar(string sigla) throw (invalid_argument){
	int i;
	string vetor[27] = {"AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS","MG", 
						 "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"};
	

	//Lança exceção se as siglas não corresponderem com as designadas e se seus tamanhos forem maiores que
	//o limite estabelecido

	for(i = 0; i < TAMANHO_VETOR; ++i){
		if(sigla.compare(vetor[i]) != 0){
			throw invalid_argument("Argumento invalido.");
		}
	}	

}

void Estado::setEstado(string sigla) throw (invalid_argument){
    validar(sigla);
    this->sigla = sigla;
}



