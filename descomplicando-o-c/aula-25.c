/*
Notas -> Aula 25 - Array / Vetores
Fonte -> https://youtu.be/CtM7o2rsTic
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Porque usar vetores ou arrays?
	float x = 10;
	printf("X = %f\n", x);
	x = 20;
	printf("X = %f\n", x);
	
	/*Problema
	Leia a nota de 5 estudantes e imprima as notas maiores que a média da turma
	*/
	
	/*
	Array
	Conjunto de variáveis do mesmo tipo usando o mesmo nome
	*/
	
	/*
	Forma geral:
	tipo nome_array[tamanho];
	*/
	
	//guardando a nota de 100 alunos
	float notas[100];
	
	/*
	Obs.:
	- O tamanho do array deve ser uma constante inteira 
	
	#define N 100
	
	int n = 5;
	float F[N+1]; // CORRETO
	char texto[30]; //CORRETO
	int vetor[n]; //ERRADO
	int V[4.5]; //ERRADO -> não podemos usar valores reais
	*/
	
	/*
	Acesso aos elementos: indice
	float notas[100];
	notas[0] = 81; // Primeiro indice
	notas[1] = 55; // Segundo indice
	notas[99] = 72; // Terceiro indice
	
	Obs.: É o programador que define o tamanho e controla o valor do índice!
	*/
	
	/*
	//Cada posição do array é uma variável
	
	float notas[100], vetor[100];
	scanf("%d", &notas[5]); // Comando de leitura
	notas[0] = 10; //Comanod de atribuição
	notas[1] = notas[5] + notas[0] // expressão
	notas = vetor; //Errado -> você tem que copiar posição por posição
	
	*/
	
	//Resolvendo o problema: Lendo e imprimindo as notas dos alunos.
	
	return 0;
}
