/*
Notas -> Aula 49 - Funcao Parte 7 - Array como parâmetro
Fonte -> https://youtu.be/SAhR1h3LpDY
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int imprime(int *n, int m){
	//Na funçã usamos colchete e índice
	//Passa por cópia o tamanho
	int i;
	for (i = 0; i < m; i++){
		printf("%d \n", n[i]);
	}
}

int imprime_matriz(int m[][2], int n){
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2; j++){
			printf("%d \n", m[i][j]);
		}
	}
}

int main(){
	/*
	Arrays são sempre passados "Por Referência" para a função.

	void imprime(int *m, int n); //Forma recomendada
	void imprime(int m[], int n);
	void imprime(int m[5], int n);

	Nesse caso, você está passando a primeira posição d vetor na memória (onde ele começa...).

	/*
	Na chamada da função, usa-se apenas o nome do array (sem colchete e índice), e sem o operador de "&" 
	*/

	int vetor[5] = {1, 2, 3, 4, 5};
	imprime(v, 5);

	int mat[3][2] = {{1, 2}, {3, 4}, 5,6}};
	imprime_matriz(mat, 3);

	return 0;
}