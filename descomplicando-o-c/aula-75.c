/*
Notas -> Aula 75 - Arquivos Parte 10 - fwrite
Fonte -> https://youtu.be/rBnZTxbWqZQ
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
	char nome[30], endereco[30];
	int idade;
};

int main(){
	/*
	Até o momento aprendemos como escrever e ler caracteres e sequencia de caracteres (stings) em arquivos.

	As função de escrita de blocos de bytes permitem escrever dados mais complexos como os tipos int, float, double, array, ou meso um tipo definido pelo programador, como, por exemplo, o struct.

	Elas devem ser utilizadas preferencialmente com arquivos binários.

	Para escrever um bloco de bytes em um arquivo utilizamos a função fwrite()

	Forma geral:

	int fwrite(void *buffer, int bytes, int count, FILE *fp);

	Parâmetros:
	-buffer: ponteiro genêrico para os dados.
	-bytes: tamanho, em bytes, de cada unidade de dado a ser gravada.
	-count: total de unidades de dados que devem ser gravadas.
	-fp: o ponteiro para o arquivo.

	Retorno: total de unidades de dados gravadas com sucesso.

	*/

	FILE *f;
	//Abre o arquivo binário no modo de escrita
	f = fopen("arquivo.txt", "wb");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	int total_gravado, v[5] = {1, 2, 3, 4, 5};
	//grava todo o array no arquivo (5 posições)

	total_gravado = fwrite(v, sizeof(int), 5, f);
	//ver parâmetros
	if(total_gravado != 5){
		printf("Erro na escrita do arquivo!");
		exit(1);
	}
	fclose(f);

	//EXEMPLO 2

	FILE *f2;
	//Abre o arquivo binário no modo de escrita
	f2 = fopen("dados.txt", "wb");
	if(f2 == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	char str[20] = "Hello World!";
	float x = 5;
	int v[5] = {1, 2, 3, 4, 5};
	fwrite(str, sizeof(char), 20, f2);
	//Quando é uma simples variável temos que passar o endereço
	fwrite(&x, sizeof(float), 1, f2);
	fwrite(v, sizeof(int), 5, f2);

	fclose(f2);

	//GRAVANDO UMA ESTRUTURA

	//Ver struct cadastro

	FILE *f3;
	//Abre o arquivo binário no modo de escrita
	f3 = fopen("struct.txt", "wb");
	if(f3 == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	struct cadastro cad = {"Luis", "Rua 1", 31};
	//Passamos o endereço do struct
	fwrite(&cad, sizeof(struct cadastro), 1, arq);
	fclose(arq);

	return 0;
}