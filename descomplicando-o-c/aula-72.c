/*
Notas -> Aula 72 - Arquivo - Parte 7 - EOF
Fonte -> https://youtu.be/xN61MLUgkSg
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	A Constante EOF ("End of File") indica o fim de um arquivo.

	while (c != EOF){
		Comandos.
	}

	Porém, manipulando dados em arquivos binários isso pode dar problema. Pode ser que um valor inteiro retornado seja igual a EOF.

	Para evitar isso, utilize a função feof()

	int feof(FILE *fp)

	Essa função retorna um valor inteiro igual a ZERO se ainda não tiver atingido o final do arquivo.

	Essa função funciona pra qualquer tipo de arquivo!

	*/

	FILE *f;
	//Abre o arquivo no modo de leitura
	f = fopen("arquivo.txt", "r");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	char c = fgetc(f);
	//feof no while
	//!0 = Verdadeiro
	//!1 = Falso
	while(!feof(f)){
		c = fgetc(f);
		printf("%c", c);
	}
	printf("\nFim \n");
	fclose(f);
}