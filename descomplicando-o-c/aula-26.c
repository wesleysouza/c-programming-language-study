/*
Notas -> Aula 26 - Array / Matriz
Fonte -> https://youtu.be/3TP0e-bfdfw
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Array ou vetor: uma dimensão
	//Array de duas dimensões: matriz
	
	/*
	tipo nome_array[nro_linhas][nro_colunas];
	Ex.:
	int mat[3][2]; //Parece uma planilha
	*/
	
	/*
	//Declaração de matrizes: Sempre use uma constante inteira!
	
	define N 100
	
	int n = 5;
	float F[N+1][N]; // CORRETO
	char frases[30][50]; //CORRETO
	int mat[n][n]; //ERRADO
	int V[4.5][5]; //ERRADO -> não podemos usar valores reais
	*/
		
	/*
	Acesso aos elementos: índice
	int mat[3][2]
	mat[0][0] = 5; //primeira posição
	mat[0][1] = 23;
	mat[2][1] = -1;
	*/
	
	/*
	Lendo dados e etc.
	int mat[3][2], M[3][2];
	scanf("%d", &mat[2][0]); //Comando de leitura
	mat[0][0] = 10; // Comando de atribuição
	mat[1][1] = mat[0][0] + mat[2][0] //Expressão
	mat = M // ERRADO! -> O C não sabe copiar tudo de uma vez!
	*/
	
	int mat[100][50];
	int i, j;
	for (i = 0; i < 100; i++){
		for (j = 0; j < 50; j++){
			printf("Digite mat[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	return 0;
}



