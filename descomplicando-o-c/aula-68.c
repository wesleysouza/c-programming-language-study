/*
Notas -> Aula 68 - Arquivos - Parte 3 - Abrir e Fechar
Fonte -> https://youtu.be/uYymG_oUPeY
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	Função fopen(): permite abrir um arquivo em um determinado modo de leitura ou escrita.
	*/

	//Forma geral
	//FILE *fopen(char *nome, char *modo);

	//Exemplo:

	//Abrindo arquivo com o nome "arquivo.txt" no modo de leitura;
	
	FILE * f;
	f = fopen("arquivo.txt", "w");
	//Pode dar erro se o arquivo não existir...

	/*
	Se a função fopen() não conseguir abrir o arquivo, ela irá retornar NULL.

	Exemplo:
	*/ 

	FILE *f2;
	f2 = fopen("arquivo2.txt", "w");
	if (f2 = NULL){
		printf("Erro na abertura do arquivo!\n");
		exit(1); //aborta o programa.
	}

	//PASSANDO NOME E CAMINHO DO ARQUIVO

	/*
	Para o "nome" do arquivo, podemos usar caminho:
	- absoluto (endereço completo)
	- relativo (relativo a pasta do programa)

	Obs.: Nos nossos programas é recomendável deixar o arquivo no mesmo diretório do arquivo.c, pois facilita bastante.

	Exemplos:
	*/

	FILE *f3;
	// Caminho absoluto
	f3 = fopen("C:\\Documentos\\Projeto\\arquivo.txt", "w");
	// Caminho relativo
	f3 = fopen("arquivo.txt", "w");
	f3 = fopen("..\\Projeto\\arquivo.txt", "w");

	// As duas barras (\\) é utilizada nos sistemas Windows, no linux vai dar problema.
	// Os dois pontos (..) quer dizer retorne a raiz, no caso do Windows o C:

	//MODOS DE ABERTURA

	/*
	O modo de abertura determina que tipo de uso será feito do arquivo.
	*/

	FILE *fa;

	//Leitura de arquivo do tipo Texto
	fa = fopen("arquivo.txt", "r");
	//Escrita de arquivo do tipo Texto
	fa = fopen("arquivo.txt", "w");
	//Leitura de arquivo Binário
	fa = fopen("arquivo.txt", "rb");
	//Escrita de arquivo Binário
	fa = fopen("arquivo.txt", "wb");

	//MODOS DE ABERTURA POSSÍVEIS (ver slide)

	//FECHANDO O ARQUIVO

	/*
	Sempre que terminarmos de usar um arquivo, devemos fechá-lo. Para realizar essa tarefa, usa-se a função fclose()

	Forma Geral

	int fclose(FILE *f);

	fclose() retorna ZERO no caso de sucesso no fechamento do arquivo.
	*/

	//Fechar o arquivo garante que todos os dados foram realmente gravados

	fclose(fa);
	fclose(f);
	fclose(f2);
	fclose(f3);

	return 0;
}