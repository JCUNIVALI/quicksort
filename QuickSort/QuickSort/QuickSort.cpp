// quicksortm2.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "GERA_VETOR.h"
#include "quicksort.h"
#define tamanho 50000
using namespace std;

int main()
{
	int vetor[tamanho];
	Teste_Quick_Sort(vetor,tamanho);
	system("pause");
	return 0;

}
