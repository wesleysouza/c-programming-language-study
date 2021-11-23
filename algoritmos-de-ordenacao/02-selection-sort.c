#include <stdio.h>

void selectionSort(int *v, int n){
	int i, j, menor, troca;
	for(i = 0; i < n-1; i++){
		menor = i;
		//Procurando o menor elemento em relação a "i"
		for(j = i + 1; j < n; j++){
			if(v[j] < v[menor]){
				menor = j;
			}
		}
		if(i != menor){
			//Trocando os valores da posição atual com a "menor"
			troca = v[i];
			v[i] = v[menor];
			v[menor] = troca;
		}
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
	selectionSort(v, 5);
	printf("#SelectionSort\n");
	imprimeVetor(v, 5);
}