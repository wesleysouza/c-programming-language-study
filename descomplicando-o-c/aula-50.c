/*
Notas -> Aula 50 - Funcao Parte 8 - Struct como parâmetro
Fonte -> https://youtu.be/QuSHZ2IOYB4
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ponto {
	int x, y;
};

//Passagem por valor
void imprime_valor(int n){
	printf("Valor = %d\n", n);
}

//Passagem por referência
int soma_imprime_valor(int *n){
	(*n) = (*n) + 1;
	printf("Valor = %d\n", (*n));
}

//Recebendo struct por referência
int preencheStruct(struct ponto *p){
	//Precisa do parênteses se não o compilador vai se atrapalhar, ele vai pensar que vc ta acessando *(p.x)
	(*p).x = 10; // CORRETO
	//*p.y = 10; //ERRADO!
	//*(p.y) = 10; //ERRADO!
	(*p).y = 20;
}

int main(){
	/*
	Quando trabalhamos com estruturas podemos passar para a função:
	-um campo
	-toda estrutura
		* "Por Valor"
		* "Por Referência"
	*/

	//1 - Passando campo por valor
	struct ponto p1 = {10, 20};
	imprime_valor(p1.x); //Ver função imprime_valor
	imprime_valor(p1.y);

	//2 - Passando por referência
	struct ponto p2 = {10, 20};
	soma_imprime_valor(&p2.x);
	soma_imprime_valor(&p2.y);

	//3 - Passando o struct por referência
	struct ponto p3;
	preencheStruct(&p3);
	printf("x = %d\n", p1.x);
	printf("x = %d\n", p1.y);

	return 0;
}