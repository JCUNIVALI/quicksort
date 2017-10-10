#ifndef QUICKSORT_H
#define QUICKSORT_H

template <typename T>
void quicksort(T vetor[], int primeiro, int ultimo) {
	int menor = primeiro, maior = ultimo, escolha = vetor[(menor + maior) / 2], auxiliar;
	while (menor <= maior) {
		while (vetor[menor] < escolha) {
			menor++;
		}
		while (vetor[maior] > escolha) {
			maior--;
		}
		if (menor < maior) {
			auxiliar = vetor[menor];
			vetor[menor++] = vetor[maior];
			vetor[maior--] = auxiliar;
		}
		else {
			if (maior == menor) {
				menor++;
				maior--;
			}
		}
	}
	if (maior > primeiro)
		quicksort(vetor, primeiro, maior);
	if (menor < ultimo)
		quicksort(vetor, menor, ultimo);
}
#endif