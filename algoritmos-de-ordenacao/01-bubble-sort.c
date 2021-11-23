#include <stdio.h>

void bubbleSort(int *v, int n){
	int i, continua, aux, fim = n;
	do{
		continua = 0;
		for(i = 0; i < fim-1; i++){
			if(v[i] > v[i+1]){ // Comparando os adjacentes
				//Troca dos valores
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				continua = i; // Houve trocas, então continua
			}
		}
		fim--;
	}while(continua != 0);
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
	bubbleSort(v, 5);
	printf("#BubbleSort\n");
	imprimeVetor(v, 5);
}