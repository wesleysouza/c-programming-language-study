/*
Notas -> Aula 47 - Funcao Parte 5 - Passagem por Valor
Fonte -> https://youtu.be/4Astcs8IW3s
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int n){
	n = n + 1;
	printf("Dentro da função: x %d\n", n);
}

int main(){
	/*
	A linguagem C permite dois tipos de passagem de parâmetros para a função:

	1 - Por valor -> cópia do dado (padrão)
	2 - Por referência -> endereço do dado original
	
	Passagem "Por valor": uma cópia do dado é feita e é passada para a função.

	É o modo padrão para tipos básicos pré-definidos:

	int, char, floar e double
	
	e tipos definidos pelo programador

	struct
	*/

	//Exemplos:

	/*
	void imprime_pow(float x);
	int maior(int x, int y);
	void exibe_dados(struct aluno a);
	*/

	//Exemplo de passagem por valor
	int x = 5;
	printf("Antes da função: x = %d\n", x);
	soma_mais_um(x);
	printf("Depois da função: x = %d\n", x);

	return 0;
}