/*
Notas -> Aula 73 - Arquivos Parte 8 - fputs
Fonte -> https://youtu.be/ODjgyg6WbPk
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	ESCREVENDO STRINGS EM ARQUIVOS

	Para escrever uma string em um arquivo usamos a função fputs().

	Forma geral:

	int fputs (char *str, FILE *fp);

	retorna:
	- Em caso de erro: a constante EOF
	- Em caso de sucesso: valor diferente de ZERO

	*/

	FILE *f;
	//Abre o arquivo texto no modo de escrita
	f = fopen("arquivo.txt", "w");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	char texto[20] = "Meu programa em C"
	
	//Gravando toda a string de uma vez
	int retorno = fputs(texto, f);
	if(retorno == EOF){
		printf("ERRO NA GRAVACAO\n");
	}
	fclose(f);

	//Exemplo 2

	FILE *f2;
	//Abre o arquivo texto modo de escrita
	f2 = fopen("arquivo.txt", "r");
	if(f2 == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	/*
	A função fputs() não coloca o caracter nova linha '\n', nem nenhum outro tipo de caractere, no final da string escrita.
	*/

	fputs("Hello", f2);
	fputs("World", f2);

	//Fazer a separação e o tratamento é tarefa do programador!

	//Formas de resolver

	fputs("Ola\n", f2);
	fputs("Mundo\n", f2);

	//Se estiver dentro de uma variável

	char mensagem1[20] = "gravando no";
	char mensagem2[20] = "arquivo";

	fputs(mensagem1, f2);
	//Usa a função que grava apenas um caractere para fazer a quebra de linha
	fputc('\n', f2);
	fputs(mensagem2, f2);

	fclose(f2);

	return 0;
}