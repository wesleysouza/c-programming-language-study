/*
Notas -> Aula 74 - Arquivos Parte 9 - fgets
Fonte -> https://youtu.be/GDVPYnD-T_w
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	Para se ler uma string de um arquivo usamos a função fgets()

	Forma geral:

	char* fgets (char *str, int tamanho, FILE *fp);

	retorna:
	- Em caso de erro: NULL
	- Em caso de sucesso: um ponteiro para o primeiro caractere de str
	*/

	FILE *f;
	//Abre o arquivo no modo de leitura
	f = fopen("arquivo.txt", "r");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}
	char str[20]; //Variável que vai receber o valor lido do arquivo
	char *result = fgets(str, 12, arq); //Lê 11

	//O tamanho de uma string é igual ao o número de caracteres - 1 + o \0

	if(result == NULL){
		printf("Erro na leitura\n");
	}
	else
	{
		printf("%s", str);
	}

	/*
	A função fgets() lê uma string até encontrar um caractere de nova linha (\n) ou tamanho-1 caracteres
	*/
	fgets(str, 20, arq);
	printf("%s\n", str);

	printf("\n");
	fclose(f);

	return 0;
}