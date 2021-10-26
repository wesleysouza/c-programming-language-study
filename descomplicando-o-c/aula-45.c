/*
Notas -> Aula 45 - Função - Parte 3 - Corpo de uma Função
Fonte -> https://youtu.be/al6Uq0nnuUE
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Declaração da função fatorial
int fatorial(int n){
	int i, f =1;
	for (i = 1; i <= n; i++){
		f = f * i;
	return f;
}

int main(){
	/*
	Corpo da função:
	processa as entradas (parâmetros), e gera a saída (return) da função.
	É composto por declarações, comandos e outras funções.
	*/

	/* Tudo isso pode ser feito em uma função
	int x, y;
	printf("Digite x: ");
	scanf("%d", &x);
	y = x * x;
	printf("y = %d\n", y);
	*/

	//EXEMPLO DO FATORIAL
	/*
	int n, i, f =1;
	printf("Digite n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		f = f * i;
	}
	printf("Fatorial de n = %d\n", f);
	*/
	//Todo esse conteúdo pode ser colocado dentro de uma função. Veja a função fatorial em cima da função main.

	//Chamando várias vezes a função fatorial
	int y = fatorial(7);
	int x = fatorial(12);

	return 0;
}