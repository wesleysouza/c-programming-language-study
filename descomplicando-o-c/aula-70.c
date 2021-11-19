/*
Notas -> Aula 70 - Arquivos - Parte 5 - fgetc
Fonte -> https://youtu.be/FwW2T3jGvdg
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	Para ler um caractere de um arquivo usamos a função fgetc()

	Forma geral

	int fgetc(FILE *fp);

	retorna:
	- Em caso de erro: a constante EOF
	- Em caso de sucesso: o caractere lido
	*/

	FILE *f;
	//Abre o arquivo no modo de leitura
	f = fopen("arquivo.txt", "r");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	char c;
	int i;
	//Lê o arquivo, um caractere por vez
	//Lê os 10 primeiros caracteres
	for (i = 1; i <= 10; i++){
		c = fgetc(f);
		printf("%c", c);
	}
	printf("\nFim \n");

	//COMO LER TODOS OS CARACTERES?

	/*
	Antes, usamos a função fgetc() para ler 10 caracteres de um arquivo.

	Como fazer para ler todos?

	Solução: usar a constante EOF (End of File)

	Quando atingimos o final de um arquivo, a função fgetc() devolve a contante EOF 
	*/

	//Exemplo: Lendo até o final do arquivo

	FILE *f2;
	//Abre o arquivo no modo de leitura
	f2 = fopen("arquivo.txt", "r");
	if(f2 == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	char c2 = fgetc(f2);
	//Lendo até encontrar a constante EOF
	while (c2 != EOF){
		printf("%c\n", c2);
		c2 = fgetc(f2);
	}

	printf("\nFim \n");

	return 0;
}