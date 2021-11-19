/*
Notas -> Aula 77 - Arquivos Parte 12 - fprintf
Fonte -> https://youtu.be/4WlsKHHVda0
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	Até o momento vimos como ler e escrever em arquivos caracteres, strings e até mesmo blocos de bytes.

	A linguagem C também prmite escrever uma lista formatada de variáveis em um arquivo do mesmo modeo como fazemos na tela do computador com a função printf().

	Para isso usamos a funçaõ fprintf()

	Forma geral: printf()
	printf("tipos de saída", variaveis);

	Forma geral: fprintf()
	fprintf(FILE *f, "tipos de saída", variaveis);
	
	*/

	//Exemplo 1:

	char nome[20] = "Andre";
	int i = 30;
	float a = 1.75;

	FILE *f;
	//Abre o arquivo texto no modo de escrita
	f = fopen("arquivo2.txt", "w");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	printf("Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);

	fprintf(f, "Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);

	fclose(f);

}