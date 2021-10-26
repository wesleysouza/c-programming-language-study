/*
Notas -> Aula 46 - Funcao - Parte 4 - Retorno de uma Função
Fonte -> https://youtu.be/E3zGQKc0BX4
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função sem retorno
void imprime(int n){
	int i;
	for(i = 1; i <= n; i++){
		printf("Linha %d\n", i);
	}
}

int soma(int x, int y){
	return x + y;
}

//Função com dois return
int maior(int x, int y){
	if (x > y)
	{
		return x; // na hora que o return é executado a função termina (semelhante ao break)
	}
	else{
		return y;
	}
}

void imprime_log(float x){
	if (x <= 0){
		return; //encerra a função mas não retorna nada
	}
	printf("Log = %f\n", log(x));
}

int main(){
	/* Retorno da função:
	é como uma função devolve o seu resultado (se ele existir) para quem a chamou

	tipo nome_função(parâmetros){
		conjunto de declarações e comandos
		return expressão ou valor //A expressão deve ser do mesmo tipo
	}
	*/

	/*
	Tipos de retorno:
	int, char, float, double
	void
	struct
	ponteiros

	Um "array" só pode ser retornado se ele estiver dentro de uma "struct"
	*/

	//chamando função sem retorno.
	imprime(5);
	//chamando função com retorno.
	int x = soma(4, 5);

	return 0;
}