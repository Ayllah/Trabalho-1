#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

#include <string>

using namespace std;

class TUAgencia {
private:
    const string VALOR_VALIDO = "00349";
    const string VALOR_INVALIDO = "a236734";

    // Referência para o objeto a ser testado.

    Agencia *agencia;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUBanco {
private:
    const string VALOR_VALIDO = "019";
    const string VALOR_INVALIDO = "g679";

    // Referência para o objeto a ser testado.

    Banco *banco;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUCapacidadeDeAcomodacao {
private:
	const static int VALOR_VALIDO   = 6;
    const static int VALOR_INVALIDO = 12;

    // Referência para o objeto a ser testado.

    CapacidadeDeAcomodacao *capacidade;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste
    
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUDiaria {
private:
	const double VALOR_VALIDO   = 500.50;
    const static int VALOR_INVALIDO = 0;

    // Referência para o objeto a ser testado.

    Diaria *preco;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUData {
private:
	const string VALOR_VALIDO   = "29/fev/2016";
    const string VALOR_INVALIDO = "29/fev/2018";//valida?

    // Referência para o objeto a ser testado.

    Data *data;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUDataDeValidade {
private:
	const string VALOR_VALIDO   = "03/23";
    const string VALOR_INVALIDO = "11/-3";

    // Referência para o objeto a ser testado.

    DataDeValidade *dataDeValidade;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUEstado {
private:
	const string VALOR_VALIDO   = "Df";
    const string VALOR_INVALIDO = "AAa";

    // Referência para o objeto a ser testado.

    Estado *sigla;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUIdentificador{
private:
    const string VALOR_VALIDO = "pedro";
    const string VALOR_INVALIDO = "P3drO0";

    // Referência para o objeto a ser testado.

    Identificador *identificador;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNome{
private:
    const string VALOR_VALIDO = "JULIANO B. P.";
    const string VALOR_INVALIDO = ".JU.   B.. P999.";

    // Referência para o objeto a ser testado.

    Nome *nome;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNumeroDeCartaoDeCredito{
private:
    const string VALOR_VALIDO = "5223367278781011";
    const string VALOR_INVALIDO = "9OO012347865";

    // Referência para o objeto a ser testado.

    NumeroDeCartaoDeCredito *numCartaoDeCredito;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNumeroDeContaCorrente {
private:
    const string VALOR_VALIDO = "005698";
    const string VALOR_INVALIDO = "a569874";

    // Referência para o objeto a ser testado.

    NumeroDeContaCorrente *contaCorrente;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUTipoDeAcomodacao {
private:
    const string VALOR_VALIDO = "Casa";
    const string VALOR_INVALIDO = "Hotel";

    // Referência para o objeto a ser testado.

    TipoDeAcomodacao *acomodacao;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

//  *************************  TESTES DAS ENTIDADES  *******************************  //

/*class TUUsuario {
private:
    const string VALOR_VALIDO_NOME = "Jose Maria";
    const string VALOR_VALIDO_IDENTIFICADOR = "jose";
    const string VALOR_VALIDO_SENHA = "!A0b";

    // Referência para o objeto a ser testado.

    Nome *nome;
    Identificador *identificador;
    Senha *senha;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};*/

class TUAcomodacao {
private:
    const string VALOR_VALIDO_IDENTIFICADOR = "canarinhos";
    const string VALOR_VALIDO_ACOMODACAO = "Flat";
    const static int VALOR_VALIDO_CAPACIDADE = 2;
    const string VALOR_VALIDO_INICIO = "01/jan/2016";
    const string VALOR_VALIDO_TERMINO = "25/jan/2016";
    const string VALOR_VALIDO_CIDADE = "Planaltina";
    const string VALOR_VALIDO_SIGLA = "DF";
    const double VALOR_VALIDO_PRECO = 110.20;

    // Referência para o objeto a ser testado.

    Identificador *identificador;
    TipoDeAcomodacao *acomodacao;
    CapacidadeDeAcomodacao *capacidade;
    Data *dataInicio;
    Data *dataTermino;
    Nome *cidade;
    Estado *sigla;
    Diaria *preco;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUCartaoDeCredito {
private:
    const string VALOR_VALIDO_CARTAO = "5223367278781011";
    const string VALOR_VALIDO_VALIDADE = "08/22";

    // Referência para o objeto a ser testado.

    NumeroDeCartaoDeCredito *numCartaoDeCredito;
    DataDeValidade *dataDeValidade;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUContaCorrente {
private:
    const string VALOR_VALIDO_CONTA = "005673";
    const string VALOR_VALIDO_AGENCIA = "55623";
    const string VALOR_VALIDO_BANCO = "017";

    // Referência para o objeto a ser testado.

    NumeroDeContaCorrente *contaCorrente;
    Agencia *agencia;
    Banco *banco;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};


#endif // TESTES_H_INCLUDED
