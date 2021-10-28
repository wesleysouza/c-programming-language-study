/*
Notas -> Aula 36 - Trabalhando com STRUCT
Fonte -> https://youtu.be/CAnQ6i8OwJA
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ESTRUTURA do exemplo 1
struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};

//ESTRUTURAS do exemplo 2
struct ponto
{
	int x, y;
};

struct novo_ponto
{
	int x, y;
};

int main(){
	//Inicialização da ESTRUTURA
	struct pessoa p;

	//ATRIBUINDO DADOS A ESTRUTURA

	//Boa opção de atribuir valores string a estrutura
	strcpy(p.nome, "Ricardo"); //copia o nome Ricardo para a variável
	strcpy(p.rua, "Rua 1");
	p.idade = 31;
	p.numero;

	//Atribuir dados dessa forma é trabalhoso, há formas melhores...

	/*
	Opção de inicialização semelhante a arrays

	Podemos definir uma lista de valores para colocar na estrutura (como nos arrays)
	*/

	struct pessoa p2 = {"Ricardo", "Rua 1", 31, 101};

	// Obs.1: Campos não definidos são inicializados com zero ou com uma string vazia ("").
	// Obs.2: A atribuição de valores tem que seguir a mesma ordem que foram definidos na estrutura.

	struct pessoa p2 = {"Ricardo", "Rua 1", 31};

	//Atribuição entre estruturas

	struct pessoa p3 = {"Jean", "Rua 1", 31, 101};
	struct pessoa p4;

	//Copiando os dados de p3 em p4
	strcpy(p4.nome, p3.nome);
	strcpy(p4.rua, p3.rua);
	p4.idade = p3.idade;
	p4.numero = p3.numero;

	//Estruturas que são do mesmo tipo suportam o tipo de atribuição abaixo:

	struct pessoa p5 = {"Jean", "Rua 1", 31, 101};
	struct pessoa p6;

	p6 = p5;

	// IMPORTANTE: Ser do mesmo tipo é derivar da mesma estrutura, e não possuir os mesmos campos, observe as funções ponto e novo_ponto, elas possuem os mesmos campos, mas são tipos diferentes!

	struct ponto x1, x2 = {1, 2};
	struct novo_ponto x1, x2 = {1, 2};

	x1 = x2; //CORRETO, MESMA ESTRUTURA = MESMO TIPO
	//x1 = x3 //ERRADO, ESTRUTURAS DIFERENTES (mesmo possuindo os mesmos campos), TIPOS DIFERENTES
}