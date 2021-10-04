/*
Notas -> Aula 18 - Comando WHILE
Fonte -> https://youtu.be/3pftIJjsk30
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*  
	Comando while:
	Permite executar, repetidamente, um conjunto de comando de acordo com uma condição.
	*/

	/*
	Forma geral
	while(condicao){
		conjunto de comandos
	}
	*/

	//	EXEMPLO 1

	int a, b;
	printf("Digite dois valores inteiros: ");
	scanf("%d %d", &a, &b);
	while(a < b){ //Cuidado com o loop infinito
		a++; //Altera a condição e evita o loop infinito.
		printf("%d\n", a);
	}
	printf("Fim do programa.\n");
	//system("pause");
	return 0;
}