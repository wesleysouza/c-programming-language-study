/*
Notas -> Aula 19 - Comando For
Fonte -> https://youtu.be/tlagnwiiIqE
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* 
	Comando for:
	Permite executar, repetidamente, um conjunto de comandos de acordo com uma condição.
	*/

	/*
	Forma geral
	for(inicializãção; condição; incremento) {
		conjunto de comandos
	}
	*/

	int a, b, c;
	printf("Digite dois inteiros: ");
	scanf("%d %d", &a, &b);
	for (c = a; c <= b; c++){ //Cuidado: sujeito a loop infinito
		printf("%d\n", c);
	}
	printf("Fim do programa");
	//system("pause");
	return 0;
}