#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

#include <string>

using namespace std;

class TUCapadicadeDeAcomodacao {
private:
	const static int VALOR_VALIDO   = 6;
    const static int VALOR_INVALIDO = 12;

    // Referência para o objeto a ser testado.

    CapadicadeDeAcomodacao *capacidade;

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

class TUDiaria {
private:
	const static int VALOR_VALIDO   = 500.50;
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

class TUEstado {
private:
	const string VALOR_VALIDO   = "DF";
    const string VALOR_INVALIDO = "AAA";

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

#endif // TESTES_H_INCLUDED