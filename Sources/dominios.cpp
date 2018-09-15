#include "dominios.h"

#include <iostream>//comentar depois
#include <string>
#include <cstring>
#include <vector>
#include <cstdlib>
#include <locale>

using namespace std;

void Agencia::validar(string agencia) throw (invalid_argument){
	int verificadorTamanho;
	int i;
	//Lança exceção se o tamanho da string agencia for diferente do tamanho esperado
	// ou se algum caracter da string apresentar valor diferente de 0-9

	verificadorTamanho = agencia.size();

	if(verificadorTamanho != TAMANHO){
		throw invalid_argument("Argumento invalido.");
	}
	else{//testar a validade de cada digito
		for (i = 0; i < TAMANHO; ++i){
			if(!isdigit(agencia[i])){
				throw invalid_argument("Argumento invalido.");
            }
        }
	}
}

void Agencia::setAgencia(string agencia) throw (invalid_argument){
	validar(agencia);
	this->agencia = agencia;
}

void Banco::validar(string banco) throw (invalid_argument){
    int verificadorTamanho;
    int i;

    verificadorTamanho = banco.size();

    if ( verificadorTamanho != TAMANHO ){
        throw invalid_argument("Argumento invalido.");
    }
    else{
		for (i = 0; i < TAMANHO; ++i){
			if( !isdigit(banco[i]) ){
				throw invalid_argument("Argumento invalido.");
            }
        }    
    }
}

