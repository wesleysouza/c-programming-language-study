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
	Nas últimas aulas vimos como ler e escrever em arquivos caracteres, strings e até mesmo blocos de bytes.
	
	A linguagem C também permite ler uma lista formatada de variáveis do arquivo do mesmo como como fazemos do arquivo do mesmo modo como fazemos do teclado do computador com a função scanf()

	Para isso usamos a função fscanf()

	//Forma geral: scanf()
	scanf("tipos de entrada", variáveis);

	//Forma geral: fscanf()
	fscanf(FILE *f, "tipos de entrada", variáveis");

	*/

	FILE *f = fopen("arquivo2.txt", "r");
	if (f == NULL){
		printf("Erro na abertura\n");
		exit(1);
	}

	char texto[20], nome[20];
	int id;
	float h;

	fscanf(f, "%s %s", texto, nome);
	printf("%s %s\n", texto, nome);
	fscanf(f, "%s %d", texto, &id);
	printf("%s %s\n", texto, id);
	fscanf(f, "%s %d", texto, &h);
	printf("%s %s\n", texto, h);

	fclose(f);

	return 0;
}