/*
Notas -> Aula 17 - Comando SWITCH
Fonte -> https://youtu.be/z395-PmpzlI
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* 
	Comando switch

	O comnando switch permite fazer seleções multiplas com base no valor de uma variável do tipo int ou char.
	*/

	/*
	Forma geral
	switch(variavel)
	{
		case valor1: conjunto de comandos; break;
		case valor2: conjunto de comandos; break;
		case valor3: conjunto de comandos; break;
		//Não precisamos de chave no switch, para sair do case utilizamos o comando break.
		//O defalut é executado se a variavel não recebe nenhum dos valores acima.		
		default: conjunto de comandos;
	}
	*/
	

	char ch;
	printf("Digite um simbolo de pontuação: ");
	scanf("%c", &ch);

	switch(ch){
		case '.': 
			printf("Ponto.\n"); 
			break;
		case ',': 
			printf("Virgula.\n"); 
			break;
		case ':': 
			printf("Dois pontos.\n"); 
			break;
		case ';': 
			printf("Ponto e virgula.\n"); 
			break;
		default : 
			printf("Nao eh pontuacao.\n"); 
	}

	//system("pause");
	return 0;
}