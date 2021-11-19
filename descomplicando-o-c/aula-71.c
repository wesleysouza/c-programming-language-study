/*
Notas -> Aula 71 - Arquivo - Parte 6 - Exemplo: Trabalhando com Arquivos
Fonte -> https://youtu.be/WdZv1gCpDjg
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	/*
	Problema: ler um arquivo contendo um texto em minúsculo e criar outro arquivo com o texto em maiúsculo.
	*/

	//Abrindo os dois arquivos:

	FILE *f1, *f2;
	f1 = fopen("minusculo.txt", "r");
	f2 = fopen("maiusculo.txt", "w");
	if(f1 == NULL || f2 == NULL){
		printf("Erro na abertura do arquivo\n");
		exit(1);
	}

	//Leitura
	char c = fgetc(f1);
	while (c != EOF){
		c = fgetc(f1);
		//A função toupper pertence a biblioteca ctype.h, ela "transforma" caracteres minúsculos em maiúsculos.
		//Gravanção no arquivo f2.
		fputc(toupper(c), f2);
	}

	fclose(f1);
	fclose(f2);
}