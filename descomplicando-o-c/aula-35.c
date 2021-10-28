/*
Notas -> Aula 35 - STRUCT - Parte 1
Fonte -> https://youtu.be/MatsUCe5uZw
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//ESTRUTURA do eexemplo 1
struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};


//ESTRUTURAS do exemplo 2
struct ponto2D{
	int x, y;
};

struct ponto3D{
	int x, y, z;
};

int main(){
	/*
	Tipos de variáveis que podemos declarar

	Tipos básicos: char, int, float, double;
	int f;
	double x;

	Tipos compostos homogêneos: array
	int v[5];
	char nome[50];
	*/

	/*
	A linguagem C nos permite também criar nossos pŕoprios tipos de variáveis. Um deles é o "struct" que vamos chamar de ESTRUTURA.

	//Forma geral:
	struct nome_struct{
		tipo1 nome1; //declarações das variáveis
		tipo1 nome1; //campos da estrutura
		...
		tipoN nomeN;
	};//ponto e vírgula obrigatória!
	*/

	//Definindo uma ESTRUTURA antes do main

	//Declaração de variáveis X Estrutura
	//Vantagem da estrutura: "Empacotamento" dos dados e mais organização

	//declarando variável
	char nome[50], rua[50];
	int idade, numero;

	//declaração de uma variável struct
	struct pessoa p; 
	//empacotamento das variáveis acima...
	// gerenciamento de apenas uma variável...

	/*
	Acessando os valores dentro da ESTRUTURA

	Cada campo (variável) da struct pode ser acessada usando o operador "." (ponto)
	*/

	p.idade = 31; //comando de atribuição
	scanf("%d", &p.numero); // comando de leitura
	scanf("%d", &p.nome);
	p.numero = p.numero + p.idade - 100; //expressão

	// COM ESTRUTURA VS SEM ESTRUTURA

	/*
	Guardando os dados de 4 pessoas
	
	//sem ESTRUTURA

	char nome1[50], nome2[50], nome3[50], nome4[50];
	char rua1[50], rua2[50], rua3[50], rua4[50];
	int idade1, idade2, idade3, idade4, 
	int numero1, numero2, numero3, numero4;
	
	//com ESTRUTURA

	struct pessoa p1, p2, p3, p4; //essas variáveis possuem todos os campos acima

	*/

	//É possível definir várias estruturas no programa

	//Obs.: ESTRUTURAS diferentes podem ter campos com o mesmo nome.
	struct ponto2D p2;
	struct ponto3D p3;

	p2.x = 10;
	p3.x = 12;

	printf("%d  %d \n", p2.x, p3.x);

	return 0;
}