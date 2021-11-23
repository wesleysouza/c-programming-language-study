#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mergeSort(int *v, int inicio, int fim){
	int meio;
	if(inicio < fim){
		meio = floor((inicio+fim)/2); //divide o vetor
		//Chamando a função para as duas metades
		mergeSort(v, inicio, meio);
		mergeSort(v, meio + 1, fim);
		merge(v, inicio, meio, fim);
		//Combinando as metades 
	}
}

void merge(int *v, int inicio, int meio, int fim){
	int *temp, p1, p2, tamanho, i, j, k;
	int fim1 = 0, fim2 = 0;
	tamanho = fim-inicio+1;
	p1 = inicio;
	p2 = meio + 1;
	//Alocação de vetor temporário
	temp = (int *) malloc(tamanho * sizeof(int));
	if(temp != NULL){
		for(i = 0; i < tamanho; i++){
			if(!fim1 && !fim2){
				//Combinando valores ordenados
				if(v[p1] < v[p2]){
					temp[i] = v[p1++];
				}
				else
				{
					temp[i] = v[p2++];
				}
				//Verificando se o vetor acabou
				if(p1 > meio){
					fim1 = 1;
				}
				if(p2 > fim){
					fim2 = 1;
				}
			}
			else
			{
				//Copiando os dados que sobraram
				if(!fim1){
					temp[i] = v[p1++];
				}
				else
				{
					temp[i] = v[p2++];
				}
			}
		}
		//Copiando os dados do vetor auxiliar para o original
		for(j=0, k=inicio; j<tamanho; j++, k++){
			v[k] = temp[j];
		}
	}
	free(temp);
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
	mergeSort(v, 0, 5);
	printf("#MergeSort\n");
	imprimeVetor(v, 5);
}