/*
Notas -> Aula 79 - Arquivos Parte 14 - fseek e rewind
Fonte -> https://youtu.be/cdXGEy-6jMU
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
	char nome[30], rua[30]; int idade;
};

int main(){
	/*
	
	//MOVIMENTAÇÃO DO "PONTEIRO" DE LEITURA DO ARQUIVO

	Função fseek();

	Em geral, o acesso a um arquivo é na maioria das vezes sequencial. Porém, a linguagem C permite realizar operações de leitura e escrita randômica usando a função fseek()

	//Forma Geral

	int fseek(FILE*fp, long numbytes, int origem)

	//Parâmetros

	- fp: ponteiro para o arquivo;
	- numbytes: número de bytes que deve ser pulado a partir da origem;
	-origem: a partir de onde os "numbytes" serão contados

	Retorno: Zero em caso de sucesso!

	//Valores possíveis para o parâmetro "origem"

	Os valores possíveis para o parâmetro "origem" são definidos por constante na biblioteca stdio.h e são:
	
	#CONSTANTE-VALOR-SIGNIFICADO
	-SEEK_SET-0-Inicio do Arquivo
	-SEEK_CUR-1-Ponto atual do arquivo
	-SEEK_END-2-Fim do arquivo

	*/

	//EXEMPLO 1

	FILE *f = fopen("arquivo.txt", "wb");
	if (f == NULL){
		printf("Erro na abertura\n");
		exit(1);
	}

	//Ver struct cadastro

	struct cadastro cad[4] = {
		"Joana", "Rua 1", 16,
		"Arthur", "Rua 2", 29,
		"Maria", "Rua 3", 44,
		"Gertrudes", "Rua 4", 65,
	}

	//Escrevendo vetor de structs no arquivo.txt
	fwrite(cad, sizeof(struct cadastro), 4, f);
	fclose(f);

	//Agora vamos ler o conteúdo do arquivo de modo randômico

	FILE *f2 = fopen("arquivo.txt", "rb");
	if (f2 == NULL){
		printf("Erro na abertura\n");
		exit(1);
	}

	struct cadastro c;
	//Posicionando o "ponteiro" de leitura do arquivo no inicio do terceiro struct armazenado.
	fseek(f2, 2*sizeof(struct cadastro), SEEK_SET);
	//Lendo a terceira estrutura armazenada no arquivo.
	fread(&c, sizeof(struct cadastro), 1, f2);

	printf("%s\n%s\n%d\n", c.nome, c.rua, c.idade);

	fclose(f2);

	/*
	
	Função rewind();

	A função rewind() é outra opção de movimentação dentro de arquivo, ela simplismente retorna o "ponteiro" de leitura do arquivo para a posição 0, ou seja, para o seu início.

	//Forma geral:

	void rewind(FILE *fp);

	//É uma boa opção para ler o mesmo arquivo duas vezes. Sendo assim, não será necessário abrir o arquivo duas vezes.

	*/

	//Exemplo da utilização do rewind()

	FILE *f3 = fopen("arquivo.txt", "rb");
	if (f3 == NULL){
		printf("Erro na abertura\n");
		exit(1);
	}

	struct cadastro c3;
	//Pulando duas posições
	fseek(f3, 2*sizeof(struct cadastro), SEEK_SET);
	//Retornando o "ponteiro" de leitura para o inicio
	rewind(f3);
	//Lendo o primeiro registro
	fread(&c3, sizeof(struct cadastro), 1, f3);
	printf("%s\n%s\n%d\n", c3.nome, c3.rua, c3.idade);

	fclose(f3);

	return 0;
}