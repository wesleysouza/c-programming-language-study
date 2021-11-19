/*
Notas -> Aula 76 - Arquivos Parte 11 - fread
Fonte -> https://youtu.be/ZxuacsaCdaI
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
	Para ler um bloco de bytes de um arquivo usamos a função fread()

	Forma geral:

	int fread(void *buffer, int bytes, int count, FILE *fp);

	Parâmetros:
	- buffer: ponteiro genérico para os dados
	- bytes: tamanho, em bytes, de cada uniade de dado a ser lida
	- count: total de unidades de dados que devem ser lidas
	- fp: o ponteiro para o arquivo

	Retorno: total de unidade de dados lidas com sucesso 
	*/

	FILE *f;
	//Abre o arquivo binário no modo de leitura
	f = fopen("vetor.txt", "rb");
	if(f == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	int total_lido, v[5]; // = {1, 2, 3, 4, 5}
	total_lido = fread(v, sizeof(int), 5, arq);
	if(total_lido != 5){
		printf("Erro na leitura do arquivo");
		exit(1);
	}
	fclose(f);

	printf("%d, %d, %d, %d, %d\n", v[0], v[1] v[2] v[3], v[4]);

	//LENDO OS DADOS GRAVADOS NO ARQUIVO dados.txt

	FILE *f2;
	//Abre o arquivo binário no modo de leitura
	f2 = fopen("dados.txt", "rb");
	if(f2 == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	char str[20];
	float x;
	int v[5]; // = {1, 2, 3, 4, 5}
	fread(str, sizeof(char), 20, f2);
	fread(&x, sizeof(float), 1, f2);
	fread(v, sizeof(int), 5, f2);

	printf("%s\n%f\n", srt, x);
	printf("%d, %d, %d, %d, %d\n", v[0], v[1] v[2] v[3], v[4]);

	fclose(f2);

	//LENDO A ESTRUTURA CADASTRO

	FILE *f3;
	//Abre o arquivo binário no modo de escrita
	f3 = fopen("struct.txt", "wb");
	if(f3 == NULL){
		printf("Erro na abertura \n");
		exit(1);
	}

	struct cadastro cad; //={"Andre, "Rua 1", 31};
	//Como não é um vetor de estruturas, precisamos do & para passar o esdereço do struct
	fread(&cad, sizeof(struct cadastro), 1, f3);
	printf("%s\n%s\n%d\n", cad.nome, cad.endereco, cad.idade);

	fclose(arq);

	return 0;
}