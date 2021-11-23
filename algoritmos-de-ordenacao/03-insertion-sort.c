#include <stdio.h>

void insertionSort(int *v, int n){
	int i, j, aux;
	for(i = 0; i < n; i++){
		aux = v[i];
		//Move os números maiores pra frente e insere na posição vaga
		for(j = i; (j > 0) && (aux < v[j - 1]); j--){
			v[j] = v[j - 1];
		}
		v[j] = aux;
	}
}

void imprimeVetor(int *v, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main(){

	int v[5] = {5, 1, 3, 2, 4};

	imprimeVetor(v, 5);
	insertionSort(v, 5);
	printf("#InsertionSort\n");
	imprimeVetor(v, 5);
}