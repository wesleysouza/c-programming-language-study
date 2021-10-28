/*
Notas -> Aula 38 - Aninhamento de Structs
Fonte -> https://youtu.be/34_5n_NkDYU
*/

//Rua e numero poderiam fazer parte da ESTRUTURA endereço
struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

//EXEMPLO 2 DE ESTRUTURAS

struct endereco{
	char rua[50];
	int numero;
};

struct pessoa2{
	char nome[50];
	int idade;
	struct endereco ender; // utilização da estrutura endereço como uma estrutura interna (aninhamento)
};

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	Uma ESTRUTURA também é um tipo de dado.
	Logo, uma estrutura pode possuir uma variável do tipo de outra estrutura previamente definida.

	A isso chamamos de ESTRUTURAS ANINHANDAS
	
	//Forma Geral:

	struct nome_struct1{
		...
	};

	struct nome_struct2{
		...
		struct nome_struct1 nome{
		...
		};
	};

	//Veja as estruturas endereço e pessoa2 acima do main

	*/

	//Declaração e uso

	struct pessoa p_end;
	p_end.idade = 31;
	//São necessários dois pontos para acessar a estrutura interna
	//Estrutura interna é acessada por meio da variavel que foi definida na ESTRUTURA
	p_end.ender.numero = 101;

	//Obs.: É possível criar vários níveis de aninhamento.

	//Lendo valores para uma estrutura aninhada 

	gets(p_end.nome);
	scanf("%d", &p.idade);
	gets(p.ender.rua);
	scanf("%d", &pp.ender.numero);

	//Tudo isso é tem como objetivo organizar os dados!

	return 0;
}