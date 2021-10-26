/*
Notas -> Aula 43 - Introdução as Funções
Fonte -> https://youtu.be/OrF2ydZIELk
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

/*
ONDE DECLARAR?
Declare as funções antes do main, caso você declare depois será necessário adicionar um protótipo da função antes do main.

Exemplo:

int quadrado(int a); //prototipo 1
int quadrado(int); //prototipo 2

Obs.: No protótipo não é necessário declarar os parâmetros, apenas o tipo é necessário.

*/

int quadrado(int a){
	return a * a;
}

int main(){
	/*
	Função: conjunto de comandos que recebe um nome e pode ser chamada em parte do programa quantas vezes forem necessárias.
	Vantagens: estruturação do programa e reutilização de códigos
	*/

	//Exemplos:
	int x;
	scanf("%d", &x); //escrita na biblioteca stdio.h
	printf("%d\n", x);

	/*
	Forma geral de uma função:
	tipo nome_da_função(parâmetros){
		conjunto de valores e comandos
	}
	*/

	//Relembrando, o main é uma função!
	//Veja o exemplo de função 2

return 0;
}