void Banco::setBanco(string banco) throw (invalid_argument){
    validar(banco);
    this->banco = banco;
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

bool Data::isMonth(string nomeMes, string *meses){
    bool isMes = 0;
    for(int i = 0; i < NUMERO_MESES; ++i){
        if(nomeMes.compare(meses[i]) == 0){
            isMes = 1;
            break;
        }
    }
}

bool Data::isBissextile(int ano) throw (invalid_argument){
    if((ano % 100 == 0) && (ano % 400 != 0))
        return 0;
    else if (ano % 4 == 0)
        return 1;
}

void Data::validar(string data) throw (invalid_argument){
    int verificadorTamanho;
    int isMes;
    int i;
    char dia[TAMANHO_PADRAO_DIA];
    char mes[TAMANHO_PADRAO_MES];
    string nomeMes;
    char ano[TAMANHO_PADRAO_ANO];
    string meses[NUMERO_MESES] = {"jan", "fev", "mar", "abr",
                                  "mai", "jun", "jul", "ago",
                                  "set", "out", "nov", "dez"};
    int numeroDiasDoMes[NUMERO_MESES] = {31, 29, 31, 30,
                                         31, 30, 31, 31,
                                         30, 31, 30, 31};

    verificadorTamanho = data.size();
    
    if( (verificadorTamanho != TAMANHO) ){
        throw invalid_argument("Argumento invalido.");
    }
    else if( data[POSICAO_SEPARADOR_DIA_MES] != '/' &&
             data[POSICAO_SEPARADOR_MES_ANO] != '/'){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        data.copy(dia, TAMANHO_PADRAO_DIA, POSICAO_DIA);
        data.copy(mes, TAMANHO_PADRAO_MES, POSICAO_SEPARADOR_DIA_MES + 1);
        data.copy(ano, TAMANHO_PADRAO_ANO, POSICAO_SEPARADOR_MES_ANO + 1); 
        nomeMes = mes;

        if(atoi(dia) < DIA_MINIMO || atoi(dia) > DIA_MAXIMO){
            throw invalid_argument("Argumento invalido.");
        }
        else if(atoi(ano) < ANO_MINIMO || atoi(ano) > ANO_MAXIMO){
            throw invalid_argument("Argumento invalido.");
        }
        else{
            for(i = 0; i < TAMANHO_PADRAO_MES; ++i){
                if(!isalpha(nomeMes[i])){
                    throw invalid_argument("Argumento invalido.");
                }
                else{
                    nomeMes[i] = tolower(nomeMes[i]);
                }
            }

            isMes = isMonth(nomeMes, &meses[0]);

            if(!isMes){
                throw invalid_argument("Argumento invalido.");
            }
            else if(atoi(dia) > numeroDiasDoMes[i]){
                throw invalid_argument("Argumento invalido.");
            }
            else if(!isBissextile(atoi(ano)) && !nomeMes.compare("fev") && (atoi(dia) > 28)){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
}

void Data::setData(string data) throw (invalid_argument){
    validar(data);
    this->data = data;
}

void DataDeValidade::validar(string validade) throw (invalid_argument){
    int verificadorTamanho, verificadorMes, verificadorAno;
    int i;
    char mes[TAMANHO_PADRAO_MES],ano[TAMANHO_PADRAO_ANO];

    verificadorTamanho = validade.size();
    validade.copy(mes,POSICAO_FINAL_MES + 1,POSICAO_INICIAL_MES);
    validade.copy(ano,POSICAO_FINAL_ANO,POSICAO_INICIAL_ANO);

    if(verificadorTamanho != TAMANHO){
        throw invalid_argument("Argumento invalido.");
    }
    else if(validade[POSICAO_SEPARADOR] != '/'){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        verificadorMes = atoi(mes);
        verificadorAno = atoi(ano);
        if(verificadorMes < MES_MINIMO || verificadorMes > MES_MAXIMO ||
           verificadorAno < ANO_MINIMO || verificadorAno > ANO_MAXIMO){
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void DataDeValidade::setDataDeValidade(string validade) throw (invalid_argument){
    validar(validade);
    this->validade = validade;
}

void Estado::validar(string sigla) throw (invalid_argument){
	int i;
    int verificadorTamanho;
    int isEstado = 0;
	string vetor[27] = {"AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS","MG", 
						 "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"};
    
	//Lança exceção se as siglas não corresponderem com as designadas e se seus tamanhos forem maiores que
	//o limite estabelecido

    verificadorTamanho = sigla.size();

    if(verificadorTamanho != TAMANHO_PADRAO_UF){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        for(i = 0; i < TAMANHO_PADRAO_UF; ++i){
            if(!isalpha(sigla[i])){
                throw invalid_argument("Argumento invalido.");
            }
            else{
                sigla[i] = toupper(sigla[i]);
            }
        }
        
        for(i = 0; i < TAMANHO_VETOR; ++i){
            if(sigla.compare(vetor[i]) == 0){
                isEstado = 1;
                break;
            }
        }

        if(!isEstado){
            throw invalid_argument("Argumento invalido.");
        }
    }

}

void Estado::setEstado(string sigla) throw (invalid_argument){
    validar(sigla);
    this->sigla = sigla;
}

void Identificador::validar(string identificador) throw (invalid_argument){
    int verificadorTamanho;
    int i;

    verificadorTamanho = identificador.size();

    if (verificadorTamanho != TAMANHO){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        for (i=0; i<TAMANHO; ++i){
            if(!islower(identificador[i])){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
}

void Identificador::setIdentificador(string identificador) throw (invalid_argument){
    validar(identificador);
    this->identificador = identificador;
}

void Nome::validar(string nome) throw (invalid_argument){
    int verificadorTamanho;
    int i;

    verificadorTamanho = nome.size();

    if(verificadorTamanho > TAMANHO_MAXIMO){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        if(nome[0] == '.'){
            throw invalid_argument("Argumento invalido.");
        }

        for(i = 0; i < verificadorTamanho; ++i){
            //verificação sequência
            if(!isalpha(nome[i]) && nome[i] != ' ' && nome[i] != '.'){
                throw invalid_argument("Argumento invalido.");
            }
            //verificação de adjacência
            if(i > 0){
                if(nome[i] == '.' && !isalpha(nome[i-1])){//ponto precedido por letra
                    throw invalid_argument("Argumento invalido.");
                }
                if(nome[i-1] == ' ' && nome[i] == ' '){
                    throw invalid_argument("Argumento invalido.");
                }
            }
        }
    }
}

void Nome::setNome(string nome) throw (invalid_argument){
    validar(nome);
    this->nome = nome;
}

void NumeroDeCartaoDeCredito::validar(string numCartaoDeCredito) throw (invalid_argument){
    int verificadorTamanho;
    int isOnlyDigit = 1;
    int i;

    verificadorTamanho = numCartaoDeCredito.size();

    if(verificadorTamanho != TAMANHO){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        for (i = 0; i < verificadorTamanho; ++i){
            if(!isdigit(numCartaoDeCredito[i])){
                isOnlyDigit = 0;
                throw invalid_argument("Argumento invalido.");
            }
        }
        if(isOnlyDigit){
            if(!checkLuhn(numCartaoDeCredito)){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
}

bool NumeroDeCartaoDeCredito::checkLuhn(string numCartaoDeCredito) throw (invalid_argument){
    int somatorio = 0;
    int numeroDigitos = numCartaoDeCredito.size();
    int numeroParidade = (numeroDigitos - 1) % 2;
    int digito;
    char cDigito[2] = "\0";
    int i;

    for (i = numeroDigitos; i > 0; i--){
        cDigito[0] = numCartaoDeCredito[i - 1];
        digito = atoi(cDigito);
        
        if ( numeroParidade == i % 2){
            digito = digito * 2;
        }

        somatorio += digito/10;
        somatorio += digito%10;
    }
    return 0 == somatorio % 10;
}

void NumeroDeCartaoDeCredito::setNumeroDeCartaoDeCredito(string numCartaoDeCredito) throw (invalid_argument){
    validar(numCartaoDeCredito);
    this->numCartaoDeCredito = numCartaoDeCredito;
}