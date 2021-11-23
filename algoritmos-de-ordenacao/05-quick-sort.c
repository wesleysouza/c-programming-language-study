#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quickSort(int *v, int inicio, int fim){
	int pivo;
	if(fim > inicio){
		//Separando os dados em duas partições
		pivo = particiona(v, inicio, fim);
		//Chamando as funções para as duas metades
		quickSort(v, inicio, pivo-1);
		quickSort(v, pivo+1, fim);
	}
}

int particiona(int *v, int inicio, int final){
	int esq, dir, pivo, aux;
	esq = inicio;
	dir = final;
	pivo = v[inicio];

	while(esq < dir){
		//Avançando posição a esquerda
		while(esq <= final && v[esq] <= pivo){
			esq++;
		}
		//Recuando posição da direita
		while(dir >= 0 && v[dir] > pivo){
			dir--;
		}

		//Trocando esq por dir
		if(esq < dir){
			aux = v[esq];
			v[esq] = v[dir];
			v[dir] = aux;
		}
	}
	v[inicio] = v[dir];
	v[dir] = pivo;
	return dir;
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
	quickSort(v, 0, 5);
	printf("#QuickSort\n");
	imprimeVetor(v, 5);
}