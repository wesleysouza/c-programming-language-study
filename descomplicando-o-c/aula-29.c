/*
Notas -> Aula 29 - Somando um ARRAY
Fonte -> https://youtu.be/daq2R-sWy50
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Somando os elementos de um array
	int i, lista[5] = {1, 2, 3, 4, 5}; //soma = 15
	int soma = 0; //Cuidado, é necessária a inicialização para evitar problemas...
	for (i = 0; i < 5; i++)
	{
		soma = soma + lista[i];
	}
	printf("Soma do Array = %d\n", soma);

	//Somando os elemtos de uma matriz
	int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j, soma_matriz =0;
	for (i = 0; i < 3; i++){
		for (j = 1; j < 3; j++)
		{
			soma_matriz = soma_matriz + mat[i][j];
		}
	}
	printf("Soma da Matriz = %d\n", soma_matriz);

	return 0;
}