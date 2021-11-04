/*
Notas -> Aula 31 - String - Parte 1
Fonte -> https://youtu.be/5mJZh_ikDaQ
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
	/*String: um array de caracteres
	Permite armazenar uma sequencia de caracteres adjacentes na memória (palavras ou frases)
	*/
	//Forma geral:
	//char nome_array[tamanho];

	//Exemplo:
	char palavra[50];

	//Lendo dados
	printf("%s", "Digite uma palavra \n");
	//Para quando lê um enter ou um espaço
	//scanf("%s", palavra);
	gets(palavra);

	printf("Palavra Lida : %s\n", palavra);

	//Inicialização de Strings
	//Forma convencional

	char nome1[20] = {'J', 'o', 'a', 'o', '\0'};
	//O caracter '\0' é pra avisar que a String terminou, ou seja, desconsidera as posições restantes (se houver da String)
	printf("Nome : %s\n", nome1);

	//Forma Especial
	char nome2[20] = "João";
	printf("Nome %s\n", nome2);

	//LENDO POSIÇÃO POR POSIÇÃO DA STRING
	char palavra2[50] = "Teste";
	printf("Palavra = %s\n", palavra2);
	palavra2[0] = 'L';
	printf("Palavra = %s\n", palavra2);

	//Analisando o caracter '\0'

	char palavra3[50] = "Oitenta";
	printf("Palavra = %s\n", palavra3);
	palavra3[2] = '\0';
	printf("Palavra = %s\n", palavra3);

	return 0;
}