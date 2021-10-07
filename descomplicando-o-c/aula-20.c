/*
Notas -> Aula 20 - Comando Do-While
Fonte -> https://youtu.be/VH6AycSgjN0
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){

	/* 
	O comando do-while:
	permite executar, repedidamente e AO MENOS UMA VEZ, um conjunto de comandos de acordo com uma condição
	*/

	//Forma geral:
	/*
	do{
		conjunto de comandos
	}while(condição); 
	
	*/

	//A condição é testada só no final. Esse comando é o ideal quando vc precisa iniciar a execução do loop independente da condição ser verdadeira ou falsa, ou seja, que o bloco de comandos dentro do "do" seja executado pelo menos uma vez.

	//Exemplo 1

	int a, b;
	printf("Digite dois valores inteiros: ");
	scanf("%d %d", &a, &b);
	do{ //Uma vez pelo menos eu vou executar!
		printf("%d\n", a);
		a++;
	}while (a < b); //Também está sujeito ao loop infinito.
	printf("Fim do programa \n");

	//Exemplo 2 - Menu de opções

	int opcao;

	do{
		printf("Escolha uma opção \n");
		printf("(1) Opção 1 \n");
		printf("(2) Opção 2 \n");
		printf("(3) Opção 3 \n");
		printf("Digite qualquer outro dígito para sair!");
		scanf("%d", &opcao);
	}while((opcao < 1) || (opcao < 3));
	printf("Você escolheu a opção %d \n", opcao);

	//system("pause");
	return 0;
}