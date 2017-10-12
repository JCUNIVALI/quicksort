#ifndef GERA_VETOR_H
#define GERA_VETOR_H
#include <iostream>
#include <time.h>
#include "quicksort.h"

template <typename T>
void Teste_Quick_Sort(T vetor, int tamanho) {
	srand(time(NULL));
	for (int x = 0;x < tamanho;x++) {
		vetor[x] = rand() % 100000;
		cout << vetor[x] << "\t";
	}
	cout << endl << endl;
	quicksort(vetor, 0, tamanho - 1);
	for (int x = 0;x < tamanho;x++) {
		cout << vetor[x] << "\t";
	}

}
#endif
