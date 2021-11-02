/*
Notas -> Aula 48 - Funcao - Parte 6 - Passagem por Referência
Fonte -> https://youtu.be/E-r4WkkwbVI
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

void somaMaisUmPorValor(int n){
	n = n + 1;
}

void somaMaisUmPorRef(int *n){ //Recebe o endereço de x
	(*n) = (*n) + 1; //Lembrar do * para não ter problemas na execução da função
	printf("Dentro da função: x = %d\n", x);
}


int main(){
	/*
	Passagem "Por Referência": o endereço de onde o dado está armazenado na memória é passado para a função.

	Assim, a função pode modificar o valor do parâmetro.
	*/

	/*
	EXEMPLO 1: Função scanf
	
	int x = 5;
	printf("Antes do scanf: x = %d\n", x);
	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Depois do scanf: x = %d\n", x);
	*/

	/* Parâmetro por referência: usa-se o operador "*" na frente do nome do parâmetro durante a declaração da função"
	
	//Por Valor
	void soma_main_um(int n);
	//Por referência
	void soma_main_um(int *n);

	*/

	int x = 5;
	printf("Antes da função: x = %d\n", x);
	somaMaisUmPorRef(&x); // & é necessário na passagem por referência
	printf("Depois da função: x = %d\n", x);

	return 0;
}
