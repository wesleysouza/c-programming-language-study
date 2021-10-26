/*
Notas -> Aula 28 - Inicialização de Arrays
Fonte -> https://youtu.be/sTYLxyPszWQ
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Inicializando um array com zeros
	int vetor[5], i;
	for (i = 0; i < 5; i++)
	{
		vetor = 0;
	}

	//E se for necessário por um valor diferente em cada posição?

	vetor[0] = 15;
	vetor[1] = 12;
	vetor[2] = 8;
	vetor[3] = 7;
	vetor[4] = 1;

	//Não é muito prático fazer isso
	/*
	Podemos definir uma lista de valores para colocar no array

	Forma geral:

	tipo nome_array[tam1]...[tamN] = {valores}
	*/

	//Exemplo
	//Só é possível fazer isso na inicialização do vetor
	int vet[5] = {15, 12, 8, 7, 1}

	/*
	INICIALIZANDO UMA MATRIZ
	Opção 1
	*/
	int matriz1[2][3] = {1, 2, 3, 4, 5, 6};
	//Opção 2 (atribuindo linha por linha)
	int matriz1[2][3] = {{1, 2, 3}, {4, 5, 6}};

	/*
	INICIALIZANDO SEM TAMANHO
	Não é necessário definir o tamanho do array no caso de ele ser inicializado com valores.
	Exemplo:
	*/

	int vetorNL[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

	/*
	No caso da matriz é obrigatória a definição do número de colunas.
	Exemplo:
	*/

	int matrizNL[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} 

	//Evitem usar essas declarações sem tamanho!

	return 0;
}