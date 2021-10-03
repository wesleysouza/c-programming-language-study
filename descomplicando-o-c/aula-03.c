/*
Notas -> Aula 03 - Printf
Fonte -> https://youtu.be/07YPObbEpU8
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Escrever na tela do console
	printf("Meu programa em C\n");

	// \n -> pular de linha
	
	//Escrevendo valores das variáveis[
	char letra = 'a';
	int nro = 10;
	float n = 5.25;

	//Use o código %c para escrever caracteres
	printf("%c \n", letra); 
	//Use o código %d para escrever números inteiros
	printf("%d \n", nro); 
	//Use o código %f para escrever os números reais
	printf("%f \n", n);

	//Nesse caso, você pode usar o %d para escrever o valor numerico do caractere dentro da tabela ASCII.
	printf("%d \n", letra);

	//Escrevendo mais de um valor em uma única linha.
	printf("Letra %c, inteiro %d \n", letra, nro);

	//Também é possível adicionar expressões matemáticas.
	printf("Letra %c, inteiro %d \n", letra, nro + 5);

	system("pause");
	return 0;
}