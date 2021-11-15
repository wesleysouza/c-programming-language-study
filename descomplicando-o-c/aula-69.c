/*
Notas -> Aula 69 - Arquivo - Parte 4 - FPUTC()
Fonte -> https://youtu.be/X6BcBhRCR8M
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	/*
	Para se escrever um caractere em um arquivo usamos a função fputc()

	int fputc(char c, FILE *fp);
	
	retorna:
	- Em caso de erro: a constante EOF
	- Em caso de sucesso: o próprio caractere
	*/

	FILE *f;
	f = fopen("arquivo.txt", "w");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	char texto[20] = "Meu programa em C";
	int i;

	//Gravando a string, caractere a caractere
	//stelen é uma função que retorna o tamanho de uma string
	for(i = 0; i < strlen(texto); i++){
		fputc(texto[i], f);
		fputc('-', f); //Adicionando um espaço entre cada letra
		fputc('-', f); //Adicionando um traço entre cada letra
	}
	//Fechando o arquivo
	fclose(f); 

	return 0;
}