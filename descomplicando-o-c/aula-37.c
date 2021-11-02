/*
Notas -> Aula 37 - Arrays de Structs
Fonte -> https://youtu.be/tbvo4QFyzqQ
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

int main(){
	//COM STRUCT
	//Definindo 4 pessoas, se fosse 100?
	struct pessoa p1, p2, p3, p4;

	/*
	A STRUCT é um tipo de dado, e portanto a linguagem C suporta a declaração de um array de estrutura
	*/

	//STRUCT COM ARRAY;

	struct pessoa p[4];

	/*
	Acesso aos campos do array de struct
	Em um array de estruturas, o operador de ponto (.) vem depois dos colchetes [] do índice do array
	*/

	struct pessoa p1[4];
	// mudando o campo IDADE da estrutura armazenada no vetor na posição 0
	p[0].idade = = 31; 
	// mudando o campo NOME da estrutura armazenada no vetor na posição 0
	strcpy(p[1].nome, "Ricardo"); 
	// mudando o campo NUMERO da estrutura armazenada no vetor na posição 2, pelo valor do campo NÚMERO da posição 0, subtraindo 1. 

	p[2].numero = p[0].numero - 1; 
	return 0;

	/*
	Arrays e estruturas

	A combinação de arrays e estruturas permite que se manipule de modo muito mais prático várias variáveis de uma estrutura.
	*/

	//Lendo dados de 4 pessoas com um loop.

	struct pessoa vetorPessoas[4];
	int i;
	for (i = 0; i < 4; i++){
		//ler o conteúdo digitado em uma linha (uma string)
		gets(p[i].nome); 
		scanf("%d", &p[i].idade);
		gets(p[i].rua);
		scanf("%d", &p[i].numero);
	}
}