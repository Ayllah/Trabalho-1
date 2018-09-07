#include "dominios.h"

#include <string>
#include <cstring>
#include <vector>

using namespace std;

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
	int tamanho, i;
	tamanho = sigla.size();
	string vetor[] = {"AC", "AL", "AP", "AM," "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS","MG", 
						 "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"};
	

	//Lança exceção se as siglas não corresponderem com as designadas e se seus tamanhos forem maiores que
	//o limite estabelecido

	for(i = 0; i < 27; ++i){ //Mudar o 27 para nao ficar numeros magicos
		if((sigla == vetor[i]) && (tamanho > TAMANHO_MAXIMO)){
			throw invalid_argument("Argumento invalido.");
		}
	}	

}

void Estado::setEstado(string sigla) throw (invalid_argument){
    validar(sigla);
    this->sigla = sigla;
}



