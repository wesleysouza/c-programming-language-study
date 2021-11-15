/*
Notas -> Aula 67 - Arquivos - Parte 2 - Arquivos texto e binário
Fonte -> https://youtu.be/ueg-IE8cZH4
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	A linguagem C trabalha com apenas dois tipos de arquivos:
	- arquivos texto: Podem ser editados no bloco de notas
	- arquivos binários: Não podem ser editados no bloco de notas

	//ARQUIVOS TEXTO:
	- Os dados são gravados exatamente como seriam impressos na tela;
	- Os dados são gravados com caracteres 8 bits utilizando a tabela ASCII.
	- Para isso, existe uma etapa de "conversão" dos dados.

	//Problemas com a conversão:
	- arquivos maiores
	- leitura e escrita lentas

	Considere um número inteiro com 8 dígitos:
	*/

	int n = 12345678; //32 bits na memória.

	/*
	Em um arquivo texto, cada dígito será convertido para seu caractere ASCII, ou seja, 8 bits por dígito.

	"12345678" // 64 bits na memória
	
	
	//ARQUIVO BINÁRIO:
	- Os dados são gravados exatamente como estão organizados na memória do computador.
	- Não existe etapa de "conversão" dos dados.

	Consequentemente:
	- arquivos em geral menores;
	- leitura e escrita mais rápida;
	
	Exemplo do inteiro de 8 dígitos:
	*/

	int n2 = 12345678; // 32 bits na memória.

	/*
	Em um arquivo binário, o conteúdo da memória será copiado diretamente para o arquivo sem conversão.
	
	13245678 //32 bits no arquivo (codificado)

	*/

	return 0;
}