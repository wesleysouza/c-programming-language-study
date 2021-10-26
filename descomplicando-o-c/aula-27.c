/*
Notas -> Aula 27 - Array Multidimensional
Fonte -> https://youtu.be/7YdzpGWTiSM
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){

	/*
	//vetor = uma dimensão
	//Exemplo:
	float notas[100];

	//Matriz = duas dimensões
	//Exemplo:
	int mat[100][50];
	*/

	/*
	A linguagem C permite vc criar quantas dimenssões vc quiser, a quantidade de dimensões vai depender da aplicação!
	*/

	/*
	//Declaração de array de int com 1 dimensão
	int vet[5];
	//Declaração de array de float com 2 dimensão
	float mat[5][5];
	//Declaração de array de double com 3 dimensão
	double cub[5][5][5];
	//Declaração de array de int com 4 dimensão
	int X[5][5][5][5];
	*/

	int cub[5][5][5]; //125 variáveis
	//Cuidado com o consumo de memória
	int i,j,k;
	//Preenchendo o array de 3 dimensões com zeros
	//Para cada dimenssão utilizamos um comando de repetição
	for (i = 0;i < 5; i++){
		for (j = 0; j <5; j++){
			for (k = 0; k <5; k++){
				cub[i][j][k] = 0;			
			}
		}
	}


	return 0;
}