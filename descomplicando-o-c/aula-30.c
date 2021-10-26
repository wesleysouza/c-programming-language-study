/*
Notas -> Aula 30 - Maior valor de um ARRAY
Fonte -> https://youtu.be/K7cfWrm21hg
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Maior elemento de um array
	int i, lista[5] = {3, 18, 2, 51, 45}; //maior = 51
	//Se esse vetor fosse de 1000 posições ia ficar complicado encontrar...
	int maior = lista[0]; //Supondo que o primeiro elemento do vetor é o maior. Não posso por zero aqui pois, se o array for e números negativos a solução estará errada.
	for (i = 0; i < 5; i++)
	{
		if (maior < lista[i])
		{
			maior = lista[i]
		}
	}
	printf("Maior = %d\n", maior);
	return 0;
}